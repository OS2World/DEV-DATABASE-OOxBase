
/*
 * This file was generated by the SOM Compiler.
 * FileName: ooxmemo.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

#ifndef SOM_ooxmemo_h
#define SOM_ooxmemo_h


/*
 * The SOM_STRICT_IDL macro means that we can ignore stars
 * in our declarations of objects.
 */
#define SOM_STRICT_IDL 1


/*
 * Passthru lines: File: "C.ph", "before"
 */

#include "ooxbase.h"

#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef ooxmemo
#define ooxmemo SOMObject
#endif
#include <ooxfield.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef dbt
    #define dbt SOMObject
#endif /* dbt */
#ifndef dbt_iv
    #define dbt_iv SOMObject
#endif /* dbt_iv */
#ifndef ooxbase
    #define ooxbase SOMObject
#endif /* ooxbase */
#define ex_ooxmemo_ooxfield_error "::ooxmemo::ooxfield_error"
typedef
struct ooxmemo_ooxfield_error {
long  ErrCode;
string  Reason;
} ooxmemo_ooxfield_error;

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_ooxfield_error
    #ifdef ex_ooxfield_error
        #undef ex_ooxfield_error
        #define SOMTGD_ex_ooxfield_error 1
    #else
        #define ex_ooxfield_error ex_ooxmemo_ooxfield_error
    #endif /* ex_ooxfield_error */
#endif /* SOMTGD_ex_ooxfield_error */
#ifndef SOMTGD_ooxfield_error
    #ifdef ooxfield_error
        #undef ooxfield_error
        #define SOMTGD_ooxfield_error 1
    #else
        #define ooxfield_error ooxmemo_ooxfield_error
    #endif /* ooxfield_error */
#endif /* SOMTGD_ooxfield_error */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

#define ooxmemo_MajorVersion 0
#define ooxmemo_MinorVersion 0

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define ooxmemoNewClass c
#pragma linkage(c, system)
#define ooxmemoClassData d
#define ooxmemoCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define ooxmemo_classObj ooxmemoClassData.classObject
#define _ooxmemo ooxmemo_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass  SOMLINK ooxmemoNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(ooxmemoNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct ooxmemoClassDataStructure {
	SOMClass classObject;
	somMToken define;
} SOMDLINK ooxmemoClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct ooxmemoCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK ooxmemoCClassData;

/*
 * New and Renew macros for ooxmemo
 */
#define ooxmemoNew() \
   ( _ooxmemo ? \
	_somNew(_ooxmemo) \
	: ( ooxmemoNewClass(\
		ooxmemo_MajorVersion, \
		ooxmemo_MinorVersion),\
	   _somNew(_ooxmemo)))
#define ooxmemoRenew(buf) \
   ( _ooxmemo ? \
	_somRenew(_ooxmemo, buf) \
	: ( ooxmemoNewClass(\
		ooxmemo_MajorVersion, \
		ooxmemo_MinorVersion),\
	   _somRenew(_ooxmemo, buf)))

/*
 * Override method: put
 */
#define ooxmemo_put(somSelf,ev,datum) \
	ooxfield_put(somSelf,ev,datum)

/*
 * Override method: get
 */
#define ooxmemo_get(somSelf,ev) \
	ooxfield_get(somSelf,ev)

/*
 * Override method: somDefaultInit
 */
#define ooxmemo_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somUninit
 */
#define ooxmemo_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * New Method: define
 */
typedef void   SOMLINK somTP_ooxmemo_define(ooxmemo somSelf, Environment *ev, 
		somInitCtrl* ctrl, 
		string name);
#pragma linkage(somTP_ooxmemo_define, system)
typedef somTP_ooxmemo_define *somTD_ooxmemo_define;
#define somMD_ooxmemo_define "::ooxmemo::define"
#define ooxmemo_define(somSelf,ev,ctrl,name) \
    (SOM_Resolve(somSelf, ooxmemo, define) \
	(somSelf,ev,ctrl,name))
#ifndef SOMGD_define
    #if (defined(_define) || defined(__define))
        #undef _define
        #undef __define
        #define SOMGD_define 1
    #else
        #define _define ooxmemo_define
    #endif /* _define */
#endif /* SOMGD_define */

/*
 * Other Constructors for ooxmemo
 */
static ooxmemo ooxmemoNew_define(Environment *ev,string name)
{
   ooxmemo __somtmp_ooxmemo;
   if (!_ooxmemo) ooxmemoNewClass(ooxmemo_MajorVersion, ooxmemo_MinorVersion);
   __somtmp_ooxmemo = SOMClass_somNewNoInit(_ooxmemo);
   ooxmemo_define(__somtmp_ooxmemo,ev,0,name);
   return __somtmp_ooxmemo;
}

#ifndef SOM_DONT_USE_INHERITED_MACROS
#define ooxmemo_get_name ooxfield_get_name
#define ooxmemo_get_type ooxfield_get_type
#define ooxmemo_get_length ooxfield_get_length
#define ooxmemo_get_dec_point ooxfield_get_dec_point
#define ooxmemo_somDestruct SOMObject_somDestruct
#define ooxmemo_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define ooxmemo_somDefaultAssign SOMObject_somDefaultAssign
#define ooxmemo_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define ooxmemo_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define ooxmemo_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define ooxmemo_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define ooxmemo_somDefaultVAssign SOMObject_somDefaultVAssign
#define ooxmemo_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define ooxmemo_somInit SOMObject_somInit
#define ooxmemo_somFree SOMObject_somFree
#define ooxmemo_somGetClass SOMObject_somGetClass
#define ooxmemo_somGetClassName SOMObject_somGetClassName
#define ooxmemo_somGetSize SOMObject_somGetSize
#define ooxmemo_somIsA SOMObject_somIsA
#define ooxmemo_somIsInstanceOf SOMObject_somIsInstanceOf
#define ooxmemo_somRespondsTo SOMObject_somRespondsTo
#define ooxmemo_somDispatch SOMObject_somDispatch
#define ooxmemo_somClassDispatch SOMObject_somClassDispatch
#define ooxmemo_somCastObj SOMObject_somCastObj
#define ooxmemo_somResetObj SOMObject_somResetObj
#define ooxmemo_somDispatchV SOMObject_somDispatchV
#define ooxmemo_somDispatchL SOMObject_somDispatchL
#define ooxmemo_somDispatchA SOMObject_somDispatchA
#define ooxmemo_somDispatchD SOMObject_somDispatchD
#define ooxmemo_somPrintSelf SOMObject_somPrintSelf
#define ooxmemo_somDumpSelf SOMObject_somDumpSelf
#define ooxmemo_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_ooxmemo_h */
