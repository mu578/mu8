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

// mu8_sincospi.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_annex.h>

void mu8_sincospi_fp128 (const mu0_fp128_t x, mu0_fp128_t * s, mu0_fp128_t * c)
{
	mu0_fp128_t ss, cc;
	mu0_fp128_t   r = mu0_fp128_zero;
	mu0_sint128_t i = mu8_rempio2_fp128(x, &r);
	mu8_sincos_fp128(r * mu8_math_pi_fp128, &ss, &cc);
	switch (i)
	{
		case 0:
		{
			*s =  ss;
			*c =  cc;
		}
		break;
		case 1:
		{
			*s =  cc;
			*c = -ss;
		}
		break;
		case 2:
		{
			*s = -ss;
			*c = -cc;
		}
		break;
		default:
		{
			*s = -cc;
			*c =  ss;
		}
		break;
	}
}

void mu8_sincospi_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * s, mu0_fp64_t  * c)
{
	mu0_fp64_t  ss, cc;
	mu0_fp64_t    r = mu0_fp64_zero;
	mu0_sint64_t  i = mu8_rempio2_fp64(x, &r);
	mu8_sincos_fp64(r * mu8_math_pi_fp64, &ss, &cc);
	switch (i)
	{
		case 0:
		{
			*s =  ss;
			*c =  cc;
		}
		break;
		case 1:
		{
			*s =  cc;
			*c = -ss;
		}
		break;
		case 2:
		{
			*s = -ss;
			*c = -cc;
		}
		break;
		default:
		{
			*s = -cc;
			*c =  ss;
		}
		break;
	}
}

void mu8_sincospi_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * s, mu0_fp32_t  * c)
{
	mu0_fp32_t  ss, cc;
	mu0_fp32_t    r = mu0_fp32_zero;
	mu0_sint32_t  i = mu8_rempio2_fp32(x, &r);
	mu8_sincos_fp32(r * mu8_math_pi_fp32, &ss, &cc);
	switch (i)
	{
		case 0:
		{
			*s =  ss;
			*c =  cc;
		}
		break;
		case 1:
		{
			*s =  cc;
			*c = -ss;
		}
		break;
		case 2:
		{
			*s = -ss;
			*c = -cc;
		}
		break;
		default:
		{
			*s = -cc;
			*c =  ss;
		}
		break;
	}
}

void mu8_sincospi_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * s, mu0_fp16_t  * c)
{
	mu0_fp16_t  ss, cc;
	mu0_fp16_t    r = mu0_fp16_zero;
	mu0_sint16_t  i = mu8_rempio2_fp16(x, &r);
	mu8_sincos_fp16(r * mu8_math_pi_fp16, &ss, &cc);
	switch (i)
	{
		case 0:
		{
			*s =  ss;
			*c =  cc;
		}
		break;
		case 1:
		{
			*s =  cc;
			*c = -ss;
		}
		break;
		case 2:
		{
			*s = -ss;
			*c = -cc;
		}
		break;
		default:
		{
			*s = -cc;
			*c =  ss;
		}
		break;
	}
}

/* EOF */