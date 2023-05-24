
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

// mu8_zlog.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zlog_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	*zr = mu8_log_fp128  (mu8_zabs_fp128(ar, ai));
	*zi = mu8_zarg_fp128 (ar, ai);
}

void mu8_zlog_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	*zr = mu8_log_fp64   (mu8_zabs_fp64(ar, ai));
	*zi = mu8_zarg_fp64  (ar, ai);
}

void mu8_zlog_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	*zr = mu8_log_fp32   (mu8_zabs_fp32(ar, ai));
	*zi = mu8_zarg_fp32  (ar, ai);
}

void mu8_zlog_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	*zr = mu8_log_fp16   (mu8_zabs_fp16(ar, ai));
	*zi = mu8_zarg_fp16  (ar, ai);
}

/* EOF */