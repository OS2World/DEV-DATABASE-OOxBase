
/*
 * This file was generated by the SOM Compiler.
 * FileName: ooxdate.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

#ifndef SOM_ooxdate_h
#define SOM_ooxdate_h


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
#ifndef ooxdate
#define ooxdate SOMObject
#endif
#include <ooxfield.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#define ex_ooxdate_ooxfield_error "::ooxdate::ooxfield_error"
typedef
struct ooxdate_ooxfield_error {
long  ErrCode;
string  Reason;
} ooxdate_ooxfield_error;

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_ooxfield_error
    #ifdef ex_ooxfield_error
        #undef ex_ooxfield_error
        #define SOMTGD_ex_ooxfield_error 1
    #else
        #define ex_ooxfield_error ex_ooxdate_ooxfield_error
    #endif /* ex_ooxfield_error */
#endif /* SOMTGD_ex_ooxfield_error */
#ifndef SOMTGD_ooxfield_error
    #ifdef ooxfield_error
        #undef ooxfield_error
        #define SOMTGD_ooxfield_error 1
    #else
        #define ooxfield_error ooxdate_ooxfield_error
    #endif /* ooxfield_error */
#endif /* SOMTGD_ooxfield_error */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

#define ooxdate_MajorVersion 0
#define ooxdate_MinorVersion 0

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define ooxdateNewClass c
#pragma linkage(c, system)
#define ooxdateClassData d
#define ooxdateCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define ooxdate_classObj ooxdateClassData.classObject
#define _ooxdate ooxdate_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass  SOMLINK ooxdateNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(ooxdateNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct ooxdateClassDataStructure {
	SOMClass classObject;
	somMToken define;
	somMToken get_month;
	somMToken get_day;
	somMToken get_year;
	somMToken put_month;
	somMToken put_day;
	somMToken put_year;
} SOMDLINK ooxdateClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct ooxdateCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK ooxdateCClassData;

/*
 * New and Renew macros for ooxdate
 */
#define ooxdateNew() \
   ( _ooxdate ? \
	_somNew(_ooxdate) \
	: ( ooxdateNewClass(\
		ooxdate_MajorVersion, \
		ooxdate_MinorVersion),\
	   _somNew(_ooxdate)))
#define ooxdateRenew(buf) \
   ( _ooxdate ? \
	_somRenew(_ooxdate, buf) \
	: ( ooxdateNewClass(\
		ooxdate_MajorVersion, \
		ooxdate_MinorVersion),\
	   _somRenew(_ooxdate, buf)))

/*
 * Override method: somDefaultInit
 */
#define ooxdate_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somUninit
 */
#define ooxdate_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * New Method: define
 */
typedef void   SOMLINK somTP_ooxdate_define(ooxdate somSelf, Environment *ev, 
		somInitCtrl* ctrl, 
		string name);
#pragma linkage(somTP_ooxdate_define, system)
typedef somTP_ooxdate_define *somTD_ooxdate_define;
#define somMD_ooxdate_define "::ooxdate::define"
#define ooxdate_define(somSelf,ev,ctrl,name) \
    (SOM_Resolve(somSelf, ooxdate, define) \
	(somSelf,ev,ctrl,name))
#ifndef SOMGD_define
    #if (defined(_define) || defined(__define))
        #undef _define
        #undef __define
        #define SOMGD_define 1
    #else
        #define _define ooxdate_define
    #endif /* _define */
#endif /* SOMGD_define */

/*
 * New Method: get_month
 */
typedef short   SOMLINK somTP_ooxdate_get_month(ooxdate somSelf, Environment *ev);
#pragma linkage(somTP_ooxdate_get_month, system)
typedef somTP_ooxdate_get_month *somTD_ooxdate_get_month;
#define somMD_ooxdate_get_month "::ooxdate::get_month"
#define ooxdate_get_month(somSelf,ev) \
    (SOM_Resolve(somSelf, ooxdate, get_month) \
	(somSelf,ev))
#ifndef SOMGD_get_month
    #if (defined(_get_month) || defined(__get_month))
        #undef _get_month
        #undef __get_month
        #define SOMGD_get_month 1
    #else
        #define _get_month ooxdate_get_month
    #endif /* _get_month */
#endif /* SOMGD_get_month */

/*
 * New Method: get_day
 */
typedef short   SOMLINK somTP_ooxdate_get_day(ooxdate somSelf, Environment *ev);
#pragma linkage(somTP_ooxdate_get_day, system)
typedef somTP_ooxdate_get_day *somTD_ooxdate_get_day;
#define somMD_ooxdate_get_day "::ooxdate::get_day"
#define ooxdate_get_day(somSelf,ev) \
    (SOM_Resolve(somSelf, ooxdate, get_day) \
	(somSelf,ev))
#ifndef SOMGD_get_day
    #if (defined(_get_day) || defined(__get_day))
        #undef _get_day
        #undef __get_day
        #define SOMGD_get_day 1
    #else
        #define _get_day ooxdate_get_day
    #endif /* _get_day */
#endif /* SOMGD_get_day */

/*
 * New Method: get_year
 */
typedef short   SOMLINK somTP_ooxdate_get_year(ooxdate somSelf, Environment *ev);
#pragma linkage(somTP_ooxdate_get_year, system)
typedef somTP_ooxdate_get_year *somTD_ooxdate_get_year;
#define somMD_ooxdate_get_year "::ooxdate::get_year"
#define ooxdate_get_year(somSelf,ev) \
    (SOM_Resolve(somSelf, ooxdate, get_year) \
	(somSelf,ev))
