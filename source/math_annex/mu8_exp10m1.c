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

// mu8_exp10m1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_exp10m1_fp128 (const mu0_fp128_t x)
{
	if (x < -__mu0_fp128_const__(0.3) && x > __mu0_fp128_const__(0.3)) {
		return mu8_exp10_fp128(x) - mu0_fp128_one;
	}
#	if MU0_HAVE_FASTMATH
	return mu8_expm1_fp128(x * mu8_math_ln10_fp128);
#	else
	return mu8_expm1_fp128(x * mu8_log_fp128(mu0_fp128_ten));
#	endif
}

mu0_fp64_t  mu8_exp10m1_fp64  (const mu0_fp64_t  x)
{
	if (x < -__mu0_fp64_const__(0.3) && x > __mu0_fp64_const__(0.3)) {
		return mu8_exp10_fp64(x) - mu0_fp64_one;
	}
#	if MU0_HAVE_FASTMATH
	return mu8_expm1_fp64(x * mu8_math_ln10_fp64);
#	else
	return mu8_expm1_fp64(x * mu8_log_fp64(mu0_fp64_ten));
#	endif
}

mu0_fp32_t  mu8_exp10m1_fp32  (const mu0_fp32_t  x)
{
	if (x < -__mu0_fp32_const__(0.3) && x > __mu0_fp32_const__(0.3)) {
		return mu8_exp10_fp32(x) - mu0_fp32_one;
	}
#	if MU0_HAVE_FASTMATH
	return mu8_expm1_fp32(x * mu8_math_ln10_fp32);
#	else
	return mu8_expm1_fp32(x * mu8_log_fp32(mu0_fp32_ten));
#	endif
}

mu0_fp16_t  mu8_exp10m1_fp16  (const mu0_fp16_t  x)
{
	if (x < -__mu0_fp16_const__(0.3) && x > __mu0_fp16_const__(0.3)) {
		return mu8_exp10_fp16(x) - mu0_fp16_one;
	}
#	if MU0_HAVE_FASTMATH
	return mu8_expm1_fp16(x * mu8_math_ln10_fp16);
#	else
	return mu8_expm1_fp16(x * mu8_log_fp16(mu0_fp16_ten));
#	endif
}

/* EOF */