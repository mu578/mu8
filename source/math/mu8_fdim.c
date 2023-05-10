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

// mu8_fdim.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_fdim_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_fdimf128))
				return __builtin_fdimf128(x, y);
#			elif (__has_builtin(__builtin_fdiml))
				return mu0_fp128(__builtin_fdiml(mu0_const_fpex(x), mu0_const_fpex(y)));
#			else
				return mu0_fp128(fdiml(mu0_const_fpex(x), mu0_const_fpex(y)));
#			endif
#		else
#			if (__has_builtin(__builtin_fdiml))
				return __builtin_fdiml(x, y);
#			else
				return fdiml(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fdiml(x, y);
#	else
	return fdiml(x, y);
#	endif
}

mu0_fp64_t  mu8_fdim_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_fdim))
			return __builtin_fdim(x, y);
#		else
		return fdim(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fdim(x, y);
#	else
		return fdim(x, y);
#	endif
}

mu0_fp32_t  mu8_fdim_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_fdimf))
			return __builtin_fdimf(x, y);
#		else
		return fdimf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fdimf(x, y);
#	else
		return fdimf(x, y);
#	endif
}

mu0_fp16_t  mu8_fdim_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_fdimf16))
				return __builtin_fdimf16(x, y);
#			elif (__has_builtin(__builtin_fdimf))
				return mu0_fp16(__builtin_fdimf(mu0_const_fp32(x), mu0_const_fp32(y)));
#			else
				return mu0_fp16(fdimf(mu0_const_fp32(x), mu0_const_fp32(y)));
#			endif
#		else
#			if (__has_builtin(__builtin_fdimf))
				return __builtin_fdimf(x, y);
#			else
				return fdimf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fdimf(x, y);
#	else
	return fdimf(x, y);
#	endif
}

/* EOF */