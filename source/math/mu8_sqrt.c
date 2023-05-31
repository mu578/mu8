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

// mu8_sqrt.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_sqrt_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_sqrtf128))
				return __builtin_sqrtf128(x);
#			elif (__has_builtin(__builtin_sqrtl))
				return mu0_const_fp128(__builtin_sqrtl(x));
#			else
				return mu0_const_fp128(sqrtl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_sqrtl))
				return __builtin_sqrtl(x);
#			else
				return sqrtl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sqrtl(x);
#	else
	return sqrtl(x);
#	endif
}

mu0_fp64_t  mu8_sqrt_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_sqrt))
			return __builtin_sqrt(x);
#		else
			return sqrt(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sqrt(x);
#	else
		return sqrt(x);
#	endif
}

mu0_fp32_t  mu8_sqrt_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_sqrtf))
			return __builtin_sqrtf(x);
#		else
			return sqrtf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sqrtf(x);
#	else
		return sqrtf(x);
#	endif
}

mu0_fp16_t  mu8_sqrt_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_sqrtf16))
				return __builtin_sqrtf16(x);
#			elif (__has_builtin(__builtin_sqrtf))
				return mu0_const_fp16(__builtin_sqrtf(x));
#			else
				return mu0_const_fp16(sqrtf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_sqrtf))
				return __builtin_sqrtf(x);
#			else
				return sqrtf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sqrtf(x);
#	else
	return sqrtf(x);
#	endif
}

/* EOF */