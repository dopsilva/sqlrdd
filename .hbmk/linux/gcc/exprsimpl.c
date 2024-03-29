/*
 * Harbour 3.2.0dev (r2312082217)
 * GNU C 13.2 (64-bit)
 * Generated C source from "source/exprsimpl.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( EXPRESSIONSIMPLIFIERBASE );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIERBASE_SIMPLIFYCOMPOSITION );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIERBASE_COMPOSITIONASSESSABLE );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIERBASE_NEW );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( ALGEBRASET );
HB_FUNC( EXPRESSIONSIMPLIFIER );
HB_FUNC( CONDITIONSIMPLIFIER );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_SIMPLIFY );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_ASSESSABLE );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_VALUEASSESSABLE );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_FUNCTIONASSESSABLE );
HB_FUNC_EXTERN( VALUEEXPRESSION );
HB_FUNC_EXTERN( COMPOSEDEXPRESSION );
HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_NEW );
HB_FUNC_EXTERN( __BREAKBLOCK );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( HB_CSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( FUNCTIONEXPRESSION );
HB_FUNC_EXTERN( PARAMETER );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( RELATIONMANAGER );
HB_FUNC_EXTERN( __DYNSISFUN );
HB_FUNC_EXTERN( __DYNSGETINDEX );
HB_FUNC_STATIC( CONDITIONSIMPLIFIER_SIMPLIFY );
HB_FUNC_STATIC( CONDITIONSIMPLIFIER_ASSESSABLE );
HB_FUNC_STATIC( CONDITIONSIMPLIFIER_BOOLEANEXPRASSESSABLE );
HB_FUNC_STATIC( CONDITIONSIMPLIFIER_COMPARISONASSESSABLE );
HB_FUNC_EXTERN( BOOLEANEXPRESSION );
HB_FUNC_EXTERN( COMPOSEDCONDITION );
HB_FUNC_STATIC( CONDITIONSIMPLIFIER_NEW );
HB_FUNC_EXTERN( CONVERTTOCONDITION );
HB_FUNC_EXTERN( COMPARISON );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_EXPRSIMPL )
{ "EXPRESSIONSIMPLIFIERBASE", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIERBASE )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXPRESSIONSIMPLIFIERBASE_SIMPLIFYCOMPOSITION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIERBASE_SIMPLIFYCOMPOSITION )}, NULL },
{ "EXPRESSIONSIMPLIFIERBASE_COMPOSITIONASSESSABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIERBASE_COMPOSITIONASSESSABLE )}, NULL },
{ "EXPRESSIONSIMPLIFIERBASE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIERBASE_NEW )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LFIXVARIABLES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LIGNORERELATIONS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCONTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "OOPERAND1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OOPERAND2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SIMPLIFY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LISSIMPLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OEXPRESSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALGEBRASET", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALGEBRASET )}, NULL },
{ "OOPERATOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETTYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDENTITYELEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CABSORBENTELEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWSIMPLEEXPRESSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCONTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CVALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCLIPPEREXPRESSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASYMBOLS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWCOMPOSEDEXPRESSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LSIMPLIFIED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXPRESSIONSIMPLIFIER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIER )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCONDITIONSIMPLIFIER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OCONDITIONSIMPLIFIER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONDITIONSIMPLIFIER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONDITIONSIMPLIFIER )}, NULL },
{ "LFIXVARIABLES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIGNORERELATIONS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXPRESSIONSIMPLIFIER_SIMPLIFY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIER_SIMPLIFY )}, NULL },
{ "EXPRESSIONSIMPLIFIER_ASSESSABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIER_ASSESSABLE )}, NULL },
{ "EXPRESSIONSIMPLIFIER_VALUEASSESSABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIER_VALUEASSESSABLE )}, NULL },
{ "EXPRESSIONSIMPLIFIER_FUNCTIONASSESSABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIER_FUNCTIONASSESSABLE )}, NULL },
{ "VALUEEXPRESSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALUEEXPRESSION )}, NULL },
{ "COMPOSEDEXPRESSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( COMPOSEDEXPRESSION )}, NULL },
{ "EXPRESSIONSIMPLIFIER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXPRESSIONSIMPLIFIER_NEW )}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__BREAKBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __BREAKBLOCK )}, NULL },
{ "EVALUATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "HB_CSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "FUNCTIONEXPRESSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( FUNCTIONEXPRESSION )}, NULL },
{ "PARAMETER", {HB_FS_PUBLIC}, {HB_FUNCNAME( PARAMETER )}, NULL },
{ "ISKINDOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SIMPLIFYCOMPOSITION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APARAMETERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCONDITIONSIMPLIFIER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LISBYREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "CFUNCTIONNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LSIMPLIFIED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALUEASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FUNCTIONASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPOSITIONASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALUETYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETRELATIONS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RELATIONMANAGER", {HB_FS_PUBLIC}, {HB_FUNCNAME( RELATIONMANAGER )}, NULL },
{ "__DYNSISFUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DYNSISFUN )}, NULL },
{ "__DYNSGETINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DYNSGETINDEX )}, NULL },
{ "CONDITIONSIMPLIFIER_SIMPLIFY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONDITIONSIMPLIFIER_SIMPLIFY )}, NULL },
{ "CONDITIONSIMPLIFIER_ASSESSABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONDITIONSIMPLIFIER_ASSESSABLE )}, NULL },
{ "CONDITIONSIMPLIFIER_BOOLEANEXPRASSESSABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONDITIONSIMPLIFIER_BOOLEANEXPRASSESSABLE )}, NULL },
{ "CONDITIONSIMPLIFIER_COMPARISONASSESSABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONDITIONSIMPLIFIER_COMPARISONASSESSABLE )}, NULL },
{ "BOOLEANEXPRESSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOOLEANEXPRESSION )}, NULL },
{ "COMPOSEDCONDITION", {HB_FS_PUBLIC}, {HB_FUNCNAME( COMPOSEDCONDITION )}, NULL },
{ "CONDITIONSIMPLIFIER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONDITIONSIMPLIFIER_NEW )}, NULL },
{ "__OEXPRESSIONSIMPLIFIER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OEXPRESSIONSIMPLIFIER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONVERTTOCONDITION", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONVERTTOCONDITION )}, NULL },
{ "COMPARISON", {HB_FS_PUBLIC}, {HB_FUNCNAME( COMPARISON )}, NULL },
{ "_LDENIED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDENIED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOOLEANEXPRASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPARISONASSESSABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_EXPRSIMPL, "source/exprsimpl.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_EXPRSIMPL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_EXPRSIMPL )
   #include "hbiniseg.h"
#endif

HB_FUNC( EXPRESSIONSIMPLIFIERBASE )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,95,0,36,5,0,103,1,0,100,8,
		29,39,2,176,1,0,104,1,0,12,1,29,28,2,
		166,222,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,25,69,120,112,114,101,115,115,105,111,110,83,
		105,109,112,108,105,102,105,101,114,66,97,115,101,0,
		108,4,4,1,0,108,0,112,3,80,2,36,6,0,
		122,80,1,36,7,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,9,99,67,111,110,116,
		101,120,116,0,4,1,0,9,112,5,73,36,9,0,
		122,80,1,36,10,0,48,5,0,95,2,100,9,95,
		1,121,72,121,72,121,72,106,14,108,70,105,120,86,
		97,114,105,97,98,108,101,115,0,4,1,0,9,112,
		5,73,36,12,0,122,80,1,36,13,0,48,5,0,
		95,2,100,9,95,1,121,72,121,72,121,72,106,17,
		108,73,103,110,111,114,101,82,101,108,97,116,105,111,
		110,115,0,4,1,0,9,112,5,73,36,15,0,122,
		80,1,36,16,0,48,6,0,95,2,106,9,83,105,
		109,112,108,105,102,121,0,112,1,73,36,18,0,122,
		80,1,36,19,0,48,6,0,95,2,106,11,65,115,
		115,101,115,115,97,98,108,101,0,112,1,73,36,21,
		0,92,2,80,1,36,22,0,48,6,0,95,2,106,
		20,78,101,119,83,105,109,112,108,101,69,120,112,114,
		101,115,115,105,111,110,0,112,1,73,36,24,0,92,
		2,80,1,36,25,0,48,6,0,95,2,106,22,78,
		101,119,67,111,109,112,111,115,101,100,69,120,112,114,
		101,115,115,105,111,110,0,112,1,73,36,27,0,92,
		2,80,1,36,28,0,48,7,0,95,2,106,20,83,
		105,109,112,108,105,102,121,67,111,109,112,111,115,105,
		116,105,111,110,0,108,8,95,1,121,72,121,72,121,
		72,112,3,73,36,30,0,92,2,80,1,36,31,0,
		48,7,0,95,2,106,22,67,111,109,112,111,115,105,
		116,105,111,110,65,115,115,101,115,115,97,98,108,101,
		0,108,9,95,1,121,72,121,72,121,72,112,3,73,
		36,33,0,122,80,1,36,34,0,48,7,0,95,2,
		106,4,110,101,119,0,108,10,95,1,121,72,121,72,
		121,72,112,3,73,36,35,0,48,11,0,95,2,112,
		0,73,167,14,0,0,176,12,0,104,1,0,95,2,
		20,2,168,48,13,0,95,2,112,0,80,3,176,14,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,15,0,95,3,164,146,1,0,
		73,95,3,110,7,48,13,0,103,1,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIERBASE_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,38,0,95,1,100,69,28,14,36,39,
		0,48,16,0,102,95,1,112,1,73,36,41,0,95,
		2,100,69,28,14,36,42,0,48,17,0,102,95,2,
		112,1,73,36,44,0,48,18,0,102,176,19,0,95,
		3,12,1,112,1,73,36,45,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIERBASE_SIMPLIFYCOMPOSITION )
{
	static const HB_BYTE pcode[] =
	{
		13,5,1,36,49,0,48,20,0,95,1,112,0,48,
		21,0,95,1,112,0,4,2,0,80,4,36,50,0,
		122,165,80,6,26,208,0,36,51,0,48,22,0,102,
		95,4,95,6,1,112,1,95,4,95,6,2,36,52,
		0,48,23,0,95,4,95,6,1,112,0,29,167,0,
		36,53,0,48,24,0,95,4,95,6,1,112,0,80,
		5,36,54,0,48,2,0,176,25,0,12,0,48,26,
		0,95,1,112,0,48,27,0,95,1,112,0,112,2,
		80,2,36,55,0,48,28,0,95,2,112,0,176,19,
		0,48,29,0,95,4,95,6,1,112,0,12,1,8,
		28,30,36,56,0,95,6,122,8,28,15,48,22,0,
		102,95,4,92,2,1,112,1,25,6,95,4,122,1,
		110,7,36,57,0,48,30,0,95,2,112,0,100,69,
		28,52,48,30,0,95,2,112,0,176,19,0,48,29,
		0,95,4,95,6,1,112,0,12,1,8,28,27,36,
		58,0,48,31,0,102,48,32,0,95,1,112,0,48,
		30,0,95,2,112,0,112,2,110,7,36,50,0,175,
		6,0,92,2,15,29,48,255,36,63,0,95,4,122,
		1,48,20,0,95,1,112,0,8,28,17,95,4,92,
		2,1,48,21,0,95,1,112,0,8,31,98,36,64,
		0,48,33,0,48,34,0,95,4,122,1,112,0,112,
		0,106,2,32,0,72,48,35,0,48,26,0,95,1,
		112,0,112,0,122,1,72,106,2,32,0,72,48,33,
		0,48,34,0,95,4,92,2,1,112,0,112,0,72,
		80,3,36,65,0,48,36,0,102,48,32,0,95,1,
		112,0,95,3,95,4,122,1,48,26,0,95,1,112,
		0,95,4,92,2,1,112,5,110,7,36,67,0,95,
		1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIERBASE_COMPOSITIONASSESSABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,72,0,48,37,0,48,20,0,95,1,
		112,0,112,0,21,31,19,73,48,38,0,102,48,20,
		0,95,1,112,0,112,1,21,28,32,73,48,37,0,
		48,21,0,95,1,112,0,112,0,21,31,16,73,48,
		38,0,102,48,21,0,95,1,112,0,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXPRESSIONSIMPLIFIER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,95,0,36,74,0,103,2,0,100,8,
		29,146,2,176,1,0,104,2,0,12,1,29,135,2,
		166,73,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,21,69,120,112,114,101,115,115,105,111,110,83,
		105,109,112,108,105,102,105,101,114,0,108,0,4,1,
		0,108,39,112,3,80,2,36,75,0,92,4,80,1,
		36,76,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,22,95,111,67,111,110,100,105,116,
		105,111,110,83,105,109,112,108,105,102,105,101,114,0,
		4,1,0,9,112,5,73,36,78,0,92,4,80,1,
		36,79,0,48,40,0,95,2,106,21,111,67,111,110,
		100,105,116,105,111,110,83,105,109,112,108,105,102,105,
		101,114,0,89,66,0,1,0,0,0,48,41,0,95,
		1,112,0,100,8,28,42,48,42,0,95,1,48,2,
		0,176,43,0,12,0,48,44,0,95,1,112,0,48,
		45,0,95,1,112,0,48,32,0,95,1,112,0,112,
		3,112,1,25,9,48,41,0,95,1,112,0,6,95,
		1,121,72,121,72,121,72,112,3,73,36,81,0,122,
		80,1,36,82,0,48,7,0,95,2,106,9,83,105,
		109,112,108,105,102,121,0,108,46,95,1,121,72,121,
		72,121,72,112,3,73,36,84,0,122,80,1,36,85,
		0,48,7,0,95,2,106,11,65,115,115,101,115,115,
		97,98,108,101,0,108,47,95,1,121,72,121,72,121,
		72,112,3,73,36,87,0,92,4,80,1,36,88,0,
		48,7,0,95,2,106,16,86,97,108,117,101,65,115,
		115,101,115,115,97,98,108,101,0,108,48,95,1,121,
		72,121,72,121,72,112,3,73,36,90,0,92,4,80,
		1,36,91,0,48,7,0,95,2,106,19,70,117,110,
		99,116,105,111,110,65,115,115,101,115,115,97,98,108,
		101,0,108,49,95,1,121,72,121,72,121,72,112,3,
		73,36,93,0,92,2,80,1,36,94,0,48,40,0,
		95,2,106,20,78,101,119,83,105,109,112,108,101,69,
		120,112,114,101,115,115,105,111,110,0,89,22,0,3,
		0,0,0,48,2,0,176,50,0,12,0,95,2,95,
		3,112,2,6,95,1,121,72,121,72,121,72,112,3,
		73,36,96,0,92,2,80,1,36,97,0,48,40,0,
		95,2,106,22,78,101,119,67,111,109,112,111,115,101,
		100,69,120,112,114,101,115,115,105,111,110,0,89,28,
		0,6,0,0,0,48,2,0,176,51,0,12,0,95,
		2,95,3,95,4,95,5,95,6,112,5,6,95,1,
		121,72,121,72,121,72,112,3,73,36,99,0,122,80,
		1,36,100,0,48,7,0,95,2,106,4,110,101,119,
		0,108,52,95,1,121,72,121,72,121,72,112,3,73,
		36,101,0,48,11,0,95,2,112,0,73,167,14,0,
		0,176,12,0,104,2,0,95,2,20,2,168,48,13,
		0,95,2,112,0,80,3,176,14,0,95,3,106,10,
		73,110,105,116,67,108,97,115,115,0,12,2,28,12,
		48,15,0,95,3,164,146,1,0,73,95,3,110,7,
		48,13,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,36,104,0,48,42,0,102,95,4,112,1,
		73,36,105,0,48,2,0,48,53,0,102,112,0,95,
		1,95,2,95,3,112,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_SIMPLIFY )
{
	static const HB_BYTE pcode[] =
	{
		13,10,1,36,109,0,9,80,11,36,111,0,48,37,
		0,95,1,112,0,28,9,36,112,0,95,1,110,7,
		36,113,0,48,38,0,102,95,1,112,1,29,62,1,
		36,114,0,113,38,0,0,176,54,0,12,0,178,36,
		115,0,48,55,0,48,34,0,95,1,112,0,112,0,
		80,2,36,116,0,120,80,11,73,114,9,0,0,36,
		117,0,115,73,36,119,0,95,11,29,8,1,36,121,
		0,176,56,0,95,2,12,1,106,2,67,0,8,28,
		46,36,122,0,106,2,39,0,95,2,72,106,2,39,
		0,72,80,2,36,123,0,48,2,0,176,50,0,12,
		0,48,32,0,95,1,112,0,95,2,112,2,80,8,
		26,203,0,36,124,0,176,56,0,95,2,12,1,106,
		2,78,0,8,31,30,176,56,0,95,2,12,1,106,
		2,76,0,8,31,16,176,56,0,95,2,12,1,106,
		2,85,0,8,28,40,36,125,0,176,57,0,95,2,
		12,1,80,2,36,126,0,48,2,0,176,50,0,12,
		0,48,32,0,95,1,112,0,95,2,112,2,80,8,
		25,119,36,127,0,176,56,0,95,2,12,1,106,2,
		68,0,8,28,102,36,128,0,106,2,39,0,176,58,
		0,95,2,12,1,72,106,2,39,0,72,80,2,36,
		129,0,48,2,0,176,59,0,12,0,48,32,0,95,
		1,112,0,106,6,99,116,111,100,40,0,95,2,72,
		106,2,41,0,72,106,5,99,116,111,100,0,48,2,
		0,176,60,0,12,0,48,2,0,176,50,0,12,0,
		48,32,0,95,1,112,0,95,2,112,2,9,112,2,
		4,1,0,112,4,80,8,36,133,0,95,11,32,158,
		1,36,134,0,48,61,0,95,1,106,19,67,111,109,
		112,111,115,101,100,69,120,112,114,101,115,115,105,111,
		110,0,112,1,28,18,36,135,0,48,62,0,102,95,
		1,112,1,80,8,26,109,1,36,136,0,48,61,0,
		95,1,106,19,70,117,110,99,116,105,111,110,69,120,
		112,114,101,115,115,105,111,110,0,112,1,29,75,1,
		36,137,0,4,0,0,80,4,36,138,0,9,80,5,
		36,139,0,122,165,80,3,26,158,0,36,140,0,48,
		63,0,95,1,112,0,95,3,1,80,6,36,141,0,
		48,61,0,48,24,0,95,6,112,0,106,14,67,111,
		110,100,105,116,105,111,110,66,97,115,101,0,112,1,
		28,15,36,142,0,48,64,0,102,112,0,80,9,25,
		8,36,144,0,102,80,9,36,146,0,48,65,0,95,
		6,112,0,31,29,48,22,0,95,9,48,24,0,95,
		6,112,0,112,1,165,80,7,48,24,0,95,6,112,
		0,8,28,16,36,147,0,176,66,0,95,4,95,6,
		20,2,25,31,36,149,0,176,66,0,95,4,48,2,
		0,176,60,0,12,0,95,7,9,112,2,20,2,36,
		150,0,120,80,5,36,139,0,175,3,0,176,67,0,
		48,63,0,95,1,112,0,12,1,15,29,88,255,36,
		153,0,95,5,29,128,0,36,154,0,48,68,0,95,
		1,112,0,106,2,40,0,72,80,10,36,155,0,122,
		165,80,3,25,58,36,156,0,96,10,0,48,33,0,
		48,34,0,48,24,0,95,4,95,3,1,112,0,112,
		0,112,0,95,3,176,67,0,95,4,12,1,8,28,
		8,106,2,41,0,25,6,106,2,44,0,72,135,36,
		155,0,175,3,0,176,67,0,95,4,12,1,15,28,
		192,36,159,0,48,2,0,176,59,0,12,0,48,32,
		0,95,1,112,0,95,10,48,68,0,95,1,112,0,
		95,4,112,4,80,8,36,163,0,95,8,100,8,28,
		9,36,164,0,95,1,80,8,36,166,0,48,69,0,
		95,8,120,112,1,73,36,167,0,95,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_ASSESSABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,171,0,48,70,0,95,1,112,0,100,
		69,28,14,36,172,0,48,70,0,95,1,112,0,110,
		7,36,176,0,48,61,0,95,1,106,16,86,97,108,
		117,101,69,120,112,114,101,115,115,105,111,110,0,112,
		1,28,17,36,177,0,48,71,0,102,95,1,112,1,
		80,2,25,96,36,178,0,48,61,0,95,1,106,19,
		70,117,110,99,116,105,111,110,69,120,112,114,101,115,
		115,105,111,110,0,112,1,28,17,36,179,0,48,72,
		0,102,95,1,112,1,80,2,25,48,36,180,0,48,
		61,0,95,1,106,19,67,111,109,112,111,115,101,100,
		69,120,112,114,101,115,115,105,111,110,0,112,1,28,
		15,36,181,0,48,73,0,102,95,1,112,1,80,2,
		36,183,0,48,74,0,95,1,95,2,112,1,73,36,
		184,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_VALUEASSESSABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,189,0,48,75,0,95,1,112,0,106,
		6,118,97,108,117,101,0,8,28,11,36,190,0,120,
		80,2,26,140,0,36,191,0,48,75,0,95,1,112,
		0,106,9,118,97,114,105,97,98,108,101,0,8,28,
		15,36,192,0,48,44,0,102,112,0,80,2,25,102,
		36,193,0,48,75,0,95,1,112,0,106,6,102,105,
		101,108,100,0,8,28,81,36,194,0,48,45,0,102,
		112,0,21,31,60,73,48,32,0,102,112,0,48,32,
		0,95,1,112,0,8,68,21,28,48,73,176,67,0,
		48,76,0,48,2,0,176,77,0,12,0,112,0,48,
		32,0,102,112,0,48,32,0,95,1,112,0,112,2,
		12,1,121,8,21,28,9,73,48,44,0,102,112,0,
		80,2,36,197,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXPRESSIONSIMPLIFIER_FUNCTIONASSESSABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,201,0,122,165,80,2,25,101,36,202,
		0,48,61,0,48,24,0,48,63,0,95,1,112,0,
		95,2,1,112,0,106,14,67,111,110,100,105,116,105,
		111,110,66,97,115,101,0,112,1,28,15,36,203,0,
		48,64,0,102,112,0,80,3,25,8,36,205,0,102,
		80,3,36,207,0,48,38,0,95,3,48,24,0,48,
		63,0,95,1,112,0,95,2,1,112,0,112,1,31,
		8,36,208,0,9,110,7,36,201,0,175,2,0,176,
		67,0,48,63,0,95,1,112,0,12,1,15,28,144,
		36,211,0,176,78,0,176,79,0,48,68,0,95,1,
		112,0,12,1,12,1,21,28,43,73,48,68,0,95,
		1,112,0,106,8,100,101,108,101,116,101,100,0,8,
		68,21,28,20,73,48,68,0,95,1,112,0,106,6,
		114,101,99,110,111,0,8,68,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CONDITIONSIMPLIFIER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,95,0,36,214,0,103,3,0,100,8,
		29,53,2,176,1,0,104,3,0,12,1,29,42,2,
		166,236,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,20,67,111,110,100,105,116,105,111,110,83,105,
		109,112,108,105,102,105,101,114,0,108,0,4,1,0,
		108,43,112,3,80,2,36,215,0,92,4,80,1,36,
		216,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,23,95,111,69,120,112,114,101,115,115,
		105,111,110,83,105,109,112,108,105,102,105,101,114,0,
		4,1,0,9,112,5,73,36,218,0,122,80,1,36,
		219,0,48,7,0,95,2,106,9,83,105,109,112,108,
		105,102,121,0,108,80,95,1,121,72,121,72,121,72,
		112,3,73,36,221,0,122,80,1,36,222,0,48,7,
		0,95,2,106,11,65,115,115,101,115,115,97,98,108,
		101,0,108,81,95,1,121,72,121,72,121,72,112,3,
		73,36,224,0,92,4,80,1,36,225,0,48,7,0,
		95,2,106,22,66,111,111,108,101,97,110,69,120,112,
		114,65,115,115,101,115,115,97,98,108,101,0,108,82,
		95,1,121,72,121,72,121,72,112,3,73,36,227,0,
		92,4,80,1,36,228,0,48,7,0,95,2,106,21,
		67,111,109,112,97,114,105,115,111,110,65,115,115,101,
		115,115,97,98,108,101,0,108,83,95,1,121,72,121,
		72,121,72,112,3,73,36,230,0,92,2,80,1,36,
		231,0,48,40,0,95,2,106,20,78,101,119,83,105,
		109,112,108,101,69,120,112,114,101,115,115,105,111,110,
		0,89,36,0,3,0,0,0,48,2,0,176,84,0,
		12,0,95,2,95,3,48,2,0,176,50,0,12,0,
		95,2,95,3,112,2,112,3,6,95,1,121,72,121,
		72,121,72,112,3,73,36,233,0,92,2,80,1,36,
		234,0,48,40,0,95,2,106,22,78,101,119,67,111,
		109,112,111,115,101,100,69,120,112,114,101,115,115,105,
		111,110,0,89,28,0,6,0,0,0,48,2,0,176,
		85,0,12,0,95,2,95,3,95,4,95,5,95,6,
		112,5,6,95,1,121,72,121,72,121,72,112,3,73,
		36,236,0,122,80,1,36,237,0,48,7,0,95,2,
		106,4,110,101,119,0,108,86,95,1,121,72,121,72,
		121,72,112,3,73,36,238,0,48,11,0,95,2,112,
		0,73,167,14,0,0,176,12,0,104,3,0,95,2,
		20,2,168,48,13,0,95,2,112,0,80,3,176,14,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,15,0,95,3,164,146,1,0,
		73,95,3,110,7,48,13,0,103,3,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CONDITIONSIMPLIFIER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,241,0,48,87,0,102,48,2,0,176,
		39,0,12,0,95,1,95,2,95,3,102,112,4,112,
		1,73,36,242,0,48,2,0,48,53,0,102,112,0,
		95,1,95,2,95,3,112,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CONDITIONSIMPLIFIER_SIMPLIFY )
{
	static const HB_BYTE pcode[] =
	{
		13,6,1,36,246,0,48,37,0,95,1,112,0,28,
		9,36,247,0,95,1,110,7,36,248,0,48,61,0,
		95,1,106,18,66,111,111,108,101,97,110,69,120,112,
		114,101,115,115,105,111,110,0,112,1,28,56,36,249,
		0,48,22,0,48,88,0,102,112,0,48,24,0,95,
		1,112,0,112,1,80,5,36,250,0,95,5,48,24,
		0,95,1,112,0,8,32,151,1,36,251,0,176,89,
		0,95,5,12,1,80,6,26,136,1,36,253,0,48,
		61,0,95,1,106,11,67,111,109,112,97,114,105,115,
		111,110,0,112,1,29,65,1,36,254,0,48,22,0,
		48,88,0,102,112,0,48,20,0,95,1,112,0,112,
		1,80,3,36,255,0,48,22,0,48,88,0,102,112,
		0,48,21,0,95,1,112,0,112,1,80,4,36,0,
		1,48,33,0,48,34,0,95,3,112,0,112,0,106,
		2,32,0,72,48,35,0,48,26,0,95,1,112,0,
		112,0,122,1,72,106,2,32,0,72,48,33,0,48,
		34,0,95,4,112,0,112,0,72,80,7,36,1,1,
		48,61,0,95,3,106,16,86,97,108,117,101,69,120,
		112,114,101,115,115,105,111,110,0,112,1,28,125,48,
		75,0,95,3,112,0,106,6,118,97,108,117,101,0,
		8,28,107,48,61,0,95,4,106,16,86,97,108,117,
		101,69,120,112,114,101,115,115,105,111,110,0,112,1,
		28,80,48,75,0,95,4,112,0,106,6,118,97,108,
		117,101,0,8,28,62,36,2,1,176,57,0,95,7,
		42,11,123,1,0,80,2,36,3,1,48,2,0,176,
		84,0,12,0,48,32,0,95,1,112,0,95,2,48,
		2,0,176,50,0,12,0,48,32,0,95,1,112,0,
		95,2,112,2,112,3,80,6,25,111,36,4,1,95,
		3,48,20,0,95,1,112,0,8,28,14,95,4,48,
		21,0,95,1,112,0,8,31,84,36,5,1,48,2,
		0,176,90,0,12,0,48,32,0,95,1,112,0,95,
		7,95,3,48,26,0,95,1,112,0,95,4,112,5,
		80,6,25,47,36,7,1,48,61,0,95,1,106,18,
		67,111,109,112,111,115,101,100,67,111,110,100,105,116,
		105,111,110,0,112,1,28,15,36,8,1,48,62,0,
		102,95,1,112,1,80,6,36,10,1,95,6,100,8,
		28,9,36,11,1,95,1,80,6,36,13,1,48,91,
		0,95,6,48,92,0,95,1,112,0,112,1,73,36,
		14,1,48,69,0,95,1,120,112,1,73,36,15,1,
		95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CONDITIONSIMPLIFIER_ASSESSABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,19,1,48,70,0,95,1,112,0,100,
		69,28,14,36,20,1,48,70,0,95,1,112,0,110,
		7,36,23,1,48,61,0,95,1,106,18,66,111,111,
		108,101,97,110,69,120,112,114,101,115,115,105,111,110,
		0,112,1,28,17,36,24,1,48,93,0,102,95,1,
		112,1,80,2,25,87,36,25,1,48,61,0,95,1,
		106,11,67,111,109,112,97,114,105,115,111,110,0,112,
		1,28,17,36,26,1,48,94,0,102,95,1,112,1,
		80,2,25,47,36,27,1,48,61,0,95,1,106,18,
		67,111,109,112,111,115,101,100,67,111,110,100,105,116,
		105,111,110,0,112,1,28,15,36,28,1,48,73,0,
		102,95,1,112,1,80,2,36,30,1,48,74,0,95,
		1,95,2,112,1,73,36,31,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CONDITIONSIMPLIFIER_BOOLEANEXPRASSESSABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,34,1,48,38,0,48,88,0,102,112,
		0,48,24,0,95,1,112,0,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CONDITIONSIMPLIFIER_COMPARISONASSESSABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,37,1,48,38,0,48,88,0,102,112,
		0,48,20,0,95,1,112,0,112,1,21,28,21,73,
		48,38,0,48,88,0,102,112,0,48,21,0,95,1,
		112,0,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,95,0,3,0,7
	};

	hb_vmExecute( pcode, symbols );
}

