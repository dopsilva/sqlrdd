/*
 * Harbour 3.2.0dev (r2312082217)
 * GNU C 13.2 (64-bit)
 * Generated C source from "source/sqlmy.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SR_MYSQL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SR_CONNECTION );
HB_FUNC_STATIC( SR_MYSQL_CONNECTRAW );
HB_FUNC_STATIC( SR_MYSQL_END );
HB_FUNC_STATIC( SR_MYSQL_LASTERROR );
HB_FUNC_STATIC( SR_MYSQL_COMMIT );
HB_FUNC_STATIC( SR_MYSQL_ROLLBACK );
HB_FUNC_STATIC( SR_MYSQL_INIFIELDS );
HB_FUNC_STATIC( SR_MYSQL_EXECUTERAW );
HB_FUNC_STATIC( SR_MYSQL_FREESTATEMENT );
HB_FUNC_STATIC( SR_MYSQL_FETCHRAW );
HB_FUNC_STATIC( SR_MYSQL_FIELDGET );
HB_FUNC_STATIC( SR_MYSQL_MORERESULTS );
HB_FUNC_STATIC( SR_MYSQL_GETLINE );
HB_FUNC_EXTERN( MYSKILLCONNID );
HB_FUNC_STATIC( SR_MYSQL_GETAFFECTEDROWS );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ARRAY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MYSLINEPROCESSED );
HB_FUNC_EXTERN( MYSFETCH );
HB_FUNC_EXTERN( MYSCLEAR );
HB_FUNC_EXTERN( SR_RECNONAME );
HB_FUNC_EXTERN( SR_DELETEDNAME );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( MYSRESULTSTATUS );
HB_FUNC_EXTERN( MYSCOLS );
HB_FUNC_EXTERN( MYSQUERYATTR );
HB_FUNC_EXTERN( HB_ENUMINDEX );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( MYSRESSTATUS );
HB_FUNC_EXTERN( MYSERRMSG );
HB_FUNC_EXTERN( MYSCONNECT );
HB_FUNC_EXTERN( MYSSTATUS );
HB_FUNC_EXTERN( SR_MSGLOGFILE );
HB_FUNC_EXTERN( MYSVERS );
HB_FUNC_EXTERN( MYSGETCONNID );
HB_FUNC_EXTERN( MYSFINISH );
HB_FUNC_EXTERN( MYSCOMMIT );
HB_FUNC_EXTERN( MYSROLLBACK );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( MYSEXEC );
HB_FUNC_EXTERN( MYSAFFECTEDROWS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SQLMY )
{ "SR_MYSQL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SR_CONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CONNECTION )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_MYSQL_CONNECTRAW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_CONNECTRAW )}, NULL },
{ "SR_MYSQL_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_END )}, NULL },
{ "SR_MYSQL_LASTERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_LASTERROR )}, NULL },
{ "SR_MYSQL_COMMIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_COMMIT )}, NULL },
{ "SR_MYSQL_ROLLBACK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_ROLLBACK )}, NULL },
{ "SR_MYSQL_INIFIELDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_INIFIELDS )}, NULL },
{ "SR_MYSQL_EXECUTERAW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_EXECUTERAW )}, NULL },
{ "SR_MYSQL_FREESTATEMENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_FREESTATEMENT )}, NULL },
{ "SR_MYSQL_FETCHRAW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_FETCHRAW )}, NULL },
{ "SR_MYSQL_FIELDGET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_FIELDGET )}, NULL },
{ "SR_MYSQL_MORERESULTS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_MORERESULTS )}, NULL },
{ "SR_MYSQL_GETLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_GETLINE )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSKILLCONNID", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSKILLCONNID )}, NULL },
{ "HDBC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_MYSQL_GETAFFECTEDROWS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SR_MYSQL_GETAFFECTEDROWS )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ARRAY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "ACURRLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSLINEPROCESSED", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSLINEPROCESSED )}, NULL },
{ "LQUERYONLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NSYSTEMID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACURRLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NRETCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HSTMT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSFETCH", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSFETCH )}, NULL },
{ "RUNTIMEERR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLASTCOMM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRETCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSCLEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSCLEAR )}, NULL },
{ "_HSTMT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_RECNONAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_RECNONAME )}, NULL },
{ "SR_DELETEDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_DELETEDNAME )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "EXECUTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCOMMENTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "MYSRESULTSTATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSRESULTSTATUS )}, NULL },
{ "_NFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSCOLS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSCOLS )}, NULL },
{ "MYSQUERYATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQUERYATTR )}, NULL },
{ "_AFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ENUMINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ENUMINDEX )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "FREESTATEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "MYSRESSTATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSRESSTATUS )}, NULL },
{ "MYSERRMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSERRMSG )}, NULL },
{ "MYSCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSCONNECT )}, NULL },
{ "CHOST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUSER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPASSWORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDTB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCOMPRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSSTATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSSTATUS )}, NULL },
{ "_NSYSTEMID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_MSGLOGFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_MSGLOGFILE )}, NULL },
{ "_CCONNECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HDBC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSVERS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSVERS )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSYSTEMNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSYSTEMVERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTARGETDB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_USID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSGETCONNID", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSGETCONNID )}, NULL },
{ "COMMIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSFINISH", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSFINISH )}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSCOMMIT )}, NULL },
{ "ROLLBACK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSROLLBACK", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSROLLBACK )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "_LRESULTSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYSEXEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSEXEC )}, NULL },
{ "MYSAFFECTEDROWS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSAFFECTEDROWS )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SQLMY, "source/sqlmy.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SQLMY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SQLMY )
   #include "hbiniseg.h"
#endif

HB_FUNC( SR_MYSQL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,95,0,36,24,0,103,1,0,100,8,
		29,135,2,176,1,0,104,1,0,12,1,29,124,2,
		166,62,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,83,82,95,77,89,83,81,76,0,108,4,
		4,1,0,108,0,112,3,80,2,36,26,0,48,5,
		0,95,2,100,100,95,1,121,72,121,72,121,72,106,
		10,97,67,117,114,114,76,105,110,101,0,4,1,0,
		9,112,5,73,36,28,0,48,6,0,95,2,106,11,
		67,111,110,110,101,99,116,82,97,119,0,108,7,95,
		1,121,72,121,72,121,72,112,3,73,36,29,0,48,
		6,0,95,2,106,4,69,110,100,0,108,8,95,1,
		121,72,121,72,121,72,112,3,73,36,30,0,48,6,
		0,95,2,106,10,76,97,115,116,69,114,114,111,114,
		0,108,9,95,1,121,72,121,72,121,72,112,3,73,
		36,31,0,48,6,0,95,2,106,7,67,111,109,109,
		105,116,0,108,10,95,1,121,72,121,72,121,72,112,
		3,73,36,32,0,48,6,0,95,2,106,9,82,111,
		108,108,66,97,99,107,0,108,11,95,1,121,72,121,
		72,121,72,112,3,73,36,33,0,48,6,0,95,2,
		106,10,73,110,105,70,105,101,108,100,115,0,108,12,
		95,1,121,72,121,72,121,72,112,3,73,36,34,0,
		48,6,0,95,2,106,11,69,120,101,99,117,116,101,
		82,97,119,0,108,13,95,1,121,72,121,72,121,72,
		112,3,73,36,35,0,48,6,0,95,2,106,14,70,
		114,101,101,83,116,97,116,101,109,101,110,116,0,108,
		14,95,1,121,72,121,72,121,72,112,3,73,36,36,
		0,48,6,0,95,2,106,9,70,101,116,99,104,82,
		97,119,0,108,15,95,1,121,72,121,72,121,72,112,
		3,73,36,37,0,48,6,0,95,2,106,9,70,105,
		101,108,100,71,101,116,0,108,16,95,1,121,72,121,
		72,121,72,112,3,73,36,38,0,48,6,0,95,2,
		106,12,77,111,114,101,82,101,115,117,108,116,115,0,
		108,17,95,1,121,72,121,72,121,72,112,3,73,36,
		39,0,48,6,0,95,2,106,8,71,101,116,108,105,
		110,101,0,108,18,95,1,121,72,121,72,121,72,112,
		3,73,36,40,0,48,19,0,95,2,106,17,75,105,
		108,108,67,111,110,110,101,99,116,105,111,110,73,68,
		0,89,22,0,2,0,0,0,176,20,0,48,21,0,
		95,1,112,0,95,2,12,2,6,95,1,121,72,121,
		72,121,72,112,3,73,36,41,0,48,6,0,95,2,
		106,16,71,101,116,65,102,102,101,99,116,101,100,82,
		111,119,115,0,108,22,95,1,121,72,121,72,121,72,
		112,3,73,36,42,0,48,23,0,95,2,112,0,73,
		167,14,0,0,176,24,0,104,1,0,95,2,20,2,
		168,48,25,0,95,2,112,0,80,3,176,26,0,95,
		3,106,10,73,110,105,116,67,108,97,115,115,0,12,
		2,28,12,48,27,0,95,3,164,146,1,0,73,95,
		3,110,7,48,25,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_MORERESULTS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,50,0,92,255,80,3,36,51,0,95,
		3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_GETLINE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,36,59,0,95,2,100,8,28,5,120,80,
		2,36,61,0,95,3,100,8,28,21,36,62,0,176,
		28,0,176,29,0,95,1,12,1,12,1,80,3,25,
		39,36,63,0,176,29,0,95,3,12,1,176,29,0,
		95,1,12,1,35,28,19,36,64,0,176,30,0,95,
		3,176,29,0,95,1,12,1,20,2,36,67,0,48,
		31,0,102,112,0,100,8,28,56,36,68,0,176,32,
		0,48,21,0,102,112,0,93,0,16,95,1,48,33,
		0,102,112,0,48,34,0,102,112,0,95,2,95,3,
		20,7,36,69,0,48,35,0,102,95,3,112,1,73,
		36,70,0,95,3,110,7,36,73,0,122,165,80,4,
		25,25,36,74,0,48,31,0,102,112,0,95,4,1,
		95,3,95,4,2,36,73,0,175,4,0,176,29,0,
		95,3,12,1,15,28,225,36,77,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_FIELDGET )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,82,0,48,31,0,102,112,0,100,8,
		28,75,36,83,0,95,3,100,8,28,5,120,80,3,
		36,84,0,48,35,0,102,176,28,0,176,29,0,95,
		2,12,1,12,1,112,1,73,36,85,0,176,32,0,
		48,21,0,102,112,0,93,0,16,95,2,48,33,0,
		102,112,0,48,34,0,102,112,0,95,3,48,31,0,
		102,112,0,20,7,36,88,0,48,31,0,102,112,0,
		95,1,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_FETCHRAW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,94,0,48,36,0,102,92,255,112,1,
		73,36,95,0,95,2,100,8,28,10,48,37,0,102,
		112,0,80,2,36,96,0,95,1,100,8,28,5,120,
		80,1,36,98,0,48,38,0,102,112,0,100,69,28,
		36,36,99,0,48,36,0,102,176,39,0,48,21,0,
		102,112,0,12,1,112,1,73,36,100,0,48,35,0,
		102,100,112,1,73,25,96,36,102,0,48,40,0,102,
		106,1,0,106,72,77,121,83,81,76,70,101,116,99,
		104,32,45,32,73,110,118,97,108,105,100,32,99,117,
		114,115,111,114,32,115,116,97,116,101,13,10,13,10,
		76,97,115,116,32,99,111,109,109,97,110,100,32,115,
		101,110,116,32,116,111,32,100,97,116,97,98,97,115,
		101,32,58,32,13,10,0,48,41,0,102,112,0,72,
		112,2,73,36,105,0,48,42,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_FREESTATEMENT )
{
	static const HB_BYTE pcode[] =
	{
		36,110,0,48,38,0,102,112,0,100,69,28,16,36,
		111,0,176,43,0,48,21,0,102,112,0,20,1,36,
		113,0,48,44,0,102,100,112,1,73,36,114,0,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_INIFIELDS )
{
	static const HB_BYTE pcode[] =
	{
		13,10,7,36,120,0,121,80,8,121,80,9,121,80,
		10,36,121,0,4,0,0,80,11,36,122,0,121,80,
		12,106,1,0,80,14,36,123,0,4,0,0,80,16,
		36,125,0,95,1,100,8,28,5,120,80,1,36,126,
		0,95,4,100,8,28,5,9,80,4,36,127,0,95,
		5,100,8,28,7,106,1,0,80,5,36,128,0,95,
		6,100,8,28,9,176,45,0,12,0,80,6,36,129,
		0,95,7,100,8,28,9,176,46,0,12,0,80,7,
		36,131,0,95,1,29,184,1,36,132,0,176,47,0,
		95,3,12,1,31,80,36,133,0,48,48,0,102,95,
		3,48,49,0,102,112,0,28,51,106,45,32,47,42,
		32,79,112,101,110,32,87,111,114,107,97,114,101,97,
		32,119,105,116,104,32,99,117,115,116,111,109,32,83,
		81,76,32,99,111,109,109,97,110,100,32,42,47,0,
		25,5,106,1,0,72,9,112,2,80,13,26,73,1,
		36,135,0,48,50,0,102,106,168,83,69,76,69,67,
		84,32,99,111,108,117,109,110,95,110,97,109,101,44,
		32,111,114,100,105,110,97,108,95,112,111,115,105,116,
		105,111,110,32,70,82,79,77,32,32,32,105,110,102,
		111,114,109,97,116,105,111,110,95,115,99,104,101,109,
		97,46,107,101,121,95,99,111,108,117,109,110,95,117,
		115,97,103,101,32,87,72,69,82,69,32,32,116,97,
		98,108,101,95,115,99,104,101,109,97,32,61,32,115,
		99,104,101,109,97,40,41,32,65,78,68,32,32,32,
		32,99,111,110,115,116,114,97,105,110,116,95,110,97,
		109,101,32,61,32,39,80,82,73,77,65,82,89,39,
		32,65,78,68,32,32,32,32,116,97,98,108,101,95,
		110,97,109,101,32,61,32,39,0,176,51,0,95,2,
		106,2,96,0,106,1,0,12,3,72,106,2,39,0,
		72,9,120,96,16,0,112,4,73,36,136,0,48,48,
		0,102,106,17,83,69,76,69,67,84,32,65,46,42,
		32,70,82,79,77,32,0,95,2,72,106,4,32,65,
		32,0,72,95,4,28,25,95,5,106,13,32,79,82,
		68,69,82,32,66,89,32,65,46,0,72,95,6,72,
		25,17,106,13,32,87,72,69,82,69,32,49,32,61,
		32,48,0,72,48,49,0,102,112,0,28,27,106,21,
		32,47,42,32,79,112,101,110,32,87,111,114,107,97,
		114,101,97,32,42,47,0,25,5,106,1,0,72,9,
		112,2,80,13,36,138,0,95,13,121,69,28,14,95,
		13,122,69,28,8,36,139,0,100,110,7,36,143,0,
		176,52,0,48,21,0,102,112,0,12,1,121,69,28,
		91,36,145,0,48,40,0,102,106,1,0,106,61,83,
		113,108,78,117,109,82,101,115,117,108,116,67,111,108,
		115,32,69,114,114,111,114,13,10,13,10,76,97,115,
		116,32,99,111,109,109,97,110,100,32,115,101,110,116,
		32,116,111,32,100,97,116,97,98,97,115,101,32,58,
		32,13,10,0,48,41,0,102,112,0,72,112,2,73,
		36,146,0,100,110,7,36,149,0,48,53,0,102,176,
		54,0,48,21,0,102,112,0,12,1,112,1,73,36,
		155,0,176,55,0,48,21,0,102,112,0,12,1,80,
		11,36,158,0,48,56,0,102,95,11,112,1,73,36,
		160,0,48,37,0,102,112,0,96,15,0,129,1,1,
		28,106,36,161,0,176,57,0,12,0,95,15,92,8,
		2,36,162,0,121,95,15,92,10,2,36,163,0,176,
		58,0,95,16,89,39,0,1,0,1,0,15,0,176,
		59,0,176,60,0,95,1,122,1,12,1,12,1,176,
		59,0,176,60,0,95,255,122,1,12,1,12,1,8,
		6,12,2,80,17,36,164,0,95,17,121,15,28,18,
		36,165,0,95,16,95,17,1,92,2,1,95,15,92,
		10,2,36,168,0,130,31,154,132,36,170,0,95,1,
		28,16,95,4,31,12,36,171,0,48,61,0,102,112,
		0,73,36,174,0,95,11,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_LASTERROR )
{
	static const HB_BYTE pcode[] =
	{
		36,180,0,48,38,0,102,112,0,100,69,28,65,36,
		181,0,106,2,40,0,176,59,0,176,62,0,48,42,
		0,102,112,0,12,1,12,1,72,106,3,41,32,0,
		72,176,63,0,48,21,0,102,112,0,12,1,72,106,
		4,32,45,32,0,72,176,64,0,48,21,0,102,112,
		0,12,1,72,110,7,36,184,0,106,2,40,0,176,
		59,0,176,62,0,48,42,0,102,112,0,12,1,12,
		1,72,106,3,41,32,0,72,176,64,0,48,21,0,
		102,112,0,12,1,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_CONNECTRAW )
{
	static const HB_BYTE pcode[] =
	{
		13,7,16,36,191,0,121,80,17,121,80,18,36,192,
		0,106,1,0,80,20,106,1,0,80,21,106,1,0,
		80,22,36,211,0,176,65,0,48,66,0,102,112,0,
		48,67,0,102,112,0,48,68,0,102,112,0,48,69,
		0,102,112,0,48,70,0,102,112,0,48,69,0,102,
		112,0,95,16,48,71,0,102,112,0,12,8,80,18,
		36,212,0,176,72,0,95,18,12,1,80,19,36,214,
		0,95,19,121,69,28,74,95,19,122,69,28,68,36,
		215,0,48,36,0,102,95,19,112,1,73,36,216,0,
		48,73,0,102,121,112,1,73,36,217,0,176,74,0,
		106,17,67,111,110,110,101,99,116,105,111,110,32,69,
		114,114,111,114,0,20,1,36,218,0,97,69,156,0,
		0,80,23,36,219,0,102,110,7,36,221,0,48,75,
		0,102,95,8,112,1,73,36,222,0,48,44,0,102,
		100,112,1,73,36,223,0,48,76,0,102,95,18,112,
		1,73,36,224,0,106,13,77,121,83,113,108,32,78,
		97,116,105,118,101,0,80,10,36,225,0,176,59,0,
		176,62,0,176,77,0,95,18,12,1,12,1,12,1,
		80,21,36,226,0,176,77,0,95,18,12,1,80,23,
		36,230,0,48,33,0,102,112,0,32,144,0,95,23,
		97,169,156,0,0,35,29,133,0,36,231,0,176,74,
		0,106,49,67,111,110,110,101,99,116,105,111,110,32,
		69,114,114,111,114,58,32,77,121,83,81,76,32,118,
		101,114,115,105,111,110,32,110,111,116,32,115,117,112,
		112,111,114,116,101,100,32,58,32,0,95,21,72,106,
		15,32,47,32,109,105,110,105,109,117,110,32,105,115,
		32,0,72,176,62,0,97,169,156,0,0,12,1,72,
		20,1,36,232,0,48,78,0,102,112,0,73,36,233,
		0,48,73,0,102,121,112,1,73,36,234,0,48,36,
		0,102,92,255,112,1,73,36,235,0,102,110,7,36,
		238,0,48,79,0,102,95,10,112,1,73,36,239,0,
		48,80,0,102,95,21,112,1,73,36,240,0,48,73,
		0,102,92,12,112,1,73,36,241,0,48,81,0,102,
		176,60,0,95,10,12,1,112,1,73,36,242,0,48,
		82,0,102,176,83,0,95,18,12,1,112,1,73,36,
		245,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_END )
{
	static const HB_BYTE pcode[] =
	{
		36,251,0,48,84,0,102,120,112,1,73,36,252,0,
		48,61,0,102,112,0,73,36,254,0,176,47,0,48,
		21,0,102,112,0,12,1,31,16,36,255,0,176,85,
		0,48,21,0,102,112,0,20,1,36,2,1,48,78,
		0,48,86,0,102,112,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_COMMIT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,7,1,48,84,0,48,86,0,102,112,
		0,95,1,112,1,73,36,8,1,48,36,0,102,176,
		87,0,48,21,0,102,112,0,12,1,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_ROLLBACK )
{
	static const HB_BYTE pcode[] =
	{
		36,13,1,48,88,0,48,86,0,102,112,0,112,0,
		73,36,14,1,48,36,0,102,176,89,0,48,21,0,
		102,112,0,12,1,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_EXECUTERAW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,20,1,176,60,0,176,90,0,176,91,
		0,95,1,12,1,92,6,12,2,12,1,106,7,83,
		69,76,69,67,84,0,8,31,32,176,60,0,176,90,
		0,176,91,0,95,1,12,1,92,5,12,2,12,1,
		106,6,83,72,79,87,32,0,8,28,15,36,21,1,
		48,92,0,102,120,112,1,73,25,13,36,23,1,48,
		92,0,102,9,112,1,73,36,26,1,48,44,0,102,
		176,93,0,48,21,0,102,112,0,95,1,12,2,112,
		1,73,36,27,1,176,52,0,48,21,0,102,112,0,
		20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SR_MYSQL_GETAFFECTEDROWS )
{
	static const HB_BYTE pcode[] =
	{
		36,32,1,176,94,0,48,21,0,102,112,0,20,1,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,95,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
