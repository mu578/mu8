
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

// mu8_zxlogy.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zxlogy_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t xr, const mu0_fp128_t xi, const mu0_fp128_t yr, const mu0_fp128_t yi)
{
	if (xr == mu0_fp128_zero && xi == mu0_fp128_zero) {
		*zr = mu0_fp128_zero;
		*zi = mu0_fp128_zero;
	} else if (yr == mu0_fp128_zero && yi == mu0_fp128_zero) {
		*zr = mu0_fp128_nan;
		*zi = xi;
	} else {
		mu8_zlog_fp128(zr, zi,  yr,  yi);
		mu8_zmul_fp128(zr, zi,  xr,  xi, *zr, *zi);
	}
}

void mu8_zxlogy_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  xr, const mu0_fp64_t  xi, const mu0_fp64_t  yr, const mu0_fp64_t  yi)
{
	if (xr == mu0_fp64_zero && xi == mu0_fp64_zero) {
		*zr = mu0_fp64_zero;
		*zi = mu0_fp64_zero;
	} else if (yr == mu0_fp64_zero && yi == mu0_fp64_zero) {
		*zr = mu0_fp64_nan;
		*zi = xi;
	} else {
		mu8_zlog_fp64(zr, zi,  yr,  yi);
		mu8_zmul_fp64(zr, zi,  xr,  xi, *zr, *zi);
	}
}

void mu8_zxlogy_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  xr, const mu0_fp32_t  xi, const mu0_fp32_t  yr, const mu0_fp32_t  yi)
{
	if (xr == mu0_fp32_zero && xi == mu0_fp32_zero) {
		*zr = mu0_fp32_zero;
		*zi = mu0_fp32_zero;
	} else if (yr == mu0_fp32_zero && yi == mu0_fp32_zero) {
		*zr = mu0_fp32_nan;
		*zi = xi;
	} else {
		mu8_zlog_fp32(zr, zi,  yr,  yi);
		mu8_zmul_fp32(zr, zi,  xr,  xi, *zr, *zi);
	}
}

void mu8_zxlogy_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  xr, const mu0_fp16_t  xi, const mu0_fp16_t  yr, const mu0_fp16_t  yi)
{
	if (xr == mu0_fp16_zero && xi == mu0_fp16_zero) {
		*zr = mu0_fp16_zero;
		*zi = mu0_fp16_zero;
	} else if (yr == mu0_fp16_zero && yi == mu0_fp16_zero) {
		*zr = mu0_fp16_nan;
		*zi = xi;
	} else {
		mu8_zlog_fp16(zr, zi,  yr,  yi);
		mu8_zmul_fp16(zr, zi,  xr,  xi, *zr, *zi);
	}
}

/* EOF */