
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

// mu8_zcosh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zcosh_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_cosh_fp128(ar) * mu8_cos_fp128(ai);
	*zi = mu8_sinh_fp128(ar) * mu8_sin_fp128(ai);
#	else
	if (mu8_isinf_fp128(ar) && !mu8_isfinite_fp128(ai)) {
		*zr = mu8_fabs_fp128(ar);
		*zi = mu0_fp128_nan;
	} else if (ar == mu0_fp128_zero && !mu8_isfinite_fp128(ai)) {
		*zr = mu0_fp128_nan;
		*zi = ar;
	} else if (ar == mu0_fp128_zero && ai == mu0_fp128_zero) {
		*zr = mu0_fp128_one;
		*zi = ai;
	} else if (ai == mu0_fp128_zero && !mu8_isfinite_fp128(ar)) {
		*zr = mu8_fabs_fp128(ar);
		*zi = ai;
	} else {
		*zr = mu8_cosh_fp128(ar) * mu8_cos_fp128(ai);
		*zi = mu8_sinh_fp128(ar) * mu8_sin_fp128(ai);
	}
#	endif
}

void mu8_zcosh_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_cosh_fp64(ar) * mu8_cos_fp64(ai);
	*zi = mu8_sinh_fp64(ar) * mu8_sin_fp64(ai);
#	else
	if (mu8_isinf_fp64(ar) && !mu8_isfinite_fp64(ai)) {
		*zr = mu8_fabs_fp64(ar);
		*zi = mu0_fp64_nan;
	} else if (ar == mu0_fp64_zero && !mu8_isfinite_fp64(ai)) {
		*zr = mu0_fp64_nan;
		*zi = ar;
	} else if (ar == mu0_fp64_zero && ai == mu0_fp64_zero) {
		*zr = mu0_fp64_one;
		*zi = ai;
	} else if (ai == mu0_fp64_zero && !mu8_isfinite_fp64(ar)) {
		*zr = mu8_fabs_fp64(ar);
		*zi = ai;
	} else {
		*zr = mu8_cosh_fp64(ar) * mu8_cos_fp64(ai);
		*zi = mu8_sinh_fp64(ar) * mu8_sin_fp64(ai);
	}
#	endif
}

void mu8_zcosh_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_cosh_fp32(ar) * mu8_cos_fp32(ai);
	*zi = mu8_sinh_fp32(ar) * mu8_sin_fp32(ai);
#	else
	if (mu8_isinf_fp32(ar) && !mu8_isfinite_fp32(ai)) {
		*zr = mu8_fabs_fp32(ar);
		*zi = mu0_fp32_nan;
	} else if (ar == mu0_fp32_zero && !mu8_isfinite_fp32(ai)) {
		*zr = mu0_fp32_nan;
		*zi = ar;
	} else if (ar == mu0_fp32_zero && ai == mu0_fp32_zero) {
		*zr = mu0_fp32_one;
		*zi = ai;
	} else if (ai == mu0_fp32_zero && !mu8_isfinite_fp32(ar)) {
		*zr = mu8_fabs_fp32(ar);
		*zi = ai;
	} else {
		*zr = mu8_cosh_fp32(ar) * mu8_cos_fp32(ai);
		*zi = mu8_sinh_fp32(ar) * mu8_sin_fp32(ai);
	}
#	endif
}

void mu8_zcosh_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_cosh_fp16(ar) * mu8_cos_fp16(ai);
	*zi = mu8_sinh_fp16(ar) * mu8_sin_fp16(ai);
#	else
	if (mu8_isinf_fp16(ar) && !mu8_isfinite_fp16(ai)) {
		*zr = mu8_fabs_fp16(ar);
		*zi = mu0_fp16_nan;
	} else if (ar == mu0_fp16_zero && !mu8_isfinite_fp16(ai)) {
		*zr = mu0_fp16_nan;
		*zi = ar;
	} else if (ar == mu0_fp16_zero && ai == mu0_fp16_zero) {
		*zr = mu0_fp16_one;
		*zi = ai;
	} else if (ai == mu0_fp16_zero && !mu8_isfinite_fp16(ar)) {
		*zr = mu8_fabs_fp16(ar);
		*zi = ai;
	} else {
		*zr = mu8_cosh_fp16(ar) * mu8_cos_fp16(ai);
		*zi = mu8_sinh_fp16(ar) * mu8_sin_fp16(ai);
	}
#	endif
}

/* EOF */