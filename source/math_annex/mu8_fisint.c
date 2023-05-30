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

// mu8_fisint.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_bool_t mu8_fisint_fp128 (const mu0_fp128_t x)
{
	if (x == mu8_trunc_fp128(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp128_zero ? !mu8_fisneg_fp128(x) : mu0_true;
#	endif
	}
	if (mu0_fp128_zero == mu8_ffrac_fp128(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp128_zero ? !mu8_fisneg_fp128(x) : mu0_true;
#	endif
	}
	return mu0_false;
}

mu0_bool_t mu8_fisint_fp64  (const mu0_fp64_t  x)
{
	if (x == mu8_trunc_fp64(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp64_zero ? !mu8_fisneg_fp64(x) : mu0_true;
#	endif
	}
	if (mu0_fp64_zero == mu8_ffrac_fp64(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp64_zero ? !mu8_fisneg_fp64(x) : mu0_true;
#	endif
	}
	return mu0_false;
}

mu0_bool_t mu8_fisint_fp32  (const mu0_fp32_t  x)
{
	if (x == mu8_trunc_fp32(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp32_zero ? !mu8_fisneg_fp32(x) : mu0_true;
#	endif
	}
	if (mu0_fp32_zero == mu8_ffrac_fp32(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp32_zero ? !mu8_fisneg_fp32(x) : mu0_true;
#	endif
	}
	return mu0_false;
}

mu0_bool_t mu8_fisint_fp16  (const mu0_fp16_t  x)
{
	if (x == mu8_trunc_fp16(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp16_zero ? !mu8_fisneg_fp16(x) : mu0_true;
#	endif
	}
	if (mu0_fp16_zero == mu8_ffrac_fp16(x)) {
#	if MU0_HAVE_FASTMATH
		return mu0_true;
#	else
		return x == mu0_fp16_zero ? !mu8_fisneg_fp16(x) : mu0_true;
#	endif
	}
	return mu0_false;
}

/* EOF */