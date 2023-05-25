
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

// mu8_zproj.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zproj_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	*zr = ar;
	*zi = ai;
	if (mu8_isinf_fp128(*zr) || mu8_isinf_fp128(*zi)) {
		*zr = mu0_fp128_inf;
		*zi = mu8_copysign_fp128(mu0_fp128_zero, *zi);
	}
}

void mu8_zproj_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	*zr = ar;
	*zi = ai;
	if (mu8_isinf_fp64(*zr) || mu8_isinf_fp64(*zi)) {
		*zr = mu0_fp64_inf;
		*zi = mu8_copysign_fp64(mu0_fp64_zero, *zi);
	}
}

void mu8_zproj_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	*zr = ar;
	*zi = ai;
	if (mu8_isinf_fp32(*zr) || mu8_isinf_fp32(*zi)) {
		*zr = mu0_fp32_inf;
		*zi = mu8_copysign_fp32(mu0_fp32_zero, *zi);
	}
}

void mu8_zproj_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	*zr = ar;
	*zi = ai;
	if (mu8_isinf_fp16(*zr) || mu8_isinf_fp16(*zi)) {
		*zr = mu0_fp16_inf;
		*zi = mu8_copysign_fp16(mu0_fp16_zero, *zi);
	}
}

/* EOF */