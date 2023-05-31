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

// mu8_expm1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_expm1_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_expm1f128))
				return __builtin_expm1f128(x);
#			elif (__has_builtin(__builtin_expm1l))
				return mu0_const_fp128(__builtin_expm1l(x));
#			else
				return mu0_const_fp128(expm1l(x));
#			endif
#		else
#			if (__has_builtin(__builtin_expm1l))
				return __builtin_expm1l(x);
#			else
				return expm1l(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_expm1l(x);
#	else
	return expm1l(x);
#	endif
}

mu0_fp64_t  mu8_expm1_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_expm1))
			return __builtin_expm1(x);
#		else
			return expm1(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_expm1(x);
#	else
		return expm1(x);
#	endif
}

mu0_fp32_t  mu8_expm1_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_expm1f))
			return __builtin_expm1f(x);
#		else
			return expm1f(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_expm1f(x);
#	else
		return expm1f(x);
#	endif
}

mu0_fp16_t  mu8_expm1_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_expm1f16))
				return __builtin_expm1f16(x);
#			elif (__has_builtin(__builtin_expm1f))
				return mu0_const_fp16(__builtin_expm1f(x));
#			else
				return mu0_const_fp16(expm1f(x));
#			endif
#		else
#			if (__has_builtin(__builtin_expm1f))
				return __builtin_expm1f(x);
#			else
				return expm1f(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_expm1f(x);
#	else
	return expm1f(x);
#	endif
}

/* EOF */