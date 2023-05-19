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

// mu8_zmod.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_zmod_fp128 (const mu0_fp128_t zr, const mu0_fp128_t zi)
{
	if (mu8_isinf_fp128(zr)) {
		return mu0_fp128_inf;
	}
	if (mu8_isinf_fp128(zi)) {
		return mu0_fp128_inf;
	}
	return mu8_sqrt_fp128(mu8_znorm_fp128(zr, zi));
}

mu0_fp64_t  mu8_zmod_fp64  (const mu0_fp64_t  zr, const mu0_fp64_t  zi)
{
	if (mu8_isinf_fp64(zr)) {
		return mu0_fp64_inf;
	}
	if (mu8_isinf_fp64(zi)) {
		return mu0_fp64_inf;
	}
	return mu8_sqrt_fp64(mu8_znorm_fp64(zr, zi));
}

mu0_fp32_t  mu8_zmod_fp32  (const mu0_fp32_t  zr, const mu0_fp32_t  zi)
{
	if (mu8_isinf_fp32(zr)) {
		return mu0_fp32_inf;
	}
	if (mu8_isinf_fp32(zi)) {
		return mu0_fp32_inf;
	}
	return mu8_sqrt_fp32(mu8_znorm_fp32(zr, zi));
}

mu0_fp16_t  mu8_zmod_fp16  (const mu0_fp16_t  zr, const mu0_fp16_t  zi)
{
	if (mu8_isinf_fp16(zr)) {
		return mu0_fp16_inf;
	}
	if (mu8_isinf_fp16(zi)) {
		return mu0_fp16_inf;
	}
	return mu8_sqrt_fp16(mu8_znorm_fp16(zr, zi));
}

/* EOF */