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

// mu8_fmax.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_fmax_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_fmaxf128))
				return __builtin_fmaxf128(x, y);
#			elif (__has_builtin(__builtin_fmaxl))
				return mu0_const_fp128(__builtin_fmaxl(x, y));
#			else
				return mu0_const_fp128(fmaxl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_fmaxl))
				return __builtin_fmaxl(x, y);
#			else
				return fmaxl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmaxl(x, y);
#	else
	return fmaxl(x, y);
#	endif
}

mu0_fp64_t  mu8_fmax_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_fmax))
			return __builtin_fmax(x, y);
#		else
		return fmax(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmax(x, y);
#	else
		return fmax(x, y);
#	endif
}

mu0_fp32_t  mu8_fmax_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_fmaxf))
			return __builtin_fmaxf(x, y);
#		else
		return fmaxf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmaxf(x, y);
#	else
		return fmaxf(x, y);
#	endif
}

mu0_fp16_t  mu8_fmax_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_fmaxf16))
				return __builtin_fmaxf16(x, y);
#			elif (__has_builtin(__builtin_fmaxf))
				return mu0_const_fp16(__builtin_fmaxf(x, y));
#			else
				return mu0_const_fp16(fmaxf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_fmaxf))
				return __builtin_fmaxf(x, y);
#			else
				return fmaxf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmaxf(x, y);
#	else
	return fmaxf(x, y);
#	endif
}

/* EOF */