#ifndef SOMGD_get_year
    #if (defined(_get_year) || defined(__get_year))
        #undef _get_year
        #undef __get_year
        #define SOMGD_get_year 1
    #else
        #define _get_year ooxdate_get_year
    #endif /* _get_year */
#endif /* SOMGD_get_year */

/*
 * New Method: put_month
 */
typedef void   SOMLINK somTP_ooxdate_put_month(ooxdate somSelf, Environment *ev, 
		short month);
#pragma linkage(somTP_ooxdate_put_month, system)
typedef somTP_ooxdate_put_month *somTD_ooxdate_put_month;
#define somMD_ooxdate_put_month "::ooxdate::put_month"
#define ooxdate_put_month(somSelf,ev,month) \
    (SOM_Resolve(somSelf, ooxdate, put_month) \
	(somSelf,ev,month))
#ifndef SOMGD_put_month
    #if (defined(_put_month) || defined(__put_month))
        #undef _put_month
        #undef __put_month
        #define SOMGD_put_month 1
    #else
        #define _put_month ooxdate_put_month
    #endif /* _put_month */
#endif /* SOMGD_put_month */

/*
 * New Method: put_day
 */
typedef void   SOMLINK somTP_ooxdate_put_day(ooxdate somSelf, Environment *ev, 
		short day);
#pragma linkage(somTP_ooxdate_put_day, system)
typedef somTP_ooxdate_put_day *somTD_ooxdate_put_day;
#define somMD_ooxdate_put_day "::ooxdate::put_day"
#define ooxdate_put_day(somSelf,ev,day) \
    (SOM_Resolve(somSelf, ooxdate, put_day) \
	(somSelf,ev,day))
#ifndef SOMGD_put_day
    #if (defined(_put_day) || defined(__put_day))
        #undef _put_day
        #undef __put_day
        #define SOMGD_put_day 1
    #else
        #define _put_day ooxdate_put_day
    #endif /* _put_day */
#endif /* SOMGD_put_day */

/*
 * New Method: put_year
 */
typedef void   SOMLINK somTP_ooxdate_put_year(ooxdate somSelf, Environment *ev, 
		short year);
#pragma linkage(somTP_ooxdate_put_year, system)
typedef somTP_ooxdate_put_year *somTD_ooxdate_put_year;
#define somMD_ooxdate_put_year "::ooxdate::put_year"
#define ooxdate_put_year(somSelf,ev,year) \
    (SOM_Resolve(somSelf, ooxdate, put_year) \
	(somSelf,ev,year))
#ifndef SOMGD_put_year
    #if (defined(_put_year) || defined(__put_year))
        #undef _put_year
        #undef __put_year
        #define SOMGD_put_year 1
    #else
        #define _put_year ooxdate_put_year
    #endif /* _put_year */
#endif /* SOMGD_put_year */

/*
 * Other Constructors for ooxdate
 */
static ooxdate ooxdateNew_define(Environment *ev,string name)
{
   ooxdate __somtmp_ooxdate;
   if (!_ooxdate) ooxdateNewClass(ooxdate_MajorVersion, ooxdate_MinorVersion);
   __somtmp_ooxdate = SOMClass_somNewNoInit(_ooxdate);
   ooxdate_define(__somtmp_ooxdate,ev,0,name);
   return __somtmp_ooxdate;
}

#ifndef SOM_DONT_USE_INHERITED_MACROS
#define ooxdate_get_name ooxfield_get_name
#define ooxdate_get ooxfield_get
#define ooxdate_put ooxfield_put
#define ooxdate_get_type ooxfield_get_type
#define ooxdate_get_length ooxfield_get_length
#define ooxdate_get_dec_point ooxfield_get_dec_point
#define ooxdate_somDestruct SOMObject_somDestruct
#define ooxdate_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define ooxdate_somDefaultAssign SOMObject_somDefaultAssign
#define ooxdate_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define ooxdate_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define ooxdate_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define ooxdate_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define ooxdate_somDefaultVAssign SOMObject_somDefaultVAssign
#define ooxdate_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define ooxdate_somInit SOMObject_somInit
#define ooxdate_somFree SOMObject_somFree
#define ooxdate_somGetClass SOMObject_somGetClass
#define ooxdate_somGetClassName SOMObject_somGetClassName
#define ooxdate_somGetSize SOMObject_somGetSize
#define ooxdate_somIsA SOMObject_somIsA
#define ooxdate_somIsInstanceOf SOMObject_somIsInstanceOf
#define ooxdate_somRespondsTo SOMObject_somRespondsTo
#define ooxdate_somDispatch SOMObject_somDispatch
#define ooxdate_somClassDispatch SOMObject_somClassDispatch
#define ooxdate_somCastObj SOMObject_somCastObj
#define ooxdate_somResetObj SOMObject_somResetObj
#define ooxdate_somDispatchV SOMObject_somDispatchV
#define ooxdate_somDispatchL SOMObject_somDispatchL
#define ooxdate_somDispatchA SOMObject_somDispatchA
#define ooxdate_somDispatchD SOMObject_somDispatchD
#define ooxdate_somPrintSelf SOMObject_somPrintSelf
#define ooxdate_somDumpSelf SOMObject_somDumpSelf
#define ooxdate_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_ooxdate_h */
