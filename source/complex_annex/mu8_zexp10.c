
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

// mu8_zexp10.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zexp10_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	if (ai == mu0_fp128_zero) {
		*zr = mu8_exp10_fp128(ar);
		*zi = mu0_fp128_zero;
	} else {
		mu8_zpow_fp128(zr, zi, mu0_fp128_ten, mu0_fp128_zero, ar, ai);
	}
}

void mu8_zexp10_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	if (ai == mu0_fp64_zero) {
		*zr = mu8_exp10_fp64 (ar);
		*zi = mu0_fp64_zero;
	} else {
		mu8_zpow_fp64 (zr, zi, mu0_fp64_ten, mu0_fp64_zero, ar, ai);
	}
}

void mu8_zexp10_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	if (ai == mu0_fp32_zero) {
		*zr = mu8_exp10_fp32 (ar);
		*zi = mu0_fp32_zero;
	} else {
		mu8_zpow_fp32 (zr, zi, mu0_fp32_ten, mu0_fp32_zero, ar, ai);
	}
}

void mu8_zexp10_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	if (ai == mu0_fp16_zero) {
		*zr = mu8_exp10_fp16 (ar);
		*zi = mu0_fp16_zero;
	} else {
		mu8_zpow_fp16 (zr, zi, mu0_fp16_ten, mu0_fp16_zero, ar, ai);
	}
}

/* EOF */