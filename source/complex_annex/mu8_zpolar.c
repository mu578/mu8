
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

// mu8_zsqrt.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zpolar_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t rho, const mu0_fp128_t theta)
{
	if (mu8_isnan_fp128(rho) || mu8_signbit_fp128(rho) < mu0_fp128_zero) {
		*zr = mu0_fp128_nan;
		*zi = mu0_fp128_nan;
	} else if (mu8_isnan_fp128(theta)) {
		if (mu8_isinf_fp128(rho)) {
			*zr = rho;
			*zi = theta;
		} else {
			*zr = theta;
			*zi = theta;
		}
	} else if (mu8_isinf_fp128(theta)) {
		if (mu8_isinf_fp128(rho)) {
			*zr = rho;
			*zi = mu0_fp128_nan;
		} else {
			*zr = mu0_fp128_nan;
			*zi = theta;
		}
	} else {
		*zr = rho * mu8_cos_fp128(theta);
		if (mu8_isnan_fp128(*zr)) {
			*zr = mu0_fp128_zero;
		}
		*zi = rho * mu8_sin_fp128(theta);
		if (mu8_isnan_fp128(*zi)) {
			*zi = mu0_fp128_zero;
		}
	}
}

void mu8_zpolar_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  rho, const mu0_fp64_t  theta)
{
	if (mu8_isnan_fp64(rho) || mu8_signbit_fp64(rho) < mu0_fp64_zero) {
		*zr = mu0_fp64_nan;
		*zi = mu0_fp64_nan;
	} else if (mu8_isnan_fp64(theta)) {
		if (mu8_isinf_fp64(rho)) {
			*zr = rho;
			*zi = theta;
		} else {
			*zr = theta;
			*zi = theta;
		}
	} else if (mu8_isinf_fp64(theta)) {
		if (mu8_isinf_fp64(rho)) {
			*zr = rho;
			*zi = mu0_fp64_nan;
		} else {
			*zr = mu0_fp64_nan;
			*zi = theta;
		}
	} else {
		*zr = rho * mu8_cos_fp64(theta);
		if (mu8_isnan_fp64(*zr)) {
			*zr = mu0_fp64_zero;
		}
		*zi = rho * mu8_sin_fp64(theta);
		if (mu8_isnan_fp64(*zi)) {
			*zi = mu0_fp64_zero;
		}
	}
}

void mu8_zpolar_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  rho, const mu0_fp32_t  theta)
{
	if (mu8_isnan_fp32(rho) || mu8_signbit_fp32(rho) < mu0_fp32_zero) {
		*zr = mu0_fp32_nan;
		*zi = mu0_fp32_nan;
	} else if (mu8_isnan_fp32(theta)) {
		if (mu8_isinf_fp32(rho)) {
			*zr = rho;
			*zi = theta;
		} else {
			*zr = theta;
			*zi = theta;
		}
	} else if (mu8_isinf_fp32(theta)) {
		if (mu8_isinf_fp32(rho)) {
			*zr = rho;
			*zi = mu0_fp32_nan;
		} else {
			*zr = mu0_fp32_nan;
			*zi = theta;
		}
	} else {
		*zr = rho * mu8_cos_fp32(theta);
		if (mu8_isnan_fp32(*zr)) {
			*zr = mu0_fp32_zero;
		}
		*zi = rho * mu8_sin_fp32(theta);
		if (mu8_isnan_fp32(*zi)) {
			*zi = mu0_fp32_zero;
		}
	}
}

void mu8_zpolar_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  rho, const mu0_fp16_t  theta)
{
	if (mu8_isnan_fp16(rho) || mu8_signbit_fp16(rho) < mu0_fp16_zero) {
		*zr = mu0_fp16_nan;
		*zi = mu0_fp16_nan;
	} else if (mu8_isnan_fp16(theta)) {
		if (mu8_isinf_fp16(rho)) {
			*zr = rho;
			*zi = theta;
		} else {
			*zr = theta;
			*zi = theta;
		}
	} else if (mu8_isinf_fp16(theta)) {
		if (mu8_isinf_fp16(rho)) {
			*zr = rho;
			*zi = mu0_fp16_nan;
		} else {
			*zr = mu0_fp16_nan;
			*zi = theta;
		}
	} else {
		*zr = rho * mu8_cos_fp16(theta);
		if (mu8_isnan_fp16(*zr)) {
			*zr = mu0_fp16_zero;
		}
		*zi = rho * mu8_sin_fp16(theta);
		if (mu8_isnan_fp16(*zi)) {
			*zi = mu0_fp16_zero;
		}
	}
}

/* EOF */