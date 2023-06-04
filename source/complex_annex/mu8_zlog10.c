
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

// mu8_zlog10.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math.h>
#include <mu8/mu8_math_annex.h>

void mu8_zlog10_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	mu0_fp128_t br, bi;
	mu8_zlog_fp128 ( zr,  zi,  ar,  ai);
	mu8_zlog_fp128 (&br, &bi, mu0_fp128_ten, mu0_fp128_zero);
	mu8_zdiv_fp128 ( zr,  zi, *zr, *zi, br, bi);
}

void mu8_zlog10_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	mu0_fp64_t  br, bi;
	mu8_zlog_fp64  ( zr,  zi,  ar,  ai);
	mu8_zlog_fp64  (&br, &bi,  mu0_fp64_ten, mu0_fp64_zero );
	mu8_zdiv_fp64  ( zr,  zi, *zr, *zi, br, bi);
}

void mu8_zlog10_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	mu0_fp32_t  br, bi;
	mu8_zlog_fp32  ( zr,  zi,  ar,  ai);
	mu8_zlog_fp32  (&br, &bi,  mu0_fp32_ten, mu0_fp32_zero );
	mu8_zdiv_fp32  ( zr,  zi, *zr, *zi, br, bi);
}

void mu8_zlog10_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	mu0_fp16_t  br, bi;
	mu8_zlog_fp16  ( zr,  zi,  ar,  ai);
	mu8_zlog_fp16  (&br, &bi,  mu0_fp16_ten, mu0_fp16_zero );
	mu8_zdiv_fp16  ( zr,  zi, *zr, *zi, br, bi);
}

/* EOF */