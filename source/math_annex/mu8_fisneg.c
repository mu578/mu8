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

// mu8_fisneg.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_bool_t mu8_fisneg_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_FASTMATH
	return x < mu0_fp128_zero ? mu0_true : mu0_false;
#	else
	return (x == mu0_fp128_zero
		? (mu8_copysign_fp128(mu0_fp128_one, x) < mu0_fp128_zero ? mu0_true : mu0_false)
		: (x < mu0_fp128_zero ? mu0_true : mu0_false)
	);
#	endif
}

mu0_bool_t mu8_fisneg_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_FASTMATH
	return x < mu0_fp64_zero ? mu0_true : mu0_false;
#	else
	return (x == mu0_fp64_zero
		? (mu8_copysign_fp64(mu0_fp64_one, x) < mu0_fp64_zero ? mu0_true : mu0_false)
		: (x < mu0_fp64_zero ? mu0_true : mu0_false)
	);
#	endif
}

mu0_bool_t mu8_fisneg_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_FASTMATH
	return x < mu0_fp32_zero ? mu0_true : mu0_false;
#	else
	return (x == mu0_fp32_zero
		? (mu8_copysign_fp32(mu0_fp32_one, x) < mu0_fp32_zero ? mu0_true : mu0_false)
		: (x < mu0_fp32_zero ? mu0_true : mu0_false)
	);
#	endif
}

mu0_bool_t mu8_fisneg_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_FASTMATH
	return x < mu0_fp16_zero ? mu0_true : mu0_false;
#	else
	return (x == mu0_fp16_zero
		? (mu8_copysign_fp16(mu0_fp16_one, x) < mu0_fp16_zero ? mu0_true : mu0_false)
		: (x < mu0_fp16_zero ? mu0_true : mu0_false)
	);
#	endif
}

/* EOF */