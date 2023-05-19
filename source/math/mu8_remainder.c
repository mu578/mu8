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

// mu8_remainder.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_remainder_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_remainderf128))
				return __builtin_remainderf128(x, y);
#			elif (__has_builtin(__builtin_remainderl))
				return mu0_const_fp128(__builtin_remainderl(x, y));
#			else
				return mu0_const_fp128(remainderl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_remainderl))
				return __builtin_remainderl(x, y);
#			else
				return remainderl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_remainderl(x, y);
#	else
	return remainderl(x, y);
#	endif
}

mu0_fp64_t  mu8_remainder_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_remainder))
			return __builtin_remainder(x, y);
#		else
		return remainder(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_remainder(x, y);
#	else
		return remainder(x, y);
#	endif
}

mu0_fp32_t  mu8_remainder_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_remainderf))
			return __builtin_remainderf(x, y);
#		else
		return remainderf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_remainderf(x, y);
#	else
		return remainderf(x, y);
#	endif
}

mu0_fp16_t  mu8_remainder_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_remainderf16))
				return __builtin_remainderf16(x, y);
#			elif (__has_builtin(__builtin_remainderf))
				return mu0_const_fp16(__builtin_remainderf(x, y));
#			else
				return mu0_const_fp16(remainderf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_remainderf))
				return __builtin_remainderf(x, y);
#			else
				return remainderf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_remainderf(x, y);
#	else
	return remainderf(x, y);
#	endif
}

/* EOF */