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

// mu8_ffrac.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_ffrac_fp128 (const mu0_fp128_t x)
{
	mu0_fp128_t y = mu0_fp128_zero;
	return mu8_modf_fp128 (x, &y);
}

mu0_fp64_t  mu8_ffrac_fp64  (const mu0_fp64_t  x)
{
	mu0_fp64_t  y = mu0_fp64_zero;
	return mu8_modf_fp64  (x, &y);
}

mu0_fp32_t  mu8_ffrac_fp32  (const mu0_fp32_t  x)
{
	mu0_fp32_t  y = mu0_fp32_zero;
	return mu8_modf_fp32  (x, &y);
}

mu0_fp16_t  mu8_ffrac_fp16  (const mu0_fp16_t  x)
{
	mu0_fp16_t  y = mu0_fp16_zero;
	return mu8_modf_fp16  (x, &y);
}

/* EOF */