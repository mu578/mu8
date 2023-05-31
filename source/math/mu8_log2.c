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

// mu8_log2.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_log2_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_log2f128))
				return __builtin_log2f128(x);
#			elif (__has_builtin(__builtin_log2l))
				return mu0_const_fp128(__builtin_log2l(x));
#			else
				return mu0_const_fp128(log2l(x));
#			endif
#		else
#			if (__has_builtin(__builtin_log2l))
				return __builtin_log2l(x);
#			else
				return log2l(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log2l(x);
#	else
	return log2l(x);
#	endif
}

mu0_fp64_t  mu8_log2_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_log2))
			return __builtin_log2(x);
#		else
			return log2(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log2(x);
#	else
		return log2(x);
#	endif
}

mu0_fp32_t  mu8_log2_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_log2f))
			return __builtin_log2f(x);
#		else
			return log2f(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log2f(x);
#	else
		return log2f(x);
#	endif
}

mu0_fp16_t  mu8_log2_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_log2f16))
				return __builtin_log2f16(x);
#			elif (__has_builtin(__builtin_log2f))
				return mu0_const_fp16(__builtin_log2f(x));
#			else
				return mu0_const_fp16(log2f(x));
#			endif
#		else
#			if (__has_builtin(__builtin_log2f))
				return __builtin_log2f(x);
#			else
				return log2f(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log2f(x);
#	else
	return log2f(x);
#	endif
}

/* EOF */