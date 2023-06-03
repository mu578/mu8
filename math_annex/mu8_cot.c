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

// mu8_cot.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_cot_fp128 (const mu0_fp128_t x)
{
	return (mu8_isfinite_fp128(x) && x != mu0_fp128_zero
		? mu0_fp128_one / mu8_tan_fp128(x)
		: mu0_fp128_inf
	);
}

mu0_fp64_t  mu8_cot_fp64  (const mu0_fp64_t  x)
{
	return (mu8_isfinite_fp64(x) && x != mu0_fp64_zero
		? mu0_fp64_one / mu8_tan_fp64(x)
		: mu0_fp64_inf
	);
}

mu0_fp32_t  mu8_cot_fp32  (const mu0_fp32_t  x)
{
	return (mu8_isfinite_fp32(x) && x != mu0_fp32_zero
		? mu0_fp32_one / mu8_tan_fp32(x)
		: mu0_fp32_inf
	);
}

mu0_fp16_t  mu8_cot_fp16  (const mu0_fp16_t  x)
{
	return (mu8_isfinite_fp16(x) && x != mu0_fp16_zero
		? mu0_fp16_one / mu8_tan_fp16(x)
		: mu0_fp16_inf
	);
}

/* EOF */