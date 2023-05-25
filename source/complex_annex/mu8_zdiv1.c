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

// mu8_zdiv1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

void mu8_zdiv1_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b)
{
#	if MU0_HAVE_FASTMATH
		*zr = ar * (mu0_fp128_one / b);
		*zi = ai * (mu0_fp128_one / b);
#	else
	if (mu8_isinf_fp128(b)) {
		*zr = b;
		*zi = mu0_fp128_inf;
	} else if (mu8_isnan_fp128(b)) {
		*zr = mu0_fp128_nan;
		*zi = mu0_fp128_nan;
	} else if (b == mu0_fp128_zero) {
		*zr = mu0_fp128_nan;
		*zi = mu0_fp128_nan;
	} else {
		*zr = ar * (mu0_fp128_one / b);
		*zi = ai * (mu0_fp128_one / b);
	}
#	endif
}

void mu8_zdiv1_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b)
{
#	if MU0_HAVE_FASTMATH
		*zr = ar * (mu0_fp64_one / b);
		*zi = ai * (mu0_fp64_one / b);
#	else
	if (mu8_isinf_fp64(b)) {
		*zr = b;
		*zi = mu0_fp64_inf;
	} else if (mu8_isnan_fp64(b)) {
		*zr = mu0_fp64_nan;
		*zi = mu0_fp64_nan;
	} else if (b == mu0_fp64_zero) {
		*zr = mu0_fp64_nan;
		*zi = mu0_fp64_nan;
	} else {
		*zr = ar * (mu0_fp64_one / b);
		*zi = ai * (mu0_fp64_one / b);
	}
#	endif
}

void mu8_zdiv1_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b)
{
#	if MU0_HAVE_FASTMATH
		*zr = ar * (mu0_fp32_one / b);
		*zi = ai * (mu0_fp32_one / b);
#	else
	if (mu8_isinf_fp32(b)) {
		*zr = b;
		*zi = mu0_fp32_inf;
	} else if (mu8_isnan_fp32(b)) {
		*zr = mu0_fp32_nan;
		*zi = mu0_fp32_nan;
	} else if (b == mu0_fp32_zero) {
		*zr = mu0_fp32_nan;
		*zi = mu0_fp32_nan;
	} else {
		*zr = ar * (mu0_fp32_one / b);
		*zi = ai * (mu0_fp32_one / b);
	}
#	endif
}

void mu8_zdiv1_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b)
{
#	if MU0_HAVE_FASTMATH
		*zr = ar * (mu0_fp16_one / b);
		*zi = ai * (mu0_fp16_one / b);
#	else
	if (mu8_isinf_fp16(b)) {
		*zr = b;
		*zi = mu0_fp16_inf;
	} else if (mu8_isnan_fp16(b)) {
		*zr = mu0_fp16_nan;
		*zi = mu0_fp16_nan;
	} else if (b == mu0_fp16_zero) {
		*zr = mu0_fp16_nan;
		*zi = mu0_fp16_nan;
	} else {
		*zr = ar * (mu0_fp16_one / b);
		*zi = ai * (mu0_fp16_one / b);
	}
#	endif
}

/* EOF */