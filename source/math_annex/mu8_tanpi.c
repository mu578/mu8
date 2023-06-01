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

// mu8_tanpi.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_tanpi_fp128 (const mu0_fp128_t x)
{
	mu0_fp128_t s = mu0_fp128_zero;
	mu0_fp128_t c = mu0_fp128_zero;
	mu8_sincospi_fp128 (x, &s, &c);
	return c == mu0_fp128_zero ? mu0_fp128_inf : s / c;
}

mu0_fp64_t  mu8_tanpi_fp64  (const mu0_fp64_t  x)
{
	mu0_fp64_t  s = mu0_fp64_zero;
	mu0_fp64_t  c = mu0_fp64_zero;
	mu8_sincospi_fp64  (x, &s, &c);
	return c == mu0_fp64_zero ? mu0_fp64_inf : s / c;
}

mu0_fp32_t  mu8_tanpi_fp32  (const mu0_fp32_t  x)
{
	mu0_fp32_t  s = mu0_fp32_zero;
	mu0_fp32_t  c = mu0_fp32_zero;
	mu8_sincospi_fp32  (x, &s, &c);
	return c == mu0_fp32_zero ? mu0_fp32_inf : s / c;
}

mu0_fp16_t  mu8_tanpi_fp16  (const mu0_fp16_t  x)
{
	mu0_fp16_t  s = mu0_fp16_zero;
	mu0_fp16_t  c = mu0_fp16_zero;
	mu8_sincospi_fp16  (x, &s, &c);
	return c == mu0_fp16_zero ? mu0_fp16_inf : s / c;
}

/* EOF */