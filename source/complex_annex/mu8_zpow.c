
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

void mu8_zpow_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t xr, const mu0_fp128_t xi, const mu0_fp128_t yr, const mu0_fp128_t yi)
{
	if (yr == mu0_fp128_zero && yi == mu0_fp128_zero) {
		*cr = mu0_fp128_one;
		*ci = mu0_fp128_zero;
	} else if (yr == mu0_fp128_one && yi == mu0_fp128_zero) {
		*cr = xr;
		*ci = xi;
	} else {
		mu8_zlog_fp128(cr, ci,  xr,  xi);
		mu8_zmul_fp128(cr, ci,  yr,  yi, *cr, *ci);
		mu8_zexp_fp128(cr, ci, *cr, *ci);
	}
}

void mu8_zpow_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  xr, const mu0_fp64_t  xi, const mu0_fp64_t  yr, const mu0_fp64_t  yi)
{
	if (yr == mu0_fp64_zero && yi == mu0_fp64_zero) {
		*cr = mu0_fp64_one;
		*ci = mu0_fp64_zero;
	} else if (yr == mu0_fp64_one && yi == mu0_fp64_zero) {
		*cr = xr;
		*ci = xi;
	} else {
		mu8_zlog_fp64(cr, ci,  xr,  xi);
		mu8_zmul_fp64(cr, ci,  yr,  yi, *cr, *ci);
		mu8_zexp_fp64(cr, ci, *cr, *ci);
	}
}

void mu8_zpow_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  xr, const mu0_fp32_t  xi, const mu0_fp32_t  yr, const mu0_fp32_t  yi)
{
	if (yr == mu0_fp32_zero && yi == mu0_fp32_zero) {
		*cr = mu0_fp32_one;
		*ci = mu0_fp32_zero;
	} else if (yr == mu0_fp32_one && yi == mu0_fp32_zero) {
		*cr = xr;
		*ci = xi;
	} else {
		mu8_zlog_fp32(cr, ci,  xr,  xi);
		mu8_zmul_fp32(cr, ci,  yr,  yi, *cr, *ci);
		mu8_zexp_fp32(cr, ci, *cr, *ci);
	}
}

void mu8_zpow_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  xr, const mu0_fp16_t  xi, const mu0_fp16_t  yr, const mu0_fp16_t  yi)
{
	if (yr == mu0_fp16_zero && yi == mu0_fp16_zero) {
		*cr = mu0_fp16_one;
		*ci = mu0_fp16_zero;
	} else if (yr == mu0_fp16_one && yi == mu0_fp16_zero) {
		*cr = xr;
		*ci = xi;
	} else {
		mu8_zlog_fp16(cr, ci,  xr,  xi);
		mu8_zmul_fp16(cr, ci,  yr,  yi, *cr, *ci);
		mu8_zexp_fp16(cr, ci, *cr, *ci);
	}
}

/* EOF */