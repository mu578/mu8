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

// mu8_log10.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_log10_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_log10f128))
				return __builtin_log10f128(x);
#			elif (__has_builtin(__builtin_log10l))
				return mu0_const_fp128(__builtin_log10l(x));
#			else
				return mu0_const_fp128(log10l(x));
#			endif
#		else
#			if (__has_builtin(__builtin_log10l))
				return __builtin_log10l(x);
#			else
				return log10l(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log10l(x);
#	else
	return log10l(x);
#	endif
}

mu0_fp64_t  mu8_log10_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_log10))
			return __builtin_log10(x);
#		else
		return log10(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log10(x);
#	else
		return log10(x);
#	endif
}

mu0_fp32_t  mu8_log10_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_log10f))
			return __builtin_log10f(x);
#		else
		return log10f(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log10f(x);
#	else
		return log10f(x);
#	endif
}

mu0_fp16_t  mu8_log10_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_log10f16))
				return __builtin_log10f16(x);
#			elif (__has_builtin(__builtin_log10f))
				return mu0_const_fp16(__builtin_log10f(x));
#			else
				return mu0_const_fp16(log10f(x));
#			endif
#		else
#			if (__has_builtin(__builtin_log10f))
				return __builtin_log10f(x);
#			else
				return log10f(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log10f(x);
#	else
	return log10f(x);
#	endif
}

/* EOF */