
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

// mu8_zmul1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

void mu8_zmul1_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b)
{
#	if MU0_HAVE_FASTMATH
	*cr = ar * b;
	*ci = ai * b;
#	else
	if (mu8_isinf_fp128(b)) {
		*cr = b;
		*ci = mu0_fp128_inf;
	} else if (mu8_isnan_fp128(b)) {
		*cr = mu0_fp128_nan;
		*ci = mu0_fp128_nan;
	} else if (b == mu0_fp128_zero) {
		*cr = mu0_fp128_zero;
		*ci = mu0_fp128_zero;
	} else {
		*cr = ar * b;
		*ci = ai * b;
	}
#	endif
}

void mu8_zmul1_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b)
{
#	if MU0_HAVE_FASTMATH
	*cr = ar * b;
	*ci = ai * b;
#	else
	if (mu8_isinf_fp64(b)) {
		*cr = b;
		*ci = mu0_fp64_inf;
	} else if (mu8_isnan_fp64(b)) {
		*cr = mu0_fp64_nan;
		*ci = mu0_fp64_nan;
	} else if (b == mu0_fp64_zero) {
		*cr = mu0_fp64_zero;
		*ci = mu0_fp64_zero;
	} else {
		*cr = ar * b;
		*ci = ai * b;
	}
#	endif
}

void mu8_zmul1_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b)
{
#	if MU0_HAVE_FASTMATH
	*cr = ar * b;
	*ci = ai * b;
#	else
	if (mu8_isinf_fp32(b)) {
		*cr = b;
		*ci = mu0_fp32_inf;
	} else if (mu8_isnan_fp32(b)) {
		*cr = mu0_fp32_nan;
		*ci = mu0_fp32_nan;
	} else if (b == mu0_fp32_zero) {
		*cr = mu0_fp32_zero;
		*ci = mu0_fp32_zero;
	} else {
		*cr = ar * b;
		*ci = ai * b;
	}
#	endif
}

void mu8_zmul1_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b)
{
#	if MU0_HAVE_FASTMATH
	*cr = ar * b;
	*ci = ai * b;
#	else
	if (mu8_isinf_fp16(b)) {
		*cr = b;
		*ci = mu0_fp16_inf;
	} else if (mu8_isnan_fp16(b)) {
		*cr = mu0_fp16_nan;
		*ci = mu0_fp16_nan;
	} else if (b == mu0_fp16_zero) {
		*cr = mu0_fp16_zero;
		*ci = mu0_fp16_zero;
	} else {
		*cr = ar * b;
		*ci = ai * b;
	}
#	endif
}

/* EOF */