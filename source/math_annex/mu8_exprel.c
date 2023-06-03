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

// mu8_exprel.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math.h>

mu0_fp128_t mu8_exprel_fp128 (const mu0_fp128_t x)
{
//#! Relative error exponential: (exp(x) - 1) / x.
	if (mu8_isnan_fp128(x) || mu8_isinf_fp128(x)) {
		return mu0_fp128_inf;
	}
	if (x == mu0_fp128_zero) {
		return mu0_fp128_one;
	}
	if (x > mu0_fp128_log_max) {
		return mu0_fp128_inf;
	}
	return mu8_expm1_fp128(x) / x;
}

mu0_fp64_t  mu8_exprel_fp64  (const mu0_fp64_t  x)
{
	mu0_fp64_t w, v;
//#! Relative error exponential: (exp(x) - 1) / x.
	if (mu8_isnan_fp64(x) || mu8_isinf_fp64(x)) {
		return mu0_fp64_inf;
	}
	if (x == mu0_fp64_zero) {
		return mu0_fp64_one;
	}
	if (x > mu0_fp64_log_max) {
		return mu0_fp64_inf;
	}
	w = mu8_fabs_fp64(x);
	if (w < mu8_math_ln2_fp64) {
		if (w < __mu0_fp64_const__(1E-07)) {
			return mu0_fp64_one + x * (mu0_fp64_half + x / __mu0_fp64_const__(6.0));
		}
		w = mu8_exp_fp64(x);
		v = mu8_log_fp64(w);
		if (v == mu0_fp64_zero) {
			return mu0_fp64_one;
		}
		return (w - mu0_fp64_one) / v;
	}
	if (x < -__mu0_fp64_const__(38.5)) {
		return -mu0_fp64_one / x;
	}
	return mu8_expm1_fp64(x) / x;
}

mu0_fp32_t  mu8_exprel_fp32  (const mu0_fp32_t  x)
{
//#! Relative error exponential: (exp(x) - 1) / x.
	mu0_fp32_t w, v;
	if (mu8_isnan_fp32(x) || mu8_isinf_fp32(x)) {
		return mu0_fp32_inf;
	}
	if (x == mu0_fp32_zero) {
		return mu0_fp32_one;
	}
	if (x > mu0_fp32_log_max) {
		return mu0_fp32_inf;
	}
	w = mu8_fabs_fp32(x);
	if (w < mu8_math_ln2_fp32) {
		if (w < __mu0_fp32_const__(1E-05)) {
			return mu0_fp32_one + x * (mu0_fp32_half + x / __mu0_fp32_const__(6.0));
		}
		w = mu8_exp_fp32(x);
		v = mu8_log_fp32(w);
		if (v == mu0_fp32_zero) {
			return mu0_fp32_one;
		}
		return (w - mu0_fp32_one) / v;
	}
	if (x < -__mu0_fp32_const__(20.0)) {
		return -mu0_fp32_one / x;
	}
	return mu8_expm1_fp32(x) / x;
}

mu0_fp16_t  mu8_exprel_fp16  (const mu0_fp16_t  x)
{
//#! Relative error exponential: (exp(x) - 1) / x.
	if (mu8_isnan_fp16(x) || mu8_isinf_fp16(x)) {
		return mu0_fp16_inf;
	}
	if (x == mu0_fp16_zero) {
		return mu0_fp16_one;
	}
	if (x > mu0_fp16_log_max) {
		return mu0_fp16_inf;
	}
	return mu8_expm1_fp16(x) / x;
}

/* EOF */