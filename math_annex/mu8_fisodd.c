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

// mu8_fisodd.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_bool_t mu8_fisodd_fp128 (const mu0_fp128_t x, const mu0_bool_t f)
{
	mu0_fp128_t y = x;
	if (y == mu0_fp128_zero) {
		return mu0_true;
	}
	if (f == mu0_true) {
		mu8_modf_fp128(y, &y);
	}
	if (mu8_fmod_fp128(y, mu0_fp128_one) == mu0_fp128_zero && mu8_fmod_fp128(y, mu0_fp128_two) != mu0_fp128_zero) {
		return mu0_true;
	}
	return mu0_false;
}

mu0_bool_t mu8_fisodd_fp64  (const mu0_fp64_t  x, const mu0_bool_t f)
{
	mu0_fp64_t  y = x;
	if (y == mu0_fp64_zero) {
		return mu0_true;
	}
	if (f == mu0_true) {
		mu8_modf_fp64(y, &y);
	}
	if (mu8_fmod_fp64(y, mu0_fp64_one) == mu0_fp64_zero && mu8_fmod_fp64(y, mu0_fp64_two) != mu0_fp64_zero) {
		return mu0_true;
	}
	return mu0_false;
}

mu0_bool_t mu8_fisodd_fp32  (const mu0_fp32_t  x, const mu0_bool_t f)
{
	mu0_fp32_t  y = x;
	if (y == mu0_fp32_zero) {
		return mu0_true;
	}
	if (f == mu0_true) {
		mu8_modf_fp32(y, &y);
	}
	if (mu8_fmod_fp32(y, mu0_fp32_one) == mu0_fp32_zero && mu8_fmod_fp32(y, mu0_fp32_two) != mu0_fp32_zero) {
		return mu0_true;
	}
	return mu0_false;
}

mu0_bool_t mu8_fisodd_fp16  (const mu0_fp16_t  x, const mu0_bool_t f)
{
	mu0_fp16_t  y = x;
	if (y == mu0_fp16_zero) {
		return mu0_true;
	}
	if (f == mu0_true) {
		mu8_modf_fp16(y, &y);
	}
	if (mu8_fmod_fp16(y, mu0_fp16_one) == mu0_fp16_zero && mu8_fmod_fp16(y, mu0_fp16_two) != mu0_fp16_zero) {
		return mu0_true;
	}
	return mu0_false;
}

/* EOF */