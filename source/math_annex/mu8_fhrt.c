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

// mu8_fhrt.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_fhrt_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_FASTMATH
	if (x < mu0_fp128_zero) {
		return -mu8_pow_fp128(-x, __mu0_fp128_const__(0.25));
	}
#	else
	if (mu8_fisneg_fp128(x)) {
		return -mu8_pow_fp128(-x, __mu0_fp128_const__(0.25));
	}
#	endif
	return mu8_pow_fp128(x, __mu0_fp128_const__(0.25));
}

mu0_fp64_t  mu8_fhrt_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_FASTMATH
	if (x < mu0_fp64_zero) {
		return -mu8_pow_fp64(-x, __mu0_fp64_const__(0.25));
	}
#	else
	if (mu8_fisneg_fp64(x)) {
		return -mu8_pow_fp64(-x, __mu0_fp64_const__(0.25));
	}
#	endif
	return mu8_pow_fp64(x, __mu0_fp64_const__(0.25));
}

mu0_fp32_t  mu8_fhrt_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_FASTMATH
	if (x < mu0_fp32_zero) {
		return -mu8_pow_fp32(-x, __mu0_fp32_const__(0.25));
	}
#	else
	if (mu8_fisneg_fp32(x)) {
		return -mu8_pow_fp32(-x, __mu0_fp32_const__(0.25));
	}
#	endif
	return mu8_pow_fp32(x, __mu0_fp32_const__(0.25));
}

mu0_fp16_t  mu8_fhrt_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_FASTMATH
	if (x < mu0_fp16_zero) {
		return -mu8_pow_fp16(-x, __mu0_fp16_const__(0.25));
	}
#	else
	if (mu8_fisneg_fp16(x)) {
		return -mu8_pow_fp16(-x, __mu0_fp16_const__(0.25));
	}
#	endif
	return mu8_pow_fp16(x, __mu0_fp16_const__(0.25));
}

/* EOF */