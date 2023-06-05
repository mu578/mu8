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

// mu8_pow1pm1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_pow1pm1_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
	if (x == mu0_fp128_zero || y == mu0_fp128_zero) {
		return mu0_fp128_zero;
	}
	if (y == mu0_fp128_one) {
		return x;
	}
	if (y == mu0_fp128_two) {
		return x * (mu0_fp128_two + x);
	}
	if (mu8_fabs_fp128(x) < mu0_fp128_one) {
		return mu8_expm1_fp128(y * mu8_log1p_fp128(x));
	}
	return mu8_powm1_fp128(mu0_fp128_one + x, y);
}

mu0_fp64_t  mu8_pow1pm1_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
	if (x == mu0_fp64_zero || y == mu0_fp64_zero) {
		return mu0_fp64_zero;
	}
	if (y == mu0_fp64_one) {
		return x;
	}
	if (y == mu0_fp64_two) {
		return x * (mu0_fp64_two + x);
	}
	if (mu8_fabs_fp64(x) < mu0_fp64_one) {
		return mu8_expm1_fp64(y * mu8_log1p_fp64(x));
	}
	return mu8_powm1_fp64(mu0_fp64_one + x, y);
}

mu0_fp32_t  mu8_pow1pm1_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
	if (x == mu0_fp32_zero || y == mu0_fp32_zero) {
		return mu0_fp32_zero;
	}
	if (y == mu0_fp32_one) {
		return x;
	}
	if (y == mu0_fp32_two) {
		return x * (mu0_fp32_two + x);
	}
	if (mu8_fabs_fp32(x) < mu0_fp32_one) {
		return mu8_expm1_fp32(y * mu8_log1p_fp32(x));
	}
	return mu8_powm1_fp32(mu0_fp32_one + x, y);
}

mu0_fp16_t  mu8_pow1pm1_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
	if (x == mu0_fp16_zero || y == mu0_fp16_zero) {
		return mu0_fp16_zero;
	}
	if (y == mu0_fp16_one) {
		return x;
	}
	if (y == mu0_fp16_two) {
		return x * (mu0_fp16_two + x);
	}
	if (mu8_fabs_fp16(x) < mu0_fp16_one) {
		return mu8_expm1_fp16(y * mu8_log1p_fp16(x));
	}
	return mu8_powm1_fp16(mu0_fp16_one + x, y);
}

/* EOF */