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

// mu8_zdiv.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zdiv_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi)
{
	mu8_zconj_fp128 (zr, zi,  br,  bi);
	mu8_zmul_fp128  (zr, zi,  ar,  ai, *zr, *zi);
	mu8_zmul1_fp128 (zr, zi, *zr, *zi,  mu0_fp128_one / mu8_raise2_fp128 (mu8_zmod_fp128 (br, bi)));
}

void mu8_zdiv_fpex  (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi)
{
	mu8_zconj_fpex  (zr, zi,  br,  bi);
	mu8_zmul_fpex   (zr, zi,  ar,  ai, *zr, *zi);
	mu8_zmul1_fpex  (zr, zi, *zr, *zi,  mu0_fp64_one  / mu8_raise2_fp64  (mu8_zmod_fp64  (br, bi)));
}

void mu8_zdiv_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi)
{
	mu8_zconj_fp64  (zr, zi,  br,  bi);
	mu8_zmul_fp64   (zr, zi,  ar,  ai, *zr, *zi);
	mu8_zmul1_fp64  (zr, zi, *zr, *zi,  mu0_fp64_one  / mu8_raise2_fp64  (mu8_zmod_fp64  (br, bi)));
}

void mu8_zdiv_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi)
{
	mu8_zconj_fp32  (zr, zi,  br,  bi);
	mu8_zmul_fp32   (zr, zi,  ar,  ai, *zr, *zi);
	mu8_zmul1_fp32  (zr, zi, *zr, *zi,  mu0_fp32_one  / mu8_raise2_fp32  (mu8_zmod_fp32  (br, bi)));
}

void mu8_zdiv_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi)
{
	mu8_zconj_fp16  (zr, zi,  br,  bi);
	mu8_zmul_fp16   (zr, zi,  ar,  ai, *zr, *zi);
	mu8_zmul1_fp16  (zr, zi, *zr, *zi,  mu0_fp16_one  / mu8_raise2_fp16  (mu8_zmod_fp16  (br, bi)));
}

/* EOF */