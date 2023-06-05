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

// mu8_2sum.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>
#include <mu8/mu8_math_constant.h>

mu0_fp128_t mu8_2sum_fp128 (const mu0_fp128_t a, const mu0_fp128_t b, mu0_fp128_t * x, mu0_fp128_t * y)
{
	*x                  =  a + b;
	const mu0_fp128_t z = *x - a;
	*y                  =  a - (*x - z) + (b - z);
	return z;
}

mu0_fp64_t  mu8_2sum_fp64  (const mu0_fp64_t  a, const mu0_fp64_t  b, mu0_fp64_t *  x, mu0_fp64_t  * y)
{
	*x                  =  a + b;
	const mu0_fp64_t  z = *x - a;
	*y                  =  a - (*x - z) + (b - z);
	return z;
}

mu0_fp32_t  mu8_2sum_fp32  (const mu0_fp32_t  a, const mu0_fp32_t  b, mu0_fp32_t *  x, mu0_fp32_t  * y)
{
	*x                  =  a + b;
	const mu0_fp32_t  z = *x - a;
	*y                  =  a - (*x - z) + (b - z);
	return z;
}

mu0_fp16_t  mu8_2sum_fp16  (const mu0_fp16_t  a, const mu0_fp16_t  b, mu0_fp16_t *  x, mu0_fp16_t  * y)
{
	*x                  =  a + b;
	const mu0_fp16_t  z = *x - a;
	*y                  =  a - (*x - z) + (b - z);
	return z;
}

/* EOF */