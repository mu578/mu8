
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

// mu8_zexpm1.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zexpm1_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	if ((mu8_fabs_fp128(ar) >= mu0_fp128_one) || (mu8_fabs_fp128(ai) >= mu0_fp128_one)) {
		mu8_zexp_fp128 (zr, zi, ar, ai);
		mu8_zsub_fp128 (zr, zi, *zr, *zi, mu0_fp128_one, mu0_fp128_zero);
	} else {
		const mu0_fp128_t d = mu8_expm1_fp128(ar);
		const mu0_fp128_t e = mu0_fp128_one + d;
		*zr                 = d - mu0_fp128_two * e * mu8_raise2_fp128(mu8_sin_fp128(__mu0_fp128_const__(0.5) * ai));
		*zi                 = e * mu8_sin_fp128(ai);
	}
}

void mu8_zexpm1_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	if ((mu8_fabs_fp64(ar) >= mu0_fp64_one) || (mu8_fabs_fp64(ai) >= mu0_fp64_one)) {
		mu8_zexp_fp64  (zr, zi, ar, ai);
		mu8_zsub_fp64  (zr, zi, *zr, *zi, mu0_fp64_one, mu0_fp64_zero);
	} else {
		const mu0_fp64_t  d = mu8_expm1_fp64(ar);
		const mu0_fp64_t  e = mu0_fp64_one + d;
		*zr                 = d - mu0_fp64_two * e * mu8_raise2_fp64(mu8_sin_fp64(__mu0_fp64_const__(0.5) * ai));
		*zi                 = e * mu8_sin_fp64(ai);
	}
}

void mu8_zexpm1_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	if ((mu8_fabs_fp32(ar) >= mu0_fp32_one) || (mu8_fabs_fp32(ai) >= mu0_fp32_one)) {
		mu8_zexp_fp32  (zr, zi, ar, ai);
		mu8_zsub_fp32  (zr, zi, *zr, *zi, mu0_fp32_one, mu0_fp32_zero);
	} else {
		const mu0_fp32_t  d = mu8_expm1_fp32(ar);
		const mu0_fp32_t  e = mu0_fp32_one + d;
		*zr                 = d - mu0_fp32_two * e * mu8_raise2_fp32(mu8_sin_fp32(__mu0_fp32_const__(0.5) * ai));
		*zi                 = e * mu8_sin_fp32(ai);
	}
}

void mu8_zexpm1_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	if ((mu8_fabs_fp16(ar) >= mu0_fp16_one) || (mu8_fabs_fp16(ai) >= mu0_fp16_one)) {
		mu8_zexp_fp16  (zr, zi, ar, ai);
		mu8_zsub_fp16  (zr, zi, *zr, *zi, mu0_fp16_one, mu0_fp16_zero);
	} else {
		const mu0_fp16_t  d = mu8_expm1_fp16(ar);
		const mu0_fp16_t  e = mu0_fp16_one + d;
		*zr                 = d - mu0_fp16_two * e * mu8_raise2_fp16(mu8_sin_fp16(__mu0_fp16_const__(0.5) * ai));
		*zi                 = e * mu8_sin_fp16(ai);
	}
}

/* EOF */