
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

// mu8_zasin.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_annex.h>

void mu8_zasin_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	mu0_fp128_t w;
	mu8_zasinh_fp128(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
}

void mu8_zasin_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	mu0_fp64_t  w;
	mu8_zasinh_fp64(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
}

void mu8_zasin_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	mu0_fp32_t  w;
	mu8_zasinh_fp32(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
}

void mu8_zasin_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	mu0_fp16_t  w;
	mu8_zasinh_fp16(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
}

/* EOF */