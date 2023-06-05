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

// mu8_xlogy.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_xlogy_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
	mu0_fp128_t r = mu0_fp128_zero;
	if (y == mu0_fp128_zero) {
		return mu0_fp128_nan;
	}
	if (x == mu0_fp128_zero) {
		return r;
	}
	if ((r = mu8_log_fp128(y)) != -mu0_fp128_inf) {
		r = x * r;
	}
	return r;
}

mu0_fp64_t  mu8_xlogy_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
	mu0_fp64_t  r = mu0_fp64_zero;
	if (y == mu0_fp64_zero) {
		return mu0_fp64_nan;
	}
	if (x == mu0_fp64_zero) {
		return r;
	}
	if ((r = mu8_log_fp64(y)) != -mu0_fp64_inf) {
		r = x * r;
	}
	return r;
}

mu0_fp32_t  mu8_xlogy_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
	mu0_fp32_t  r = mu0_fp32_zero;
	if (y == mu0_fp32_zero) {
		return mu0_fp32_nan;
	}
	if (x == mu0_fp32_zero) {
		return r;
	}
	if ((r = mu8_log_fp32(y)) != -mu0_fp32_inf) {
		r = x * r;
	}
	return r;
}

mu0_fp16_t  mu8_xlogy_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
	mu0_fp16_t  r = mu0_fp16_zero;
	if (y == mu0_fp16_zero) {
		return mu0_fp16_nan;
	}
	if (x == mu0_fp16_zero) {
		return r;
	}
	if ((r = mu8_log_fp16(y)) != -mu0_fp16_inf) {
		r = x * r;
	}
	return r;
}

/* EOF */