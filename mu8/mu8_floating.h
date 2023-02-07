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

// mu8_floating.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_definition.h>

#ifndef MU8_FLOATING_H
#define MU8_FLOATING_H 1

#	undef  M8_USE_FLOAT128
#	undef  M8_HAVE_FLOAT128

#	undef  M8_USE_FLOAT16
#	undef  M8_HAVE_FLOAT16

#	define M8_USE_FLOAT128  1
#	define M8_HAVE_FLOAT128 0

#	define M8_USE_FLOAT16   1
#	define M8_HAVE_FLOAT16  0

#	if M8_USE_FLOAT16
#		undef  __STDC_WANT_IEC_60559_TYPES_EXT__
#		define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#	endif

#include <float.h>
#include <math.h>

MU8_BEGIN_CDECL

typedef long double            mu8_fpex_t;

#	if M8_USE_FLOAT128
#	if M8_HAVE_CC_CLANG
#		if !__is_identifier(_Float128)
#			undef  M8_HAVE_FLOAT128
#			define M8_HAVE_FLOAT128 1
			__extension__
			typedef _Float128     mu8_fp128_t;
#		elif !__is_identifier(__float128)
#			undef  M8_HAVE_FLOAT128
#			define M8_HAVE_FLOAT128 1
			__extension__
			typedef __float128    mu8_fp128_t;
#		else
			typedef double        mu8_fp128_t;
#		endif
#		else
			typedef double        mu8_fp128_t;
#	endif
#	else
typedef double                 mu8_fp128_t;
#	endif

typedef double                 mu8_fp64_t;
typedef float                  mu8_fp32_t;

#	if M8_USE_FLOAT16
#	if M8_HAVE_CC_CLANG
#		if !__is_identifier(_Float16)
#			undef  M8_HAVE_FLOAT16
#			define M8_HAVE_FLOAT16 1
			__extension__
			typedef _Float16      mu8_fp16_t;
#		elif !__is_identifier(__fp16)
#			undef  M8_HAVE_FLOAT16
#			define M8_HAVE_FLOAT16 1
			__extension__
			typedef __fp16        mu8_fp16_t;
#		else
			typedef float         mu8_fp16_t;
#		endif
#		else
			typedef float         mu8_fp16_t;
#	endif
#	else
	typedef float               mu8_fp16_t;
#	endif

#	define mu8_fpex(__x)        mu8_cast(mu8_fpex_t, __x)
#	define mu8_const_fpex(__x)  mu8_const_cast(mu8_fpex_t, __x)

#	define mu8_fp128(__x)       mu8_cast(mu8_fp128_t, __x)
#	define mu8_const_fp128(__x) mu8_const_cast(mu8_fp128_t, __x)

#	define mu8_fp64(__x)        mu8_cast(mu8_fp64_t, __x)
#	define mu8_const_fp64(__x)  mu8_const_cast(mu8_fp64_t, __x)

#	define mu8_fp32(__x)        mu8_cast(mu8_fp32_t, __x)
#	define mu8_const_fp32(__x)  mu8_const_cast(mu8_fp32_t, __x)

#	define mu8_fp16(__x)        mu8_cast(mu8_fp16_t, __x)
#	define mu8_const_fp16(__x)  mu8_const_cast(mu8_fp16_t, __x)

MU8_END_CDECL

#endif /* !MU8_FLOATING_H */

/* EOF */