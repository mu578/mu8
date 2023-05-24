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

// mu8_znorm.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_znorm_fp128 (const mu0_fp128_t zr, const mu0_fp128_t zi)
{
	if (mu8_isinf_fp128 (zr)) {
		return mu0_fp128_inf;
	}
	if (mu8_isinf_fp128 (zi)) {
		return mu0_fp128_inf;
	}
	return mu8_raise2_fp128 (zi) + mu8_raise2_fp128 (zr);
}

mu0_fp64_t  mu8_znorm_fp64  (const mu0_fp64_t  zr, const mu0_fp64_t  zi)
{
	if (mu8_isinf_fp64  (zr)) {
		return mu0_fp64_inf;
	}
	if (mu8_isinf_fp64  (zi)) {
		return mu0_fp64_inf;
	}
	return mu8_raise2_fp64  (zi) + mu8_raise2_fp64  (zr);
}

mu0_fp32_t  mu8_znorm_fp32  (const mu0_fp32_t  zr, const mu0_fp32_t  zi)
{
	if (mu8_isinf_fp32  (zr)) {
		return mu0_fp32_inf;
	}
	if (mu8_isinf_fp32  (zi)) {
		return mu0_fp32_inf;
	}
	return mu8_raise2_fp32  (zi) + mu8_raise2_fp32  (zr);
}

mu0_fp16_t  mu8_znorm_fp16  (const mu0_fp16_t  zr, const mu0_fp16_t  zi)
{
	if (mu8_isinf_fp16  (zr)) {
		return mu0_fp16_inf;
	}
	if (mu8_isinf_fp16  (zi)) {
		return mu0_fp16_inf;
	}
	return mu8_raise2_fp16  (zi) + mu8_raise2_fp16  (zr);
}

/* EOF */