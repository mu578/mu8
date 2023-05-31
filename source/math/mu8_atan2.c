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

// mu8_atan2.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_atan2_fp128 (const mu0_fp128_t y, const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_atan2f128))
				return __builtin_atan2f128(y, x);
#			elif (__has_builtin(__builtin_atan2l))
				return mu0_const_fp128(__builtin_atan2l(y, x));
#			else
				return mu0_const_fp128(atan2l(y, x));
#			endif
#		else
#			if (__has_builtin(__builtin_atan2l))
				return __builtin_atan2l(y, x);
#			else
				return atan2l(y, x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atan2l(y, x);
#	else
	return atan2l(y, x);
#	endif
}

mu0_fp64_t  mu8_atan2_fp64  (const mu0_fp64_t  y, const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_atan2))
			return __builtin_atan2(y, x);
#		else
			return atan2(y, x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atan2(y, x);
#	else
		return atan2(y, x);
#	endif
}

mu0_fp32_t  mu8_atan2_fp32  (const mu0_fp32_t  y, const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_atan2f))
			return __builtin_atan2f(y, x);
#		else
			return atan2f(y, x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atan2f(y, x);
#	else
		return atan2f(y, x);
#	endif
}

mu0_fp16_t  mu8_atan2_fp16  (const mu0_fp16_t  y, const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_atan2f16))
				return __builtin_atan2f16(y, x);
#			elif (__has_builtin(__builtin_atan2f))
				return mu0_const_fp16(__builtin_atan2f(y, x));
#			else
				return mu0_const_fp16(atan2f(y, x));
#			endif
#		else
#			if (__has_builtin(__builtin_atan2f))
				return __builtin_atan2f(y, x);
#			else
				return atan2f(y, x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atan2f(y, x);
#	else
	return atan2f(y, x);
#	endif
}

/* EOF */