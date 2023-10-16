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

#include <mu0/mu0_floating.h>
#include <mu8/mu8_functional_aliasing.h>

#ifndef MU8_FUNCTIONAL_H
#define MU8_FUNCTIONAL_H 1

MU0_BEGIN_CDECL

//#!
//#! macro<_Tp, _Up=_Tp>(const _Up & __v) : _Tp
//#!

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	elif MU0_HAVE_FLOAT128
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	elif MU0_HAVE_FLOAT16
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	elif MU0_HAVE_INT128
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	else
#	define mu8_ini(_Tp, __v) __mu0_extension__ __mu0_generic__((_Tp){0}                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ini) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ini)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ini)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ini)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ini) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ini) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ini)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ini)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ini)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ini) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ini) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ini)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ini)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ini)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ini)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ini) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ini)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ini)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ini)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ini)    \
	)((__v))
#	endif
#	else
#	define mu8_ini(_Tp, __v) mu8_alias_ini(_Tp, __v)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	else
#	define mu8_eq(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_eq) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_eq)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_eq)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_eq)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_eq) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_eq) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_eq)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_eq)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_eq)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_eq) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_eq) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_eq)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_eq)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_eq)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_eq)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_eq) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_eq)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_eq)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_eq)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_eq)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_eq(_Tp, __a, __b) mu8_alias_eq(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	else
#	define mu8_ge(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_ge) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_ge)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_ge)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_ge)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_ge) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_ge) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_ge)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_ge)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_ge)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_ge) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_ge) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_ge)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_ge)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_ge)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_ge)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_ge) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_ge)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_ge)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_ge)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_ge)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_ge(_Tp, __a, __b) mu8_alias_ge(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	else
#	define mu8_gt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_gt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_gt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_gt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_gt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_gt) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_gt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_gt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_gt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_gt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_gt) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_gt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_gt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_gt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_gt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_gt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_gt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_gt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_gt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_gt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_gt)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_gt(_Tp, __a, __b) mu8_alias_gt(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	else
#	define mu8_le(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_le) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_le)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_le)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_le)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_le) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_le) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_le)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_le)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_le)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_le) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_le) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_le)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_le)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_le)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_le)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_le) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_le)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_le)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_le)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_le)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_le(_Tp, __a, __b) mu8_alias_le(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	else
#	define mu8_lt(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_lt) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_lt)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_lt)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_lt)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_lt) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_lt) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_lt)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_lt)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_lt)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_lt) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_lt) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_lt)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_lt)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_lt)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_lt)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_lt) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_lt)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_lt)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_lt)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_lt)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_lt(_Tp, __a, __b) mu8_alias_lt(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	else
#	define mu8_add(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_add) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_add)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_add)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_add)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_add) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_add) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_add)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_add)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_add)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_add) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_add) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_add)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_add)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_add)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_add)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_add) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_add)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_add)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_add)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_add)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_add(_Tp, __a, __b) mu8_alias_add(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	else
#	define mu8_div(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_div) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_div)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_div)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_div)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_div) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_div) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_div)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_div)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_div)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_div) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_div) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_div)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_div)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_div)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_div)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_div) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_div)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_div)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_div)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_div)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_div(_Tp, __a, __b) mu8_alias_div(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	else
#	define mu8_mul(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_mul) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_mul)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_mul)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_mul)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_mul) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_mul) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_mul)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_mul)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_mul)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_mul) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_mul) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_mul)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_mul)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_mul)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_mul)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_mul) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_mul)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_mul)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_mul)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_mul)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_mul(_Tp, __a, __b) mu8_alias_mul(_Tp, __a, __b)
#	endif

#	if   MU0_HAVE_GENERIC
#	if   (MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16 && MU0_HAVE_INT128) || MU0_HAVE_CC_GNUCC
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_FLOAT16
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub)    \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128 && MU0_HAVE_INT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub) */ \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16 && MU0_HAVE_INT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub)    \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub)    \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub) */ \
		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub)    \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	elif MU0_HAVE_FLOAT16
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub)    \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub)    \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	elif MU0_HAVE_INT128
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub) */ \
		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub)    \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub)    \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	else
#	define mu8_sub(_Tp, __a, __b) __mu0_generic__((__a)                                \
/*		, mu0_cfp128_t  : __mu8_functional_aliasing__(mu0_cfp128_t  , mu8_alias_sub) */ \
		, mu0_cfpex_t   : __mu8_functional_aliasing__(mu0_cfpex_t   , mu8_alias_sub)    \
		, mu0_cfp64_t   : __mu8_functional_aliasing__(mu0_cfp64_t   , mu8_alias_sub)    \
		, mu0_cfp32_t   : __mu8_functional_aliasing__(mu0_cfp32_t   , mu8_alias_sub)    \
/*		, mu0_cfp16_t   : __mu8_functional_aliasing__(mu0_cfp16_t   , mu8_alias_sub) */ \
/*		, mu0_fp128_t   : __mu8_functional_aliasing__(mu0_fp128_t   , mu8_alias_sub) */ \
		, mu0_fpex_t    : __mu8_functional_aliasing__(mu0_fpex_t    , mu8_alias_sub)    \
		, mu0_fp64_t    : __mu8_functional_aliasing__(mu0_fp64_t    , mu8_alias_sub)    \
		, mu0_fp32_t    : __mu8_functional_aliasing__(mu0_fp32_t    , mu8_alias_sub)    \
/*		, mu0_fp16_t    : __mu8_functional_aliasing__(mu0_fp16_t    , mu8_alias_sub) */ \
/*		, mu0_sint128_t : __mu8_functional_aliasing__(mu0_sint128_t , mu8_alias_sub) */ \
		, mu0_sint64_t  : __mu8_functional_aliasing__(mu0_sint64_t  , mu8_alias_sub)    \
		, mu0_sint32_t  : __mu8_functional_aliasing__(mu0_sint32_t  , mu8_alias_sub)    \
		, mu0_sint16_t  : __mu8_functional_aliasing__(mu0_sint16_t  , mu8_alias_sub)    \
		, mu0_sint8_t   : __mu8_functional_aliasing__(mu0_sint8_t   , mu8_alias_sub)    \
/*		, mu0_uint128_t : __mu8_functional_aliasing__(mu0_uint128_t , mu8_alias_sub) */ \
		, mu0_uint64_t  : __mu8_functional_aliasing__(mu0_uint64_t  , mu8_alias_sub)    \
		, mu0_uint32_t  : __mu8_functional_aliasing__(mu0_uint32_t  , mu8_alias_sub)    \
		, mu0_uint16_t  : __mu8_functional_aliasing__(mu0_uint16_t  , mu8_alias_sub)    \
		, mu0_uint8_t   : __mu8_functional_aliasing__(mu0_uint8_t   , mu8_alias_sub)    \
	)((__a), (__b))
#	endif
#	else
#	define mu8_sub(_Tp, __a, __b) mu8_alias_sub(_Tp, __a, __b)
#	endif

MU0_END_CDECL

#endif /* !MU8_FUNCTIONAL_H */

/* EOF */