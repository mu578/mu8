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

// mu8_exp10.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_exp10_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_exp10f128))
				return __builtin_exp10f128(x);
#			else
				return mu8_pow_fp128(mu0_fp128_ten, x);
#			endif
#		else
			return mu8_pow_fp128(mu0_fp128_ten, x);
#		endif
#	else
	return mu8_pow_fp128(mu0_fp128_ten, x);
#	endif
}

mu0_fp64_t  mu8_exp10_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_exp10))
			return __builtin_exp10(x);
#		else
			return mu8_pow_fp64(mu0_fp64_ten, x);
#		endif
#	else
	return mu8_pow_fp64(mu0_fp64_ten, x);
#	endif
}

mu0_fp32_t  mu8_exp10_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_exp10f))
			return __builtin_exp10f(x);
#		else
			return mu8_pow_fp32(mu0_fp32_ten, x);
#		endif
#	else
	return mu8_pow_fp32(mu0_fp32_ten, x);
#	endif
}

mu0_fp16_t  mu8_exp10_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_exp10f16))
				return __builtin_exp10f16(x);
#			else
				return mu8_pow_fp16(mu0_fp16_ten, x);
#			endif
#		else
			return mu8_pow_fp16(mu0_fp16_ten, x);
#		endif
#	else
	return mu8_pow_fp16(mu0_fp16_ten, x);
#	endif
}

/* EOF */