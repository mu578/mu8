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

// mu8_powm1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_powm1_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
	mu0_fp128_t r = mu0_fp128_zero;
	if (y != mu0_fp128_zero && (x > mu0_fp128_zero && (x < mu0_fp128_two || mu8_fabs_fp128(y) < mu0_fp128_two))) {
		r = y * mu8_log_fp128(x);
		if (mu8_fabs_fp128(r) < __mu0_fp128_const__(4.0)) {
			r = mu8_expm1_fp128(r);
		} else {
			r = mu8_pow_fp128(x, y) - mu0_fp128_one;
		}
	} else if (y != mu0_fp128_zero) {
		r = mu8_pow_fp128(x, y) - mu0_fp128_one;
	}
	return r;
}

mu0_fp64_t  mu8_powm1_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
	mu0_fp64_t  r = mu0_fp64_zero;
	if (y != mu0_fp64_zero && (x > mu0_fp64_zero && (x < mu0_fp64_two || mu8_fabs_fp64(y) < mu0_fp64_two))) {
		r = y * mu8_log_fp64(x);
		if (mu8_fabs_fp64(r) < __mu0_fp64_const__(4.0)) {
			r = mu8_expm1_fp64(r);
		} else {
			r = mu8_pow_fp64(x, y) - mu0_fp64_one;
		}
	} else if (y != mu0_fp64_zero) {
		r = mu8_pow_fp64(x, y) - mu0_fp64_one;
	}
	return r;
}

mu0_fp32_t  mu8_powm1_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
	mu0_fp32_t  r = mu0_fp32_zero;
	if (y != mu0_fp32_zero && (x > mu0_fp32_zero && (x < mu0_fp32_two || mu8_fabs_fp32(y) < mu0_fp32_two))) {
		r = y * mu8_log_fp32(x);
		if (mu8_fabs_fp32(r) < __mu0_fp32_const__(4.0)) {
			r = mu8_expm1_fp32(r);
		} else {
			r = mu8_pow_fp32(x, y) - mu0_fp32_one;
		}
	} else if (y != mu0_fp32_zero) {
		r = mu8_pow_fp32(x, y) - mu0_fp32_one;
	}
	return r;
}

mu0_fp16_t  mu8_powm1_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
	mu0_fp16_t  r = mu0_fp16_zero;
	if (y != mu0_fp16_zero && (x > mu0_fp16_zero && (x < mu0_fp16_two || mu8_fabs_fp16(y) < mu0_fp16_two))) {
		r = y * mu8_log_fp16(x);
		if (mu8_fabs_fp16(r) < __mu0_fp16_const__(4.0)) {
			r = mu8_expm1_fp16(r);
		} else {
			r = mu8_pow_fp16(x, y) - mu0_fp16_one;
		}
	} else if (y != mu0_fp16_zero) {
		r = mu8_pow_fp16(x, y) - mu0_fp16_one;
	}
	return r;
}

/* EOF */