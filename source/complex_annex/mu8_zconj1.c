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

// mu8_zconj1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

void mu8_zconj1_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t a)
{
	*zr =  a;
	*zi = -mu0_fp128_zero;
}

void mu8_zconj1_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  a)
{
	*zr =  a;
	*zi = -mu0_fp64_zero;
}

void mu8_zconj1_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  a)
{
	*zr =  a;
	*zi = -mu0_fp32_zero;
}

void mu8_zconj1_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  a)
{
	*zr =  a;
	*zi = -mu0_fp16_zero;
}

/* EOF */