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

// mu8_iexp2.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_sint128_t mu8_iexp2_fp128 (const mu0_fp128_t e)
{
	return mu8_iexpi2_i128 (mu0_const_sint128(e));
}

mu0_sint64_t  mu8_iexp2_fp64  (const mu0_fp64_t  e)
{
	return mu8_iexpi2_i64  (mu0_const_sint64(e));
}

mu0_sint32_t  mu8_iexp2_fp32  (const mu0_fp32_t  e)
{
	return mu8_iexpi2_i32  (mu0_const_sint32(e));
}

mu0_sint16_t  mu8_iexp2_fp16  (const mu0_fp16_t  e)
{
	return mu8_iexpi2_i16  (mu0_const_sint16(e));
}

/* EOF */