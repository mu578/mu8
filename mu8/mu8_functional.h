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

// mu8_functional.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_functional_aliasing.h>

#ifndef MU8_FUNCTIONAL_H
#define MU8_FUNCTIONAL_H 1

MU0_BEGIN_CDECL

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfp128_t  : mu0_cfp128 (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_cfp16_t   : mu0_cfp16  (__x, 0)           \
		, mu0_fp128_t   : mu0_fp128  (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_fp16_t    : mu0_fp16   (__x)              \
		, mu0_sint128_t : mu0_sint128(__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint128_t : mu0_uint128(__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfp128_t  : mu0_cfp128 (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_cfp16_t   : mu0_cfp16  (__x, 0)           \
		, mu0_fp128_t   : mu0_fp128  (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_fp16_t    : mu0_fp16   (__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfp128_t  : mu0_cfp128 (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_fp128_t   : mu0_fp128  (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_sint128_t : mu0_sint128(__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint128_t : mu0_uint128(__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfpex_t   : mu0_cfpex  (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_cfp16_t   : mu0_cfp16  (__x, 0)           \
		, mu0_fpex_t    : mu0_fpex   (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_fp16_t    : mu0_fp16   (__x)              \
		, mu0_sint128_t : mu0_sint128(__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint128_t : mu0_uint128(__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfp128_t  : mu0_cfp128 (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_fp128_t   : mu0_fp128  (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfpex_t   : mu0_cfpex  (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_cfp16_t   : mu0_cfp16  (__x, 0)           \
		, mu0_fpex_t    : mu0_fpex   (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_fp16_t    : mu0_fp16   (__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	elif MU0_HAVE_INT128
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfpex_t   : mu0_cfpex  (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_fpex_t    : mu0_fpex   (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_sint128_t : mu0_sint128(__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint128_t : mu0_uint128(__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	else
#	define mu8_ini(_Tp, __x) __mu0_generic__((__x) + 0 \
		, mu0_cfpex_t   : mu0_cfpex  (__x, 0)           \
		, mu0_cfp64_t   : mu0_cfp64  (__x, 0)           \
		, mu0_cfp32_t   : mu0_cfp32  (__x, 0)           \
		, mu0_fpex_t    : mu0_fpex   (__x)              \
		, mu0_fp64_t    : mu0_fp64   (__x)              \
		, mu0_fp32_t    : mu0_fp32   (__x)              \
		, mu0_sint64_t  : mu0_sint64 (__x)              \
		, mu0_sint32_t  : mu0_sint32 (__x)              \
		, mu0_sint16_t  : mu0_sint16 (__x)              \
		, mu0_sint8_t   : mu0_sint8  (__x)              \
		, mu0_uint64_t  : mu0_uint64 (__x)              \
		, mu0_uint32_t  : mu0_uint32 (__x)              \
		, mu0_uint16_t  : mu0_uint16 (__x)              \
		, mu0_uint8_t   : mu0_uint8  (__x)              \
		, default       : ((_Tp)__x)                    \
	)
#	endif
#	else
#	define mu8_ini(_Tp, __x)                   \
		mu0_is_complex_number(__x)              \
			? __mu0_extension__ (_Tp) { __x, 0 } \
			: __mu0_extension__ (_Tp) { __x    }
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_add(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_add(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_add(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_add(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_add(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_add(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_add(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_add(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_add(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_add(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_add(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_add(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_add(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_add(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_add(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_add(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_add(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_add(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_add(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_add(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_add(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_add(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	elif MU0_HAVE_INT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_add(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_add(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	else
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_add(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_add(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_add(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_add(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_add(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_add(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_add(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_add(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_add(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_add(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_add(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_add(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) + (__b))                         \
	)
#	endif
#	else
#	define mu8_add(_Tp, __a, __b) ((__a) + (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_div(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_div(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_div(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_div(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_div(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_div(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_div(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_div(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_div(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_div(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_div(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_div(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_div(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_div(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_div(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_div(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_div(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_div(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_div(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_div(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_div(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_div(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	elif MU0_HAVE_INT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_div(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_div(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	else
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_div(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_div(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_div(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_div(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_div(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_div(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_div(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_div(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_div(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_div(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_div(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_div(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) / (__b))                         \
	)
#	endif
#	else
#	define mu8_div(_Tp, __a, __b) ((__a) / (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_mul(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_mul(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_mul(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_mul(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_mul(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_mul(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_mul(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_mul(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_mul(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_mul(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_mul(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_mul(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_mul(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_mul(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_mul(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_mul(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_mul(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_mul(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_mul(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_mul(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_mul(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_mul(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	elif MU0_HAVE_INT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_mul(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_mul(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	else
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_mul(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_mul(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_mul(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_mul(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_mul(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_mul(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_mul(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_mul(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_mul(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_mul(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_mul(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_mul(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) * (__b))                         \
	)
#	endif
#	else
#	define mu8_mul(_Tp, __a, __b) ((__a) * (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_sub(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_sub(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_sub(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_sub(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_sub(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_sub(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_sub(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_sub(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_sub(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_sub(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_sub(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_sub(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_sub(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_sub(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_sub(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_sub(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_sub(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_sub(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_sub(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_sub(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_sub(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_sub(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	elif MU0_HAVE_INT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_sub(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_sub(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	else
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_sub(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_sub(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_sub(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_sub(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_sub(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_sub(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_sub(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_sub(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_sub(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_sub(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_sub(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_sub(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) - (__b))                         \
	)
#	endif
#	else
#	define mu8_sub(_Tp, __a, __b) ((__a) - (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_eq(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_eq(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_eq(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_eq(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_eq(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_eq(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_eq(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_eq(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_eq(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_eq(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_eq(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_eq(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_eq(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_eq(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_eq(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_eq(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_eq(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_eq(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_eq(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_eq(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_eq(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_eq(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	elif MU0_HAVE_INT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_eq(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_eq(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	else
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_eq(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_eq(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_eq(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_eq(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_eq(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_eq(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_eq(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_eq(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_eq(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_eq(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_eq(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_eq(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) == (__b))                       \
	)
#	endif
#	else
#	define mu8_eq(_Tp, __a, __b) ((__a) == (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_ge(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_ge(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_ge(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_ge(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_ge(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_ge(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_ge(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_ge(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_ge(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_ge(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_ge(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_ge(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_ge(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_ge(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_ge(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_ge(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_ge(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_ge(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_ge(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_ge(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_ge(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_ge(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	elif MU0_HAVE_INT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_ge(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_ge(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	else
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_ge(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_ge(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_ge(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_ge(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_ge(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_ge(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_ge(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_ge(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_ge(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_ge(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_ge(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) >= (__b))                       \
	)
#	endif
#	else
#	define mu8_ge(_Tp, __a, __b) ((__a) >= (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_gt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_gt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_gt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_gt(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_gt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_gt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_gt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_gt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_gt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_gt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_gt(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_gt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_gt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_gt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_gt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_gt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_gt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_gt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_gt(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_gt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_gt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_gt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_gt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_gt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_gt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_gt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_gt(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_gt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	elif MU0_HAVE_INT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_gt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_gt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	else
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_gt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_gt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_gt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_gt(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_gt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_gt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_gt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_gt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_gt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_gt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_gt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_gt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) > (__b))                        \
	)
#	endif
#	else
#	define mu8_gt(_Tp, __a, __b) ((__a) > (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_le(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_le(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_le(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_le(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_le(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_le(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_le(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_le(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_le(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_le(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_le(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_le(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_le(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_le(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_le(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_le(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_le(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_le(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_le(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_le(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_le(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_le(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_le(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_le(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_le(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_le(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_le(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_le(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	elif MU0_HAVE_INT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_le(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_le(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	else
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_le(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_le(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_le(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_le(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_le(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_le(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_le(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_le(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_le(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_le(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_le(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_le(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) <= (__b))                       \
	)
#	endif
#	else
#	define mu8_le(_Tp, __a, __b) ((__a) <= (__b))
#	endif

#	if   MU0_HAVE_GENERIC
#	if   MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_lt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_lt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_lt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_lt(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_lt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_lt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_lt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_lt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_lt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_lt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_lt(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_lt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_lt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_lt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_lt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_lt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_lt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_lt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_lt(mu0_fp16_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_lt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_lt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_lt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	elif MU0_HAVE_FLOAT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp128_t  : mu8_alias_lt(mu0_cfp128_t  , __a, __b) \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp128_t   : mu8_alias_lt(mu0_fp128_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_lt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	elif MU0_HAVE_FLOAT16
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_cfp16_t   : mu8_alias_lt(mu0_cfp16_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_fp16_t    : mu8_alias_lt(mu0_fp16_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_lt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	elif MU0_HAVE_INT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_sint128_t : mu8_alias_lt(mu0_sint128_t , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint128_t : mu8_alias_lt(mu0_uint128_t , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_ge(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	else
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a) + 0      \
		, mu0_cfp64_t   : mu8_alias_lt(mu0_cfp64_t   , __a, __b) \
		, mu0_cfp32_t   : mu8_alias_lt(mu0_cfp32_t   , __a, __b) \
		, mu0_fp64_t    : mu8_alias_lt(mu0_fp64_t    , __a, __b) \
		, mu0_fp32_t    : mu8_alias_lt(mu0_fp32_t    , __a, __b) \
		, mu0_sint64_t  : mu8_alias_lt(mu0_sint64_t  , __a, __b) \
		, mu0_sint32_t  : mu8_alias_lt(mu0_sint32_t  , __a, __b) \
		, mu0_sint16_t  : mu8_alias_lt(mu0_sint16_t  , __a, __b) \
		, mu0_sint8_t   : mu8_alias_lt(mu0_sint8_t   , __a, __b) \
		, mu0_uint64_t  : mu8_alias_lt(mu0_uint64_t  , __a, __b) \
		, mu0_uint32_t  : mu8_alias_lt(mu0_uint32_t  , __a, __b) \
		, mu0_uint16_t  : mu8_alias_lt(mu0_uint16_t  , __a, __b) \
		, mu0_uint8_t   : mu8_alias_lt(mu0_uint8_t   , __a, __b) \
		, default       : ((__a) < (__b))                        \
	)
#	endif
#	else
#	define mu8_lt(_Tp, __a, __b) ((__a) < (__b))
#	endif

MU0_END_CDECL

#endif /* !MU8_FUNCTIONAL_H */

/* EOF */