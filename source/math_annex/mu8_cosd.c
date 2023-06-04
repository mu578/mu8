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

// mu8_cosd.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>
#include <mu8/mu8_math_constant.h>

mu0_fp128_t mu8_cosd_fp128 (const mu0_fp128_t x)
{
	mu0_fp128_t   r = mu0_fp128_zero;
	mu0_sint128_t i = mu8_rempio2d_fp128(x, &r, mu0_nullptr, mu0_nullptr);
	r               = mu8_math_pio180_fp128 * r;
	switch (i)
	{
		case 0:
		{
			r = mu8_cos_fp128(r);
		}
		break;
		case 1:
		{
			r = mu0_fp128_zero - mu8_sin_fp128(r);
		}
		break;
		case 2:
		{
			r = mu0_fp128_zero - mu8_cos_fp128(r);
		}
		break;
		default:
		{
			r = mu8_sin_fp128(r);
		}
		break;
	}
	return r;
}

mu0_fp64_t  mu8_cosd_fp64  (const mu0_fp64_t  x)
{
	mu0_fp64_t    r = mu0_fp64_zero;
	mu0_sint64_t  i = mu8_rempio2d_fp64(x, &r, mu0_nullptr, mu0_nullptr);
	r               = mu8_math_pio180_fp64 * r;
	switch (i)
	{
		case 0:
		{
			r = mu8_cos_fp64(r);
		}
		break;
		case 1:
		{
			r = mu0_fp64_zero - mu8_sin_fp64(r);
		}
		break;
		case 2:
		{
			r = mu0_fp64_zero - mu8_cos_fp64(r);
		}
		break;
		default:
		{
			r = mu8_sin_fp64(r);
		}
		break;
	}
	return r;
}

mu0_fp32_t  mu8_cosd_fp32  (const mu0_fp32_t  x)
{
	mu0_fp32_t    r = mu0_fp32_zero;
	mu0_sint32_t  i = mu8_rempio2d_fp32(x, &r, mu0_nullptr, mu0_nullptr);
	r               = mu8_math_pio180_fp32 * r;
	switch (i)
	{
		case 0:
		{
			r = mu8_cos_fp32(r);
		}
		break;
		case 1:
		{
			r = mu0_fp32_zero - mu8_sin_fp32(r);
		}
		break;
		case 2:
		{
			r = mu0_fp32_zero - mu8_cos_fp32(r);
		}
		break;
		default:
		{
			r = mu8_sin_fp32(r);
		}
		break;
	}
	return r;
}

mu0_fp16_t  mu8_cosd_fp16  (const mu0_fp16_t  x)
{
	mu0_fp16_t    r = mu0_fp16_zero;
	mu0_sint16_t  i = mu8_rempio2d_fp16(x, &r, mu0_nullptr, mu0_nullptr);
	r               = mu8_math_pio180_fp16 * r;
	switch (i)
	{
		case 0:
		{
			r = mu8_cos_fp16(r);
		}
		break;
		case 1:
		{
			r = mu0_fp16_zero - mu8_sin_fp16(r);
		}
		break;
		case 2:
		{
			r = mu0_fp16_zero - mu8_cos_fp16(r);
		}
		break;
		default:
		{
			r = mu8_sin_fp16(r);
		}
		break;
	}
	return r;
}

/* EOF */