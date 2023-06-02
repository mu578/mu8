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

// mu8_fma.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_fma_fp128 (const mu0_fp128_t x, const mu0_fp128_t y, const mu0_fp128_t z)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_fmaf128))
				return __builtin_fmaf128(x, y, z);
#			elif (__has_builtin(__builtin_fmal))
				return mu0_const_fp128(__builtin_fmal(x, y, z));
#			else
				return mu0_const_fp128(fmal(x, y, z));
#			endif
#		else
#			if (__has_builtin(__builtin_fmal))
				return __builtin_fmal(x, y, z);
#			else
				return fmal(x, y, z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmal(x, y, z);
#	else
	return fmal(x, y, z);
#	endif
}

mu0_fp64_t  mu8_fma_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y, const mu0_fp64_t  z)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fma))
			return __builtin_fma(x, y, z);
#		else
			return fma(x, y, z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fma(x, y, z);
#	else
		return fma(x, y, z);
#	endif
}

mu0_fp32_t  mu8_fma_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y, const mu0_fp32_t  z)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fmaf))
			return __builtin_fmaf(x, y, z);
#		else
			return fmaf(x, y, z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmaf(x, y, z);
#	else
		return fmaf(x, y, z);
#	endif
}

mu0_fp16_t  mu8_fma_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y, const mu0_fp16_t  z)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_fmaf16_BUG))
				return __builtin_fmaf16(x, y, z);
#			elif (__has_builtin(__builtin_fmaf))
				return mu0_const_fp16(__builtin_fmaf(x, y, z));
#			else
				return mu0_const_fp16(fmaf(x, y, z));
#			endif
#		else
#			if (__has_builtin(__builtin_fmaf))
				return __builtin_fmaf(x, y, z);
#			else
				return fmaf(x, y, z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmaf(x, y, z);
#	else
	return fmaf(x, y, z);
#	endif
}

/* EOF */