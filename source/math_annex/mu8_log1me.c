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

// mu8_log1me.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>
#include <mu8/mu8_math_constant.h>

mu0_fp128_t mu8_log1me_fp128 (const mu0_fp128_t x)
{
	return (mu8_fabs_fp128 (x) > mu8_math_ln2_fp128
		? mu8_log1p_fp128 (-mu8_exp_fp128  (-x))
		: mu8_log_fp128   (-mu8_expm1_fp128(-x))
	);
}

mu0_fp64_t  mu8_log1me_fp64  (const mu0_fp64_t  x)
{
	return (mu8_fabs_fp64  (x) > mu8_math_ln2_fp64
		? mu8_log1p_fp64  (-mu8_exp_fp64   (-x))
		: mu8_log_fp64    (-mu8_expm1_fp64 (-x))
	);
}

mu0_fp32_t  mu8_log1me_fp32  (const mu0_fp32_t  x)
{
	return (mu8_fabs_fp32  (x) > mu8_math_ln2_fp32
		? mu8_log1p_fp32  (-mu8_exp_fp32   (-x))
		: mu8_log_fp32    (-mu8_expm1_fp32 (-x))
	);
}

mu0_fp16_t  mu8_log1me_fp16  (const mu0_fp16_t  x)
{
	return (mu8_fabs_fp16  (x) > mu8_math_ln2_fp16
		? mu8_log1p_fp16  (-mu8_exp_fp16   (-x))
		: mu8_log_fp16    (-mu8_expm1_fp16 (-x))
	);
}

/* EOF */