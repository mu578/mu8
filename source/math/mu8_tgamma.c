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

// mu8_tgamma.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_tgamma_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_tgammaf128))
				return __builtin_tgammaf128(x);
#			elif (__has_builtin(__builtin_tgammal))
				return mu0_const_fp128(__builtin_tgammal(x));
#			else
				return mu0_const_fp128(tgammal(x));
#			endif
#		else
#			if (__has_builtin(__builtin_tgammal))
				return __builtin_tgammal(x);
#			else
				return tgammal(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tgammal(x);
#	else
	return tgammal(x);
#	endif
}

mu0_fp64_t  mu8_tgamma_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_tgamma))
			return __builtin_tgamma(x);
#		else
			return tgamma(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tgamma(x);
#	else
		return tgamma(x);
#	endif
}

mu0_fp32_t  mu8_tgamma_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_tgammaf))
			return __builtin_tgammaf(x);
#		else
			return tgammaf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tgammaf(x);
#	else
		return tgammaf(x);
#	endif
}

mu0_fp16_t  mu8_tgamma_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_tgammaf16))
				return __builtin_tgammaf16(x);
#			elif (__has_builtin(__builtin_tgammaf))
				return mu0_const_fp16(__builtin_tgammaf(x));
#			else
				return mu0_const_fp16(tgammaf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_tgammaf))
				return __builtin_tgammaf(x);
#			else
				return tgammaf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tgammaf(x);
#	else
	return tgammaf(x);
#	endif
}

/* EOF */