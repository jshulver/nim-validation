/* Generated by Nim Compiler v0.18.1 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I'/home/jaron/.choosenim/toolchains/nim-#devel/lib' -o /home/jaron/nimble-meta/src/nimcache/stdlib_options.o /home/jaron/nimble-meta/src/nimcache/stdlib_options.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Option_HEmqEHziDcvusZwdi0aAgw tyObject_Option_HEmqEHziDcvusZwdi0aAgw;
typedef struct tyObject_ValidationError_aXnTBPeyi88c39aD8TIHWFg tyObject_ValidationError_aXnTBPeyi88c39aD8TIHWFg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g;
typedef struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_ValidationError_aXnTBPeyi88c39aD8TIHWFg {
NimStringDesc* message;
};
struct tyObject_Option_HEmqEHziDcvusZwdi0aAgw {
tyObject_ValidationError_aXnTBPeyi88c39aD8TIHWFg val;
NIM_BOOL has;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
NU raise_id;
Exception* up;
};
struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA {
  Exception Sup;
};
struct tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g {
  tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA Sup;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isSome_iM0Qvrw9cbOk7N5anau1apAoptions)(tyObject_Option_HEmqEHziDcvusZwdi0aAgw self);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__AA0GzkpypVNokMe3fCS6EA)(tyObject_ValidationError_aXnTBPeyi88c39aD8TIHWFg x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
static N_INLINE(NIM_BOOL, isNone_iM0Qvrw9cbOk7N5anau1apA_2options)(tyObject_Option_HEmqEHziDcvusZwdi0aAgw self);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_E31uzfKZFyNg6dDBfxT70Q)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_aXnTBPeyi88c39aD8TIHWFg_;
extern TNimType NTI_Gi06FkNeykJn7mrqRZYrkA_;
TNimType NTI_bf8oYOS2OmekHPekjQ7N3g_;
TNimType NTI_E31uzfKZFyNg6dDBfxT70Q_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_HEmqEHziDcvusZwdi0aAgw_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
STRING_LITERAL(TM_4DNs4bMUkswhWc4o4dM9bbg_2, "Some(", 5);
STRING_LITERAL(TM_4DNs4bMUkswhWc4o4dM9bbg_3, ")", 1);
STRING_LITERAL(TM_4DNs4bMUkswhWc4o4dM9bbg_4, "None[ValidationError]", 21);
STRING_LITERAL(TM_4DNs4bMUkswhWc4o4dM9bbg_5, "Can\'t obtain a value from a `none`", 34);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NIM_BOOL, isSome_iM0Qvrw9cbOk7N5anau1apAoptions)(tyObject_Option_HEmqEHziDcvusZwdi0aAgw self) {
	NIM_BOOL result;
	nimfr_("isSome", "options.nim");
	result = (NIM_BOOL)0;
	nimln_(115, "options.nim");
	result = self.has;
	popFrame();
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__gjv3f9cQiUqZpcpOB2IVYzA)(tyObject_Option_HEmqEHziDcvusZwdi0aAgw self) {
	NimStringDesc* result;
	nimfr_("$", "options.nim");
	result = (NimStringDesc*)0;
	nimln_(185, "options.nim");
	nimln_(189, "options.nim");
	{
		NIM_BOOL T3_;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = isSome_iM0Qvrw9cbOk7N5anau1apAoptions(self);
		if (!T3_) goto LA4_;
		nimln_(190, "options.nim");
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = dollar__AA0GzkpypVNokMe3fCS6EA(self.val);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + 6);
appendString(T6_, ((NimStringDesc*) &TM_4DNs4bMUkswhWc4o4dM9bbg_2));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM_4DNs4bMUkswhWc4o4dM9bbg_3));
		result = T6_;
	}
	goto LA1_;
	LA4_: ;
	{
		result = copyString(((NimStringDesc*) &TM_4DNs4bMUkswhWc4o4dM9bbg_4));
	}
	LA1_: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isNone_iM0Qvrw9cbOk7N5anau1apA_2options)(tyObject_Option_HEmqEHziDcvusZwdi0aAgw self) {
	NIM_BOOL result;
	nimfr_("isNone", "options.nim");
	result = (NIM_BOOL)0;
	nimln_(121, "options.nim");
	result = !(self.has);
	popFrame();
	return result;
}
static N_NIMCALL(void, Marker_tyRef_E31uzfKZFyNg6dDBfxT70Q)(void* p, NI op) {
	tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g* a;
	a = (tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g*)p;
	nimGCvisit((void*)(*a).Sup.Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.Sup.message, op);
	nimGCvisit((void*)(*a).Sup.Sup.trace, op);
	nimGCvisit((void*)(*a).Sup.Sup.up, op);
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(250, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(252, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(253, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, get_ErstGCbnxlUul7eGCCjFWw)(tyObject_Option_HEmqEHziDcvusZwdi0aAgw self, tyObject_ValidationError_aXnTBPeyi88c39aD8TIHWFg* Result) {
	nimfr_("get", "options.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_aXnTBPeyi88c39aD8TIHWFg_));
	nimln_(129, "options.nim");
	nimln_(131, "options.nim");
	{
		NIM_BOOL T3_;
		tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = isNone_iM0Qvrw9cbOk7N5anau1apA_2options(self);
		if (!T3_) goto LA4_;
		T6_ = (tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g*)0;
		T6_ = (tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g*) newObj((&NTI_E31uzfKZFyNg6dDBfxT70Q_), sizeof(tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g));
		(*T6_).Sup.Sup.Sup.m_type = (&NTI_bf8oYOS2OmekHPekjQ7N3g_);
		T7_ = (NimStringDesc*)0;
		T7_ = (*T6_).Sup.Sup.message; (*T6_).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM_4DNs4bMUkswhWc4o4dM9bbg_5));
		if (T7_) nimGCunrefNoCycle(T7_);
		nimln_(132, "options.nim");
		raiseException((Exception*)T6_, "UnpackError:ObjectType");
	}
	LA4_: ;
	unsureAsgnRef((void**) (&(*Result).message), copyString(self.val.message));
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, some_WDskkjvG7OojJSkqbohGOQ)(tyObject_ValidationError_aXnTBPeyi88c39aD8TIHWFg val, tyObject_Option_HEmqEHziDcvusZwdi0aAgw* Result) {
	nimfr_("some", "options.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_HEmqEHziDcvusZwdi0aAgw_));
	nimln_(92, "options.nim");
	(*Result).has = NIM_TRUE;
	nimln_(93, "options.nim");
	unsureAsgnRef((void**) (&(*Result).val.message), copyString(val.message));
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, none_cbiu6X7z5hI5dRoRx6mN4g)(tyObject_Option_HEmqEHziDcvusZwdi0aAgw* Result) {
	nimfr_("none", "options.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_HEmqEHziDcvusZwdi0aAgw_));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsInit000)(void) {
	nimfr_("options", "options.nim");
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsDatInit000)(void) {
static TNimNode* TM_4DNs4bMUkswhWc4o4dM9bbg_6[2];
static TNimNode TM_4DNs4bMUkswhWc4o4dM9bbg_0[4];
NTI_bf8oYOS2OmekHPekjQ7N3g_.size = sizeof(tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g);
NTI_bf8oYOS2OmekHPekjQ7N3g_.kind = 17;
NTI_bf8oYOS2OmekHPekjQ7N3g_.base = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
TM_4DNs4bMUkswhWc4o4dM9bbg_0[0].len = 0; TM_4DNs4bMUkswhWc4o4dM9bbg_0[0].kind = 2;
NTI_bf8oYOS2OmekHPekjQ7N3g_.node = &TM_4DNs4bMUkswhWc4o4dM9bbg_0[0];
NTI_E31uzfKZFyNg6dDBfxT70Q_.size = sizeof(tyObject_UnpackErrorcolonObjectType__bf8oYOS2OmekHPekjQ7N3g*);
NTI_E31uzfKZFyNg6dDBfxT70Q_.kind = 22;
NTI_E31uzfKZFyNg6dDBfxT70Q_.base = (&NTI_bf8oYOS2OmekHPekjQ7N3g_);
NTI_E31uzfKZFyNg6dDBfxT70Q_.marker = Marker_tyRef_E31uzfKZFyNg6dDBfxT70Q;
NTI_HEmqEHziDcvusZwdi0aAgw_.size = sizeof(tyObject_Option_HEmqEHziDcvusZwdi0aAgw);
NTI_HEmqEHziDcvusZwdi0aAgw_.kind = 18;
NTI_HEmqEHziDcvusZwdi0aAgw_.base = 0;
NTI_HEmqEHziDcvusZwdi0aAgw_.flags = 2;
TM_4DNs4bMUkswhWc4o4dM9bbg_6[0] = &TM_4DNs4bMUkswhWc4o4dM9bbg_0[2];
TM_4DNs4bMUkswhWc4o4dM9bbg_0[2].kind = 1;
TM_4DNs4bMUkswhWc4o4dM9bbg_0[2].offset = offsetof(tyObject_Option_HEmqEHziDcvusZwdi0aAgw, val);
TM_4DNs4bMUkswhWc4o4dM9bbg_0[2].typ = (&NTI_aXnTBPeyi88c39aD8TIHWFg_);
TM_4DNs4bMUkswhWc4o4dM9bbg_0[2].name = "val";
TM_4DNs4bMUkswhWc4o4dM9bbg_6[1] = &TM_4DNs4bMUkswhWc4o4dM9bbg_0[3];
TM_4DNs4bMUkswhWc4o4dM9bbg_0[3].kind = 1;
TM_4DNs4bMUkswhWc4o4dM9bbg_0[3].offset = offsetof(tyObject_Option_HEmqEHziDcvusZwdi0aAgw, has);
TM_4DNs4bMUkswhWc4o4dM9bbg_0[3].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_4DNs4bMUkswhWc4o4dM9bbg_0[3].name = "has";
TM_4DNs4bMUkswhWc4o4dM9bbg_0[1].len = 2; TM_4DNs4bMUkswhWc4o4dM9bbg_0[1].kind = 2; TM_4DNs4bMUkswhWc4o4dM9bbg_0[1].sons = &TM_4DNs4bMUkswhWc4o4dM9bbg_6[0];
NTI_HEmqEHziDcvusZwdi0aAgw_.node = &TM_4DNs4bMUkswhWc4o4dM9bbg_0[1];
}
