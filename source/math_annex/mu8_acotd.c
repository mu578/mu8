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

// mu8_acotd.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>
#include <mu8/mu8_math_constant.h>

mu0_fp128_t mu8_acotd_fp128 (const mu0_fp128_t x)
{
	return mu8_acot_fp128(x) / mu8_math_pio180_fp128;
}

mu0_fp64_t  mu8_acotd_fp64  (const mu0_fp64_t  x)
{
	return mu8_acot_fp64(x) / mu8_math_pio180_fp64;
}

mu0_fp32_t  mu8_acotd_fp32  (const mu0_fp32_t  x)
{
	return mu8_acot_fp32(x) / mu8_math_pio180_fp32;
}

mu0_fp16_t  mu8_acotd_fp16  (const mu0_fp16_t  x)
{
	return mu8_acot_fp16(x) / mu8_math_pio180_fp16;
}

/* EOF */