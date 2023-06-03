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

// mu8_fisval.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_bool_t mu8_fisval_fp128 (const mu0_fp128_t x)
{
	if (mu8_isnan_fp128(x) || mu8_isinf_fp128(x)) {
		return mu0_false;
	}
	if (x != mu0_fp128_zero) {
		if (!mu8_isnormal_fp128(x)) {
			return mu0_false;
		}
	}
	if (x < mu0_fp128_zero && !(x < mu0_fp128_min)) {
		return mu0_false;
	}
	if (x > mu0_fp128_zero && !(x < mu0_fp128_max)) {
		return mu0_false;
	}
	return mu0_true;
}

mu0_bool_t mu8_fisval_fp64  (const mu0_fp64_t  x)
{
	if (mu8_isnan_fp64(x) || mu8_isinf_fp64(x)) {
		return mu0_false;
	}
	if (x != mu0_fp64_zero) {
		if (!mu8_isnormal_fp64(x)) {
			return mu0_false;
		}
	}
	if (x < mu0_fp64_zero && !(x < mu0_fp64_min)) {
		return mu0_false;
	}
	if (x > mu0_fp64_zero && !(x < mu0_fp64_max)) {
		return mu0_false;
	}
	return mu0_true;
}

mu0_bool_t mu8_fisval_fp32  (const mu0_fp32_t  x)
{
	if (mu8_isnan_fp32(x) || mu8_isinf_fp32(x)) {
		return mu0_false;
	}
	if (x != mu0_fp32_zero) {
		if (!mu8_isnormal_fp32(x)) {
			return mu0_false;
		}
	}
	if (x < mu0_fp32_zero && !(x < mu0_fp32_min)) {
		return mu0_false;
	}
	if (x > mu0_fp32_zero && !(x < mu0_fp32_max)) {
		return mu0_false;
	}
	return mu0_true;
}

mu0_bool_t mu8_fisval_fp16  (const mu0_fp16_t  x)
{
	if (mu8_isnan_fp16(x) || mu8_isinf_fp16(x)) {
		return mu0_false;
	}
	if (x != mu0_fp16_zero) {
		if (!mu8_isnormal_fp16(x)) {
			return mu0_false;
		}
	}
	if (x < mu0_fp16_zero && !(x < mu0_fp16_min)) {
		return mu0_false;
	}
	if (x > mu0_fp16_zero && !(x < mu0_fp16_max)) {
		return mu0_false;
	}
	return mu0_true;
}

/* EOF */