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

// mu8_zarg.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_zarg_fp128 (const mu0_fp128_t zr, const mu0_fp128_t zi)
{
	return mu8_atan2_fp128 (zi, zr);
}

mu0_fp64_t  mu8_zarg_fp64  (const mu0_fp64_t  zr, const mu0_fp64_t  zi)
{
	return mu8_atan2_fp64  (zi, zr);
}

mu0_fp32_t  mu8_zarg_fp32  (const mu0_fp32_t  zr, const mu0_fp32_t  zi)
{
	return mu8_atan2_fp32  (zi, zr);
}

mu0_fp16_t  mu8_zarg_fp16  (const mu0_fp16_t  zr, const mu0_fp16_t  zi)
{
	return mu8_atan2_fp16  (zi, zr);
}

/* EOF */