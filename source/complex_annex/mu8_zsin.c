
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

// mu8_zsin.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zsin_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_sin_fp128(ar) * mu8_cosh_fp128(ai);
	*zi = mu8_cos_fp128(ar) * mu8_sinh_fp128(ai);
#	else
	mu0_fp128_t w;
	mu8_zsinh_fp128(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
#	endif
}

void mu8_zsin_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_sin_fp64(ar) * mu8_cosh_fp64(ai);
	*zi = mu8_cos_fp64(ar) * mu8_sinh_fp64(ai);
#	else
	mu0_fp64_t  w;
	mu8_zsinh_fp64(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
#	endif
}

void mu8_zsin_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_sin_fp32(ar) * mu8_cosh_fp32(ai);
	*zi = mu8_cos_fp32(ar) * mu8_sinh_fp32(ai);
#	else
	mu0_fp32_t  w;
	mu8_zsinh_fp32(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
#	endif
}

void mu8_zsin_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
#	if MU0_HAVE_FASTMATH
	*zr = mu8_sin_fp16(ar) * mu8_cosh_fp16(ai);
	*zi = mu8_cos_fp16(ar) * mu8_sinh_fp16(ai);
#	else
	mu0_fp16_t  w;
	mu8_zsinh_fp16(zr, zi, -ai, ar);
	 w  = *zr;
	*zr = *zi;
	*zi = -w;
#	endif
}

/* EOF */