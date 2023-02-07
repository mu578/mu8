//
// # -*- coding: utf-8, tab-width: 3 -*-

//                                                           ___                                            //
//                                                          /   \                                           //
//                                            _   _  _   _  \ O /                                           //
//                                           | | | || | | | / _ \                                           //
//                                           | |_| || |_| |( (_) )                                          //
//                                           | ._,_| \___/  \___/                                           //
//                                           | |                                                            //
//                                           |_|                                                            //

// mu8_definition.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#ifndef MU8_DEFINITION_H
#define MU8_DEFINITION_H 1

#	ifdef __cplusplus
#		define MU8_BEGIN_CDECL extern "C" {
#		define MU8_END_CDECL   }
#	else
#		define MU8_BEGIN_CDECL
#		define MU8_END_CDECL
#	endif

#	define M8_HAVE_CC_GNUC 0
#	if defined(__GNUC__)
#	if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ > 8)
#		undef  M8_HAVE_CC_GNUC
#		define M8_HAVE_CC_GNUC 1
#	endif
#	endif

#	define M8_HAVE_CC_CLANG 0
#	if defined(__clang__)
#	if defined(__is_identifier)
#		undef  M8_HAVE_CC_CLANG
#		define M8_HAVE_CC_CLANG 1
#	endif
#	endif

#	define M8_HAVE_C89   1
#	define M8_HAVE_C90   0
#	define M8_HAVE_C94   0
#	define M8_HAVE_C99   0
#	define M8_HAVE_C11   0
#	define M8_HAVE_C17   0

#	define M8_HAVE_CPP98 0
#	define M8_HAVE_CPP03 0
#	define M8_HAVE_CPP11 0
#	define M8_HAVE_CPP14 0
#	define M8_HAVE_CPP17 0
#	define M8_HAVE_CPP20 0

#	ifdef __cplusplus
#		undef  M8_HAVE_CPP98
#		define M8_HAVE_CPP98 1
#		if __cplusplus >= 199711L
#			undef  M8_HAVE_CPP03
#			define M8_HAVE_CPP03 1
#		endif
#		if __cplusplus >= 201103L
#			undef  M8_HAVE_CPP11
#			define M8_HAVE_CPP11 1
#		endif
#		if __cplusplus >= 201402L
#			undef  M8_HAVE_CPP14
#			define M8_HAVE_CPP14 1
#		endif
#		if __cplusplus >= 201703L
#			undef  M8_HAVE_CPP17
#			define M8_HAVE_CPP17 1
#		endif
#		if __cplusplus > 201703L
#			undef  M8_HAVE_CPP20
#			define M8_HAVE_CPP20 1
#		endif
#	endif

#	if defined(__STDC__) || defined(__STDC_VERSION__)
#		undef  M8_HAVE_C89
#		define M8_HAVE_C89 1
#		if defined(__STDC_VERSION__)
#			undef  M8_HAVE_C90
#			define M8_HAVE_C90 1
#			if (__STDC_VERSION__ >= 199409L)
#				undef  M8_HAVE_C94
#				define M8_HAVE_C94 1
#			endif
#			if (__STDC_VERSION__ >= 199901L)
#				undef  M8_HAVE_C99
#				define M8_HAVE_C99 1
#			endif
#			if (__STDC_VERSION__ >= 201112L)
#				undef  M8_HAVE_C11
#				define M8_HAVE_C11 1
#			endif
#			if (__STDC_VERSION__ >= 201710L)
#				undef  M8_HAVE_C17
#				define M8_HAVE_C17 1
#			endif
#		endif
#	endif

#	if !M8_HAVE_C11 && !M8_HAVE_CPP11
#	if !defined(_MSC_VER)
#		if !defined(__STDC_FORMAT_MACROS)
#			define __STDC_FORMAT_MACROS 1
#		endif
#		if !defined(__STDC_CONSTANT_MACROS)
#			define __STDC_CONSTANT_MACROS 1
#		endif
#	endif
#	endif

#	if !defined(__mu8_volatile__)
#		define __mu8_volatile__ volatile
#	endif

#	if !defined(__mu8_static__)
#		define __mu8_static__   static
#	endif

#	if !defined(__mu8_inline__)
#		define __mu8_inline__   inline
#	endif

#	if !defined(__mu8_inline_always__)
#		if defined(_MSC_VER)
#			define __mu8_inline_always__ __forceinline
#		elif (((defined(__GNUC__) && __GNUC__ >= 4) || (defined(__clang__) || defined(__llvm__))))
#			define __mu8_inline_always__ __inline__ __attribute__((always_inline))
#		else
#			define __mu8_inline_always__ __mu8_inline__
#		endif
#	endif

#	if !defined(__mu8_never_inline__)
#		if defined(_MSC_VER)
#			define __mu8_never_inline__ __declspec(noinline)
#		elif (((defined(__GNUC__) && __GNUC__ >= 4) || (defined(__clang__) || defined(__llvm__))))
#			define __mu8_never_inline__ __attribute__((noinline))
#		else
#			define __mu8_never_inline__
#		endif
#	endif

#	define ____mu8_static___inline__ __mu8_static__ __mu8_inline_always__

#	undef MU8_HAVE_OVERLOAD
#	undef __mu8_overload__
#	if defined(__clang__)
#	if __has_attribute(__overloadable__)
#		define MU8_HAVE_OVERLOAD 1
#		define __mu8_overload__  __mu8_static__ __attribute__((__overloadable__, __always_inline__, __unused__))
#	endif
#	endif

#	undef MU8_HAVE_TYPEOF
#	undef __mu8_typeof__
#	undef __mu8_istypeof__
#	if ((defined(__GNUC__) && (__GNUC__ + 0 >= 3)) || defined(__clang__))
#		define MU8_HAVE_TYPEOF 1
#		define __mu8_typeof__(__x)           __typeof__((__x) + 0)
#		define __mu8_istypeof__(_Tp, __x) ((__builtin_types_compatible_p(type1, __mu8_typeof__(__x))) ? 1 : 0)
#	endif

#	define __mu8_issizeof__(_Tp, __x) (((sizeof(_Tp) == sizeof(__x))) ? 1 : 0)

MU8_BEGIN_CDECL

#	define mu8_scope_begin         do     {
#	define mu8_scope_end           break; } while (0)

#	define mu8_nullptr             NULL
#	define mu8_is_nullptr(__x)     ((__x) == NULL ? 1 : 0)
#	define mu8_not_nullptr(__x)    ((__x) != NULL ? 1 : 0)

#	define m8_cast(_Tp, __x)       (_Tp)(__x)
#	define m8_const_cast(_Tp, __x) (const _Tp)(__x)

MU8_END_CDECL

#endif /* !MU8_DEFINITION_H */

/* EOF */