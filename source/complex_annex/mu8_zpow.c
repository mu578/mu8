
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

// mu8_zpow.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zpow_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t xr, const mu0_fp128_t xi, const mu0_fp128_t yr, const mu0_fp128_t yi)
{
	if (yr == mu0_fp128_zero && yi == mu0_fp128_zero) {
		*zr = mu0_fp128_one;
		*zi = mu0_fp128_zero;
	} else if (yr == mu0_fp128_one && yi == mu0_fp128_zero) {
		*zr = xr;
		*zi = xi;
	} else {
		mu8_zlog_fp128(zr, zi,  xr,  xi);
		mu8_zmul_fp128(zr, zi,  yr,  yi, *zr, *zi);
		mu8_zexp_fp128(zr, zi, *zr, *zi);
	}
}

void mu8_zpow_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  xr, const mu0_fp64_t  xi, const mu0_fp64_t  yr, const mu0_fp64_t  yi)
{
	if (yr == mu0_fp64_zero && yi == mu0_fp64_zero) {
		*zr = mu0_fp64_one;
		*zi = mu0_fp64_zero;
	} else if (yr == mu0_fp64_one && yi == mu0_fp64_zero) {
		*zr = xr;
		*zi = xi;
	} else {
		mu8_zlog_fp64(zr, zi,  xr,  xi);
		mu8_zmul_fp64(zr, zi,  yr,  yi, *zr, *zi);
		mu8_zexp_fp64(zr, zi, *zr, *zi);
	}
}

void mu8_zpow_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  xr, const mu0_fp32_t  xi, const mu0_fp32_t  yr, const mu0_fp32_t  yi)
{
	if (yr == mu0_fp32_zero && yi == mu0_fp32_zero) {
		*zr = mu0_fp32_one;
		*zi = mu0_fp32_zero;
	} else if (yr == mu0_fp32_one && yi == mu0_fp32_zero) {
		*zr = xr;
		*zi = xi;
	} else {
		mu8_zlog_fp32(zr, zi,  xr,  xi);
		mu8_zmul_fp32(zr, zi,  yr,  yi, *zr, *zi);
		mu8_zexp_fp32(zr, zi, *zr, *zi);
	}
}

void mu8_zpow_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  xr, const mu0_fp16_t  xi, const mu0_fp16_t  yr, const mu0_fp16_t  yi)
{
	if (yr == mu0_fp16_zero && yi == mu0_fp16_zero) {
		*zr = mu0_fp16_one;
		*zi = mu0_fp16_zero;
	} else if (yr == mu0_fp16_one && yi == mu0_fp16_zero) {
		*zr = xr;
		*zi = xi;
	} else {
		mu8_zlog_fp16(zr, zi,  xr,  xi);
		mu8_zmul_fp16(zr, zi,  yr,  yi, *zr, *zi);
		mu8_zexp_fp16(zr, zi, *zr, *zi);
	}
}

/* EOF */