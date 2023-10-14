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

// mu8_zge.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_bool_t mu8_zge_fp128 (const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi)
{
	mu0_unused(ai);
	mu0_unused(bi);
	return ar >= br ? mu0_true : mu0_false;
}

mu0_bool_t mu8_zge_fpex  (const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi)
{
	mu0_unused(ai);
	mu0_unused(bi);
	return ar >= br ? mu0_true : mu0_false;
}

mu0_bool_t mu8_zge_fp64  (const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi)
{
	mu0_unused(ai);
	mu0_unused(bi);
	return ar >= br ? mu0_true : mu0_false;
}

mu0_bool_t mu8_zge_fp32  (const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi)
{
	mu0_unused(ai);
	mu0_unused(bi);
	return ar >= br ? mu0_true : mu0_false;
}

mu0_bool_t mu8_zge_fp16  (const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi)
{
	mu0_unused(ai);
	mu0_unused(bi);
	return ar >= br ? mu0_true : mu0_false;
}

/* EOF */