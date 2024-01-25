/*
 * Harbour 3.2.0dev (r2312082217)
 * GNU C 13.2 (64-bit)
 * Generated C source from "source/sqlfirebird.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SR_FIREBIRD );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SR_CONNECTION );
HB_FUNC_STATIC( SR_FIREBIRD_CONNECTRAW );
HB_FUNC_STATIC( SR_FIREBIRD_END );
HB_FUNC_STATIC( SR_FIREBIRD_LASTERROR );
HB_FUNC_STATIC( SR_FIREBIRD_COMMIT );
HB_FUNC_STATIC( SR_FIREBIRD_ROLLBACK );
HB_FUNC_STATIC( SR_FIREBIRD_INIFIELDS );
HB_FUNC_STATIC( SR_FIREBIRD_EXECUTERAW );
HB_FUNC_STATIC( SR_FIREBIRD_ALLOCSTATEMENT );
HB_FUNC_STATIC( SR_FIREBIRD_FETCHRAW );
HB_FUNC_STATIC( SR_FIREBIRD_FIELDGET );
HB_FUNC_STATIC( SR_FIREBIRD_GETLINE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ARRAY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( FBLINEPROCESSED );
HB_FUNC_EXTERN( FBFETCH );
HB_FUNC_EXTERN( SR_RECNONAME );
HB_FUNC_EXTERN( SR_DELETEDNAME );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( FBNUMRESULTCOLS );
HB_FUNC_EXTERN( FBDESCRIBECOL );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( SR_MSG );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( FBERROR );
HB_FUNC_EXTERN( FBCONNECT );
HB_FUNC_EXTERN( SR_MSGLOGFILE );
HB_FUNC_EXTERN( FBVERSION );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( FBBEGINTRANSACTION );
HB_FUNC_EXTERN( FBCLOSE );
HB_FUNC_EXTERN( FBCOMMITTRANSACTION );
HB_FUNC_EXTERN( FBROLLBACKTRANSACTION );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( FBEXECUTE );
HB_FUNC_EXTERN( FBEXECUTEIMMEDIATE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SQLFIREBIRD )
{ "SR_FIREBIRD", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SR_CONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CONNECTION )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_FIREBIRD_CONNECTRAW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_CONNECTRAW )}, NULL },
{ "SR_FIREBIRD_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_END )}, NULL },
{ "SR_FIREBIRD_LASTERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_LASTERROR )}, NULL },
{ "SR_FIREBIRD_COMMIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_COMMIT )}, NULL },
{ "SR_FIREBIRD_ROLLBACK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_ROLLBACK )}, NULL },
{ "SR_FIREBIRD_INIFIELDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_INIFIELDS )}, NULL },
{ "SR_FIREBIRD_EXECUTERAW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_EXECUTERAW )}, NULL },
{ "SR_FIREBIRD_ALLOCSTATEMENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_ALLOCSTATEMENT )}, NULL },
{ "SR_FIREBIRD_FETCHRAW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_FETCHRAW )}, NULL },
{ "SR_FIREBIRD_FIELDGET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_FIELDGET )}, NULL },
{ "SR_FIREBIRD_GETLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_FIREBIRD_GETLINE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ARRAY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "ACURRLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBLINEPROCESSED", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBLINEPROCESSED )}, NULL },
{ "HENV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LQUERYONLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NSYSTEMID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACURRLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NRETCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBFETCH", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBFETCH )}, NULL },
{ "RUNTIMEERR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLASTCOMM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRETCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LSETNEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NSETOPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LSETNEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_RECNONAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_RECNONAME )}, NULL },
{ "SR_DELETEDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_DELETEDNAME )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "EXECUTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCOMMENTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "FBNUMRESULTCOLS", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBNUMRESULTCOLS )}, NULL },
{ "_NFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBDESCRIBECOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBDESCRIBECOL )}, NULL },
{ "LASTERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "SQLTYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLLEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_MSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_MSG )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "_AFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FREESTATEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBERROR )}, NULL },
{ "FBCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBCONNECT )}, NULL },
{ "CDTB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUSER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPASSWORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCHARSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_MSGLOGFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_MSGLOGFILE )}, NULL },
{ "_CCONNECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBVERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBVERSION )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "FBBEGINTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBBEGINTRANSACTION )}, NULL },
{ "_HENV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSYSTEMNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSYSTEMVERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DETECTTARGETDB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMMIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBCLOSE )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBCOMMITTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBCOMMITTRANSACTION )}, NULL },
{ "ROLLBACK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBROLLBACKTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBROLLBACKTRANSACTION )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "FBEXECUTE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBEXECUTE )}, NULL },
{ "_LRESULTSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FBEXECUTEIMMEDIATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBEXECUTEIMMEDIATE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SQLFIREBIRD, "source/sqlfirebird.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SQLFIREBIRD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SQLFIREBIRD )
   #include "hbiniseg.h"
#endif

HB_FUNC( SR_FIREBIRD )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,90,0,36,22,0,103,1,0,100,8,
		29,5,2,176,1,0,104,1,0,12,1,29,250,1,
		166,188,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,12,83,82,95,70,73,82,69,66,73,82,68,
		0,108,4,4,1,0,108,0,112,3,80,2,36,24,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,10,97,67,117,114,114,76,105,110,101,0,
		4,1,0,9,112,5,73,36,26,0,48,6,0,95,
		2,106,11,67,111,110,110,101,99,116,82,97,119,0,
		108,7,95,1,121,72,121,72,121,72,112,3,73,36,
		27,0,48,6,0,95,2,106,4,69,110,100,0,108,
		8,95,1,121,72,121,72,121,72,112,3,73,36,28,
		0,48,6,0,95,2,106,10,76,97,115,116,69,114,
		114,111,114,0,108,9,95,1,121,72,121,72,121,72,
		112,3,73,36,29,0,48,6,0,95,2,106,7,67,
		111,109,109,105,116,0,108,10,95,1,121,72,121,72,
		121,72,112,3,73,36,30,0,48,6,0,95,2,106,
		9,82,111,108,108,66,97,99,107,0,108,11,95,1,
		121,72,121,72,121,72,112,3,73,36,31,0,48,6,
		0,95,2,106,10,73,110,105,70,105,101,108,100,115,
		0,108,12,95,1,121,72,121,72,121,72,112,3,73,
		36,32,0,48,6,0,95,2,106,11,69,120,101,99,
		117,116,101,82,97,119,0,108,13,95,1,121,72,121,
		72,121,72,112,3,73,36,33,0,48,6,0,95,2,
		106,15,65,108,108,111,99,83,116,97,116,101,109,101,
		110,116,0,108,14,95,1,121,72,121,72,121,72,112,
		3,73,36,34,0,48,6,0,95,2,106,9,70,101,
		116,99,104,82,97,119,0,108,15,95,1,121,72,121,
		72,121,72,112,3,73,36,35,0,48,6,0,95,2,
		106,9,70,105,101,108,100,71,101,116,0,108,16,95,
		1,121,72,121,72,121,72,112,3,73,36,36,0,48,
		6,0,95,2,106,8,71,101,116,108,105,110,101,0,
		108,17,95,1,121,72,121,72,121,72,112,3,73,36,
		38,0,48,18,0,95,2,112,0,73,167,14,0,0,
		176,19,0,104,1,0,95,2,20,2,168,48,20,0,
		95,2,112,0,80,3,176,21,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		22,0,95,3,164,146,1,0,73,95,3,110,7,48,
		20,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_GETLINE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,36,46,0,95,2,100,8,28,5,120,80,
		2,36,48,0,95,3,100,8,28,21,36,49,0,176,
		23,0,176,24,0,95,1,12,1,12,1,80,3,25,
		39,36,50,0,176,24,0,95,3,12,1,176,24,0,
		95,1,12,1,69,28,19,36,51,0,176,25,0,95,
		3,176,24,0,95,1,12,1,20,2,36,54,0,48,
		26,0,102,112,0,100,8,28,56,36,55,0,176,27,
		0,48,28,0,102,112,0,93,0,16,95,1,48,29,
		0,102,112,0,48,30,0,102,112,0,95,2,95,3,
		20,7,36,56,0,48,31,0,102,95,3,112,1,73,
		36,57,0,95,3,110,7,36,60,0,122,165,80,4,
		25,25,36,61,0,48,26,0,102,112,0,95,4,1,
		95,3,95,4,2,36,60,0,175,4,0,176,24,0,
		95,3,12,1,15,28,225,36,64,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_FIELDGET )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,70,0,48,26,0,102,112,0,100,8,
		28,75,36,71,0,95,3,100,8,28,5,120,80,3,
		36,72,0,48,31,0,102,176,23,0,176,24,0,95,
		2,12,1,12,1,112,1,73,36,73,0,176,27,0,
		48,28,0,102,112,0,93,0,16,95,2,48,29,0,
		102,112,0,48,30,0,102,112,0,95,3,48,26,0,
		102,112,0,20,7,36,76,0,48,26,0,102,112,0,
		95,1,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_FETCHRAW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,82,0,48,32,0,102,92,255,112,1,
		73,36,83,0,95,2,100,8,28,10,48,33,0,102,
		112,0,80,2,36,84,0,95,1,100,8,28,5,120,
		80,1,36,86,0,48,28,0,102,112,0,100,69,28,
		36,36,87,0,48,32,0,102,176,34,0,48,28,0,
		102,112,0,12,1,112,1,73,36,88,0,48,31,0,
		102,100,112,1,73,25,93,36,90,0,48,35,0,102,
		106,1,0,106,69,70,66,70,101,116,99,104,32,45,
		32,73,110,118,97,108,105,100,32,99,117,114,115,111,
		114,32,115,116,97,116,101,13,10,13,10,76,97,115,
		116,32,99,111,109,109,97,110,100,32,115,101,110,116,
		32,116,111,32,100,97,116,97,98,97,115,101,32,58,
		32,13,10,0,48,36,0,102,112,0,72,112,2,73,
		36,93,0,48,37,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_ALLOCSTATEMENT )
{
	static const HB_BYTE pcode[] =
	{
		36,99,0,48,38,0,102,112,0,28,25,36,100,0,
		48,39,0,102,112,0,121,8,73,36,103,0,48,40,
		0,102,9,112,1,73,36,106,0,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_INIFIELDS )
{
	static const HB_BYTE pcode[] =
	{
		13,17,7,36,112,0,121,80,9,36,113,0,121,80,
		10,121,80,11,121,80,12,36,116,0,4,0,0,80,
		19,36,117,0,121,80,20,106,1,0,80,22,4,0,
		0,80,23,4,0,0,80,24,36,119,0,95,1,100,
		8,28,5,120,80,1,36,120,0,95,4,100,8,28,
		5,9,80,4,36,121,0,95,5,100,8,28,7,106,
		1,0,80,5,36,122,0,95,6,100,8,28,9,176,
		41,0,12,0,80,6,36,123,0,95,7,100,8,28,
		9,176,42,0,12,0,80,7,36,125,0,95,1,29,
		78,3,36,126,0,176,43,0,95,3,12,1,31,80,
		36,127,0,48,44,0,102,95,3,48,45,0,102,112,
		0,28,51,106,45,32,47,42,32,79,112,101,110,32,
		87,111,114,107,97,114,101,97,32,119,105,116,104,32,
		99,117,115,116,111,109,32,83,81,76,32,99,111,109,
		109,97,110,100,32,42,47,0,25,5,106,1,0,72,
		9,112,2,80,21,26,223,2,36,130,0,48,46,0,
		102,106,122,115,101,108,101,99,116,32,97,46,114,100,
		98,36,102,105,101,108,100,95,110,97,109,101,44,32,
		98,46,114,100,98,36,102,105,101,108,100,95,112,114,
		101,99,105,115,105,111,110,32,43,32,48,32,102,114,
		111,109,32,114,100,98,36,114,101,108,97,116,105,111,
		110,95,102,105,101,108,100,115,32,97,44,32,114,100,
		98,36,102,105,101,108,100,115,32,98,32,119,104,101,
		114,101,32,97,46,114,100,98,36,114,101,108,97,116,
		105,111,110,95,110,97,109,101,32,61,32,39,0,176,
		47,0,95,2,106,2,34,0,106,1,0,12,3,72,
		106,44,39,32,97,110,100,32,97,46,114,100,98,36,
		102,105,101,108,100,95,115,111,117,114,99,101,32,61,
		32,98,46,114,100,98,36,102,105,101,108,100,95,110,
		97,109,101,0,72,9,120,96,23,0,112,4,73,36,
		131,0,48,46,0,102,105,116,1,115,101,108,101,99,
		116,32,115,103,46,114,100,98,36,102,105,101,108,100,
		95,110,97,109,101,32,97,115,32,102,105,101,108,100,
		95,110,97,109,101,44,32,114,99,46,114,100,98,36,
		114,101,108,97,116,105,111,110,95,110,97,109,101,32,
		97,115,32,116,97,98,108,101,95,110,97,109,101,44,
		32,32,40,115,103,46,82,68,66,36,70,73,69,76,
		68,95,80,79,83,73,84,73,79,78,32,43,32,49,
		41,32,65,83,32,102,105,101,108,100,95,112,111,115,
		105,116,105,111,110,32,102,114,111,109,32,114,100,98,
		36,105,110,100,105,99,101,115,32,105,120,32,108,101,
		102,116,32,106,111,105,110,32,114,100,98,36,105,110,
		100,101,120,95,115,101,103,109,101,110,116,115,32,115,
		103,32,111,110,32,105,120,46,114,100,98,36,105,110,
		100,101,120,95,110,97,109,101,32,61,32,115,103,46,
		114,100,98,36,105,110,100,101,120,95,110,97,109,101,
		32,108,101,102,116,32,106,111,105,110,32,114,100,98,
		36,114,101,108,97,116,105,111,110,95,99,111,110,115,
		116,114,97,105,110,116,115,32,114,99,32,111,110,32,
		114,99,46,114,100,98,36,105,110,100,101,120,95,110,
		97,109,101,32,61,32,105,120,46,114,100,98,36,105,
		110,100,101,120,95,110,97,109,101,32,119,104,101,114,
		101,32,114,99,46,114,100,98,36,99,111,110,115,116,
		114,97,105,110,116,95,116,121,112,101,32,61,32,39,
		80,82,73,77,65,82,89,32,75,69,89,39,9,9,
		32,32,97,110,100,32,114,99,46,114,100,98,36,114,
		101,108,97,116,105,111,110,95,110,97,109,101,32,61,
		32,39,0,176,47,0,95,2,106,2,34,0,106,1,
		0,12,3,72,106,2,39,0,72,9,120,96,24,0,
		112,4,73,36,133,0,48,44,0,102,106,17,83,69,
		76,69,67,84,32,65,46,42,32,70,82,79,77,32,
		0,95,2,72,106,4,32,65,32,0,72,95,4,28,
		25,95,5,106,13,32,79,82,68,69,82,32,66,89,
		32,65,46,0,72,95,6,72,25,17,106,13,32,87,
		72,69,82,69,32,49,32,61,32,48,0,72,48,45,
		0,102,112,0,28,27,106,21,32,47,42,32,79,112,
		101,110,32,87,111,114,107,97,114,101,97,32,42,47,
		0,25,5,106,1,0,72,9,112,2,80,21,36,135,
		0,95,21,121,69,28,14,95,21,122,69,28,8,36,
		136,0,100,110,7,36,140,0,48,32,0,102,176,48,
		0,48,28,0,102,112,0,96,9,0,12,2,112,1,
		121,69,28,90,36,142,0,48,35,0,102,106,1,0,
		106,60,70,66,78,117,109,82,101,115,117,108,116,67,
		111,108,115,32,69,114,114,111,114,13,10,13,10,76,
		97,115,116,32,99,111,109,109,97,110,100,32,115,101,
		110,116,32,116,111,32,100,97,116,97,98,97,115,101,
		32,58,32,13,10,0,48,36,0,102,112,0,72,112,
		2,73,36,143,0,100,110,7,36,146,0,176,23,0,
		95,9,12,1,80,19,36,147,0,48,49,0,102,95,
		9,112,1,73,36,149,0,122,165,80,8,26,238,1,
		36,151,0,121,80,20,36,153,0,48,32,0,102,176,
		50,0,48,28,0,102,112,0,95,8,96,13,0,96,
		10,0,96,11,0,96,20,0,96,12,0,12,7,112,
		1,121,69,28,105,36,155,0,48,35,0,102,106,1,
		0,106,22,70,66,68,101,115,99,114,105,98,101,67,
		111,108,32,69,114,114,111,114,13,10,0,48,51,0,
		102,112,0,72,106,2,13,0,72,106,2,10,0,72,
		106,33,76,97,115,116,32,99,111,109,109,97,110,100,
		32,115,101,110,116,32,116,111,32,100,97,116,97,98,
		97,115,101,32,58,32,0,72,48,36,0,102,112,0,
		72,112,2,73,36,156,0,100,110,7,36,158,0,95,
		11,80,14,36,159,0,95,20,80,15,36,161,0,176,
		52,0,176,53,0,95,13,12,1,12,1,80,13,36,
		162,0,176,54,0,95,23,89,22,0,1,0,1,0,
		13,0,176,55,0,95,1,122,1,12,1,95,255,8,
		6,12,2,80,16,36,163,0,48,56,0,102,95,10,
		95,13,95,11,112,3,80,17,36,164,0,48,57,0,
		102,95,10,95,11,96,20,0,112,3,80,18,36,165,
		0,95,16,121,15,28,29,95,23,95,16,1,92,2,
		1,121,15,28,17,36,166,0,95,23,95,16,1,92,
		2,1,80,18,25,33,36,167,0,95,10,92,8,8,
		31,16,95,10,92,6,8,31,9,95,10,92,2,8,
		28,9,36,168,0,92,19,80,18,36,170,0,176,54,
		0,95,24,89,22,0,1,0,1,0,13,0,176,55,
		0,95,1,122,1,12,1,95,255,8,6,12,2,80,
		16,36,172,0,95,17,106,2,85,0,8,28,42,36,
		173,0,48,35,0,102,106,1,0,176,58,0,92,21,
		12,1,95,13,72,106,4,32,58,32,0,72,176,59,
		0,95,10,12,1,72,112,2,73,25,84,36,175,0,
		95,16,121,15,28,43,36,176,0,95,13,95,17,95,
		18,95,20,95,12,122,16,95,10,100,95,8,95,15,
		95,24,95,16,1,92,3,1,100,4,11,0,95,19,
		95,8,2,25,34,36,178,0,95,13,95,17,95,18,
		95,20,95,12,122,16,95,10,100,95,8,95,15,121,
		100,4,11,0,95,19,95,8,2,36,149,0,175,8,
		0,95,9,15,29,18,254,36,185,0,48,60,0,102,
		95,19,112,1,73,36,187,0,95,1,28,16,95,4,
		31,12,36,188,0,48,61,0,102,112,0,73,36,191,
		0,95,19,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_LASTERROR )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,197,0,121,80,2,36,198,0,176,62,
		0,48,28,0,102,112,0,96,2,0,12,2,80,1,
		36,200,0,176,53,0,95,1,12,1,106,22,32,45,
		32,78,97,116,105,118,101,32,101,114,114,111,114,32,
		99,111,100,101,32,0,72,176,53,0,176,59,0,95,
		2,12,1,12,1,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_CONNECTRAW )
{
	static const HB_BYTE pcode[] =
	{
		13,3,15,36,223,0,176,63,0,48,64,0,102,112,
		0,48,65,0,102,112,0,48,66,0,102,112,0,48,
		67,0,102,112,0,96,17,0,12,5,80,16,36,225,
		0,95,16,121,69,29,165,0,36,226,0,48,32,0,
		102,95,16,112,1,73,36,227,0,176,68,0,106,19,
		67,111,110,110,101,99,116,105,111,110,32,69,114,114,
		111,114,58,32,0,176,53,0,176,59,0,95,16,12,
		1,12,1,72,106,29,32,40,99,104,101,99,107,32,
		102,98,46,108,111,103,41,32,45,32,68,97,116,97,
		98,97,115,101,58,32,0,72,48,64,0,102,112,0,
		72,106,15,32,45,32,85,115,101,114,110,97,109,101,
		32,58,32,0,72,48,65,0,102,112,0,72,106,35,
		32,40,80,97,115,115,119,111,114,100,32,110,111,116,
		32,115,104,111,119,110,32,102,111,114,32,115,101,99,
		117,114,105,116,121,41,0,72,20,1,36,228,0,102,
		110,7,36,230,0,48,69,0,102,95,8,112,1,73,
		36,231,0,176,47,0,176,70,0,95,17,12,1,106,
		16,40,97,99,99,101,115,115,32,109,101,116,104,111,
		100,41,0,106,1,0,12,3,80,10,36,232,0,176,
		71,0,95,10,176,72,0,106,10,70,105,114,101,98,
		105,114,100,32,0,95,10,12,2,92,9,72,92,3,
		12,3,80,18,36,235,0,176,73,0,95,17,12,1,
		80,16,36,237,0,95,16,121,69,28,70,36,238,0,
		48,32,0,102,95,16,112,1,73,36,239,0,176,68,
		0,106,27,84,114,97,110,115,97,99,116,105,111,110,
		32,83,116,97,114,116,32,101,114,114,111,114,32,58,
		32,0,176,53,0,176,59,0,95,16,12,1,12,1,
		72,20,1,36,240,0,102,110,7,36,243,0,48,74,
		0,102,95,17,112,1,73,36,244,0,48,75,0,102,
		95,10,112,1,73,36,245,0,48,76,0,102,95,18,
		112,1,73,36,247,0,48,77,0,102,112,0,73,36,
		249,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_END )
{
	static const HB_BYTE pcode[] =
	{
		36,255,0,48,78,0,102,112,0,73,36,0,1,176,
		79,0,48,28,0,102,112,0,20,1,36,2,1,48,
		80,0,48,81,0,102,112,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_COMMIT )
{
	static const HB_BYTE pcode[] =
	{
		36,7,1,48,78,0,48,81,0,102,112,0,112,0,
		73,36,8,1,48,32,0,102,176,82,0,48,28,0,
		102,112,0,12,1,112,1,73,36,9,1,48,32,0,
		102,176,73,0,48,28,0,102,112,0,12,1,112,1,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_ROLLBACK )
{
	static const HB_BYTE pcode[] =
	{
		36,14,1,48,83,0,48,81,0,102,112,0,112,0,
		73,36,15,1,48,32,0,102,176,84,0,48,28,0,
		102,112,0,12,1,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_FIREBIRD_EXECUTERAW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,22,1,176,52,0,176,85,0,176,86,
		0,95,1,12,1,92,6,12,2,12,1,106,7,83,
		69,76,69,67,84,0,8,28,35,36,23,1,176,87,
		0,48,28,0,102,112,0,95,1,92,3,12,3,80,
		2,36,24,1,48,88,0,102,120,112,1,73,25,33,
		36,26,1,176,89,0,48,28,0,102,112,0,95,1,
		92,3,12,3,80,2,36,27,1,48,88,0,102,9,
		112,1,73,36,30,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,90,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

