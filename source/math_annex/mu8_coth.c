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

// mu8_coth.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_coth_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp128_t x0 = mu8_exp_fp128(-x);
	const mu0_fp128_t x1 = mu8_exp_fp128(+x);
	return (x1 + x0) / (x1 - x0);
#	else
	return (mu8_isfinite_fp128(x) && x != mu0_fp128_zero
		? mu0_fp128_one / mu8_tanh_fp128(x)
		: mu0_fp128_inf
	);
#	endif
}

mu0_fp64_t  mu8_coth_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp64_t  x0 = mu8_exp_fp64(-x);
	const mu0_fp64_t  x1 = mu8_exp_fp64(+x);
	return (x1 + x0) / (x1 - x0);
#	else
	return (mu8_isfinite_fp64(x) && x != mu0_fp64_zero
		? mu0_fp64_one / mu8_tanh_fp64(x)
		: mu0_fp64_inf
	);
#	endif
}

mu0_fp32_t  mu8_coth_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp32_t  x0 = mu8_exp_fp32(-x);
	const mu0_fp32_t  x1 = mu8_exp_fp32(+x);
	return (x1 + x0) / (x1 - x0);
#	else
	return (mu8_isfinite_fp32(x) && x != mu0_fp32_zero
		? mu0_fp32_one / mu8_tanh_fp32(x)
		: mu0_fp32_inf
	);
#	endif
}

mu0_fp16_t  mu8_coth_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp16_t  x0 = mu8_exp_fp16(-x);
	const mu0_fp16_t  x1 = mu8_exp_fp16(+x);
	return (x1 + x0) / (x1 - x0);
#	else
	return (mu8_isfinite_fp16(x) && x != mu0_fp16_zero
		? mu0_fp16_one / mu8_tanh_fp16(x)
		: mu0_fp16_inf
	);
#	endif
}

/* EOF */