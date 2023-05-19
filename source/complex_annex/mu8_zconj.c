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

// mu8_zconj.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

void mu8_zconj_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	*cr =  ar;
	*ci = -ai;
}

void mu8_zconj_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	*cr =  ar;
	*ci = -ai;
}

void mu8_zconj_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	*cr =  ar;
	*ci = -ai;
}

void mu8_zconj_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	*cr =  ar;
	*ci = -ai;
}

/* EOF */