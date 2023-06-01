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

// mu8_nthroot.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_nthroot_fp128 (const mu0_uint64_t n, const mu0_fp128_t x)
{
	if (n > 0U) {
		if (n == 1U) {
			return x;
		}
		if (n == 2U) {
			return mu8_sqrt_fp128(x);
		}
		if (n == 3U) {
			return mu8_cbrt_fp128(x);
		}
		if (n == 4U) {
			return mu8_fhrt_fp128(x);
		}
		if (x < mu0_fp128_zero && ((n % 2) == 0)) {
			return mu0_fp128_nan;
		}
		return mu8_pow_fp128(x, mu0_fp128_one / n);
	}
	return mu0_fp128_nan;
}

mu0_fp64_t  mu8_nthroot_fp64  (const mu0_uint64_t n, const mu0_fp64_t  x)
{
	if (n > 0U) {
		if (n == 1U) {
			return x;
		}
		if (n == 2U) {
			return mu8_sqrt_fp64(x);
		}
		if (n == 3U) {
			return mu8_cbrt_fp64(x);
		}
		if (n == 4U) {
			return mu8_fhrt_fp64(x);
		}
		if (x < mu0_fp64_zero && ((n % 2) == 0)) {
			return mu0_fp64_nan;
		}
		return mu8_pow_fp64(x, mu0_fp64_one / n);
	}
	return mu0_fp64_nan;
}

mu0_fp32_t  mu8_nthroot_fp32  (const mu0_uint64_t n, const mu0_fp32_t  x)
{
	if (n > 0U) {
		if (n == 1U) {
			return x;
		}
		if (n == 2U) {
			return mu8_sqrt_fp32(x);
		}
		if (n == 3U) {
			return mu8_cbrt_fp32(x);
		}
		if (n == 4U) {
			return mu8_fhrt_fp32(x);
		}
		if (x < mu0_fp32_zero && ((n % 2) == 0)) {
			return mu0_fp32_nan;
		}
		return mu8_pow_fp32(x, mu0_fp32_one / n);
	}
	return mu0_fp32_nan;
}

mu0_fp16_t  mu8_nthroot_fp16  (const mu0_uint64_t n, const mu0_fp16_t  x)
{
	if (n > 0U) {
		if (n == 1U) {
			return x;
		}
		if (n == 2U) {
			return mu8_sqrt_fp16(x);
		}
		if (n == 3U) {
			return mu8_cbrt_fp16(x);
		}
		if (n == 4U) {
			return mu8_fhrt_fp16(x);
		}
		if (x < mu0_fp16_zero && ((n ) == 0)) {
			return mu0_fp16_nan;
		}
		return mu8_pow_fp16(x, mu0_fp16_one / n);
	}
	return mu0_fp16_nan;
}

/* EOF */