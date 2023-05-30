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

// mu8_cospi.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_annex.h>

mu0_fp128_t mu8_cospi_fp128 (const mu0_fp128_t x)
{
	mu0_fp128_t   r = mu0_fp128_zero;
	mu0_sint128_t i = mu8_rempio2_fp128(x, &r) & 3;
	r               = mu8_math_pi_fp128 * r;
	switch (i)
	{
		case 0:
		{
			r =  mu8_cos_fp128(r);
		}
		break;
		case 1:
		{
			r = -mu8_sin_fp128(r);
		}
		break;
		case 2:
		{
			r = -mu8_cos_fp128(r);
		}
		break;
		default:
		{
			r =  mu8_sin_fp128(r);
		}
		break;
	}
	return r;
}

mu0_fp64_t  mu8_cospi_fp64  (const mu0_fp64_t  x)
{
	mu0_fp64_t    r = mu0_fp64_zero;
	mu0_sint64_t  i = mu8_rempio2_fp64(x, &r) & 3;
	r               = mu8_math_pi_fp64 * r;
	switch (i)
	{
		case 0:
		{
			r =  mu8_cos_fp64(r);
		}
		break;
		case 1:
		{
			r = -mu8_sin_fp64(r);
		}
		break;
		case 2:
		{
			r = -mu8_cos_fp64(r);
		}
		break;
		default:
		{
			r =  mu8_sin_fp64(r);
		}
		break;
	}
	return r;
}

mu0_fp32_t  mu8_cospi_fp32  (const mu0_fp32_t  x)
{
	mu0_fp32_t    r = mu0_fp32_zero;
	mu0_sint64_t  i = mu8_rempio2_fp32(x, &r) & 3;
	r               = mu8_math_pi_fp32 * r;
	switch (i)
	{
		case 0:
		{
			r =  mu8_cos_fp32(r);
		}
		break;
		case 1:
		{
			r = -mu8_sin_fp32(r);
		}
		break;
		case 2:
		{
			r = -mu8_cos_fp32(r);
		}
		break;
		default:
		{
			r =  mu8_sin_fp32(r);
		}
		break;
	}
	return r;
}

mu0_fp16_t  mu8_cospi_fp16  (const mu0_fp16_t  x)
{
	mu0_fp16_t    r = mu0_fp16_zero;
	mu0_sint32_t  i = mu8_rempio2_fp16(x, &r) & 3;
	r               = mu8_math_pi_fp16 * r;
	switch (i)
	{
		case 0:
		{
			r =  mu8_cos_fp16(r);
		}
		break;
		case 1:
		{
			r = -mu8_sin_fp16(r);
		}
		break;
		case 2:
		{
			r = -mu8_cos_fp16(r);
		}
		break;
		default:
		{
			r =  mu8_sin_fp16(r);
		}
		break;
	}
	return r;
}

/* EOF */