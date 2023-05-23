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

// mu8_lgamma.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_lgamma_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_lgammaf128))
				return __builtin_lgammaf128(x);
#			elif (__has_builtin(__builtin_lgammal))
				return mu0_const_fp128(__builtin_lgammal(x));
#			else
				return mu0_const_fp128(lgammal(x));
#			endif
#		else
#			if (__has_builtin(__builtin_lgammal))
				return __builtin_lgammal(x);
#			else
				return lgammal(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_lgammal(x);
#	else
	return lgammal(x);
#	endif
}

mu0_fp64_t  mu8_lgamma_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_lgamma))
			return __builtin_lgamma(x);
#		else
		return lgamma(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_lgamma(x);
#	else
		return lgamma(x);
#	endif
}

mu0_fp32_t  mu8_lgamma_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_lgammaf))
			return __builtin_lgammaf(x);
#		else
		return lgammaf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_lgammaf(x);
#	else
		return lgammaf(x);
#	endif
}

mu0_fp16_t  mu8_lgamma_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_lgammaf16))
				return __builtin_lgammaf16(x);
#			elif (__has_builtin(__builtin_lgammaf))
				return mu0_const_fp16(__builtin_lgammaf(x));
#			else
				return mu0_const_fp16(lgammaf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_lgammaf))
				return __builtin_lgammaf(x);
#			else
				return lgammaf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_lgammaf(x);
#	else
	return lgammaf(x);
#	endif
}

/* EOF */