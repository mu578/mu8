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

// mu8_round.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_round_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_roundf128))
				return __builtin_roundf128(x);
#			elif (__has_builtin(__builtin_roundl))
				return mu0_fp128(__builtin_roundl(mu0_const_fpex(x)));
#			else
				return mu0_fp128(roundl(mu0_const_fpex(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_roundl))
				return __builtin_roundl(x);
#			else
				return roundl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_roundl(x);
#	else
	return roundl(x);
#	endif
}

mu0_fp64_t  mu8_round_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_round))
			return __builtin_round(x);
#		else
		return round(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_round(x);
#	else
		return round(x);
#	endif
}

mu0_fp32_t  mu8_round_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_roundf))
			return __builtin_roundf(x);
#		else
		return roundf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_roundf(x);
#	else
		return roundf(x);
#	endif
}

mu0_fp16_t  mu8_round_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_roundf16))
				return __builtin_roundf16(x);
#			elif (__has_builtin(__builtin_roundf))
				return mu0_fp16(__builtin_roundf(mu0_const_fp32(x)));
#			else
				return mu0_fp16(roundf(mu0_const_fp32(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_roundf))
				return __builtin_roundf(x);
#			else
				return roundf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_roundf(x);
#	else
	return roundf(x);
#	endif
}

/* EOF */