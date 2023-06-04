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

// mu8_log1m.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_log1m_fp128 (const mu0_fp128_t x)
{
	return mu8_log1p_fp128 (-x);
}

mu0_fp64_t  mu8_log1m_fp64  (const mu0_fp64_t  x)
{
	return mu8_log1p_fp64  (-x);
}

mu0_fp32_t  mu8_log1m_fp32  (const mu0_fp32_t  x)
{
	return mu8_log1p_fp32  (-x);
}

mu0_fp16_t  mu8_log1m_fp16  (const mu0_fp16_t  x)
{
	return mu8_log1p_fp16  (-x);
}

/* EOF */