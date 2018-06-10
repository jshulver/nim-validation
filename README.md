# Nim Validation

## Description
Nim validation is a simple to use validation library that performs validations against nim objects using their field pragmas. This approach is inspired by libraries like Hibernate validators and Rust's validation library.

The aim of this library is to provide a simple, flexible mechanism for adding validations to your object fields - it does this without using RTTI and is type safe. It is easy to create custom validations, and currently has a small number of validations to demonstrate that it works. Nim Validation also works recursively.

This library is still very young, so is quite likely to explode. Licensed under GPLv3. Currently it will build under 0.18.0.

## Example
There are some examples in the tests directory. Here's one for a quick viewing.

```nim
type TestObject = object
    something {.lessThan(50).}: int # Here we use a field pragma to assert that this field should be less than 50
    stringyfield {.matchesPattern("hello|bye").}: string


# To generate the validation methods, you must call generateValidators on your type:
generateValidators(TestObject) 

# Then to validate the object you simply call validate() on it
let validation = TestObject(something: 100, stringyfield: "hello").validate()

# errorCount and hasErrors give you some information about the objects
doAssert(validation.errorCount == 1)
doAssert(validation.hasErrors == true)

# But you can also get a seq of the errors which you can use to extract messages to do with the errors
for error in validation.validationErrors:
    echo error.message

```

Example validator - here's the less than validator included in this library:

```nim

template lessThan*(x: untyped) {.pragma.}

# Note here that we have one more parameter than in the pragma template.
# the first parameter is always the field that is being validated.
proc lessThan* [T](field: T, x: T): Option[ValidationError] = 
    if not (field < x):
        return someValidationError("$1 was not less than $2".format($field, $x))
    else: return none(ValidationError)

```