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

// mu8_pow.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_pow_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_powf128))
				return __builtin_powf128(x, y);
#			elif (__has_builtin(__builtin_powl))
				return mu0_fp128(__builtin_powl(mu0_const_fpex(x), mu0_const_fpex(y)));
#			else
				return mu0_fp128(powl(mu0_const_fpex(x), mu0_const_fpex(y)));
#			endif
#		else
#			if (__has_builtin(__builtin_powl))
				return __builtin_powl(x, y);
#			else
				return powl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_powl(x, y);
#	else
	return powl(x, y);
#	endif
}

mu0_fp64_t  mu8_pow_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_pow))
			return __builtin_pow(x, y);
#		else
		return pow(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_pow(x, y);
#	else
		return pow(x, y);
#	endif
}

mu0_fp32_t  mu8_pow_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_powf))
			return __builtin_powf(x, y);
#		else
		return powf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_powf(x, y);
#	else
		return powf(x, y);
#	endif
}

mu0_fp16_t  mu8_pow_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_powf16))
				return __builtin_powf16(x, y);
#			elif (__has_builtin(__builtin_powf))
				return mu0_fp16(__builtin_powf(mu0_const_fp32(x), mu0_const_fp32(y)));
#			else
				return mu0_fp16(powf(mu0_const_fp32(x), mu0_const_fp32(y)));
#			endif
#		else
#			if (__has_builtin(__builtin_powf))
				return __builtin_powf(x, y);
#			else
				return powf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_powf(x, y);
#	else
	return powf(x, y);
#	endif
}

/* EOF */