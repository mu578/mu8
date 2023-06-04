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

// mu8_tand.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>
#include <mu8/mu8_math_constant.h>

mu0_fp128_t mu8_tand_fp128 (const mu0_fp128_t x)
{
	mu0_fp128_t   r = mu0_fp128_zero;
	mu0_fp128_t   y = mu0_fp128_zero;
	mu0_fp128_t   z = mu0_fp128_zero;
	mu0_bool_t    a = mu0_false;
	mu0_sint128_t i = mu8_rempio2d_fp128(x, &y, &z, &a);
	mu0_sint64_t  n;
	if (a == mu0_true) {
		y = mu8_signbit_fp128 (x);
		z = mu8_fabs_fp128    (z);
		n = mu8_iround_fp128(__mu0_fp128_const__(4.0) * mu8_ffrac_fp128(__mu0_fp128_const__(0.25) * z));
		switch (n)
		{
			case 0:
			{
				r =  mu0_fp128_zero;
			}
			break;
			case 1:
			{
				r =  y;
			}
			break;
			case 2:
			{
				r =  mu0_fp128_inf;
			}
			break;
			default:
			{
				r = -y;
			}
			break;
		}
	} else if ((i % 2) != 0) {
		r = mu0_fp128_zero - mu8_cot_fp128(y * mu8_math_pio180_fp128);
	} else {
		r = mu8_tan_fp128(y * mu8_math_pio180_fp128);
	}
	return r;
}

mu0_fp64_t  mu8_tand_fp64  (const mu0_fp64_t  x)
{
	mu0_fp64_t    r = mu0_fp64_zero;
	mu0_fp64_t    y = mu0_fp64_zero;
	mu0_fp64_t    z = mu0_fp64_zero;
	mu0_bool_t    a = mu0_false;
	mu0_sint64_t  i = mu8_rempio2d_fp64(x, &y, &z, &a);
	mu0_sint64_t  n;
	if (a == mu0_true) {
		y = mu8_signbit_fp64 (x);
		z = mu8_fabs_fp64    (z);
		n = mu8_iround_fp64(__mu0_fp64_const__(4.0) * mu8_ffrac_fp64(__mu0_fp64_const__(0.25) * z));
		switch (n)
		{
			case 0:
			{
				r =  mu0_fp64_zero;
			}
			break;
			case 1:
			{
				r =  y;
			}
			break;
			case 2:
			{
				r =  mu0_fp64_inf;
			}
			break;
			default:
			{
				r = -y;
			}
			break;
		}
	} else if ((i % 2) != 0) {
		r = mu0_fp64_zero - mu8_cot_fp64(y * mu8_math_pio180_fp64);
	} else {
		r = mu8_tan_fp64(y * mu8_math_pio180_fp64);
	}
	return r;
}

mu0_fp32_t  mu8_tand_fp32  (const mu0_fp32_t  x)
{
	mu0_fp32_t    r = mu0_fp32_zero;
	mu0_fp32_t    y = mu0_fp32_zero;
	mu0_fp32_t    z = mu0_fp32_zero;
	mu0_bool_t    a = mu0_false;
	mu0_sint64_t  i = mu8_rempio2d_fp32(x, &y, &z, &a);
	mu0_sint64_t  n;
	if (a == mu0_true) {
		y = mu8_signbit_fp32 (x);
		z = mu8_fabs_fp32    (z);
		n = mu8_iround_fp32(__mu0_fp32_const__(4.0) * mu8_ffrac_fp32(__mu0_fp32_const__(0.25) * z));
		switch (n)
		{
			case 0:
			{
				r =  mu0_fp32_zero;
			}
			break;
			case 1:
			{
				r =  y;
			}
			break;
			case 2:
			{
				r =  mu0_fp32_inf;
			}
			break;
			default:
			{
				r = -y;
			}
			break;
		}
	} else if ((i % 2) != 0) {
		r = mu0_fp32_zero - mu8_cot_fp32(y * mu8_math_pio180_fp32);
	} else {
		r = mu8_tan_fp32(y * mu8_math_pio180_fp32);
	}
	return r;
}

mu0_fp16_t  mu8_tand_fp16  (const mu0_fp16_t  x)
{
	mu0_fp16_t    r = mu0_fp16_zero;
	mu0_fp16_t    y = mu0_fp16_zero;
	mu0_fp16_t    z = mu0_fp16_zero;
	mu0_bool_t    a = mu0_false;
	mu0_sint32_t  i = mu8_rempio2d_fp16(x, &y, &z, &a);
	mu0_sint64_t  n;
	if (a == mu0_true) {
		y = mu8_signbit_fp16 (x);
		z = mu8_fabs_fp16    (z);
		n = mu8_iround_fp16(__mu0_fp16_const__(4.0) * mu8_ffrac_fp16(__mu0_fp16_const__(0.25) * z));
		switch (n)
		{
			case 0:
			{
				r =  mu0_fp16_zero;
			}
			break;
			case 1:
			{
				r =  y;
			}
			break;
			case 2:
			{
				r =  mu0_fp16_inf;
			}
			break;
			default:
			{
				r = -y;
			}
			break;
		}
	} else if ((i % 2) != 0) {
		r = mu0_fp16_zero - mu8_cot_fp16(y * mu8_math_pio180_fp16);
	} else {
		r = mu8_tan_fp16(y * mu8_math_pio180_fp16);
	}
	return r;
}

/* EOF */