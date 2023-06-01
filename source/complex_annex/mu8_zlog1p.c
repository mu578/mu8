
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

// mu8_zlog1p.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zlog1p_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	if ((mu8_fabs_fp128(ar) >= mu0_fp128_one) || (mu8_fabs_fp128(ai) >= mu0_fp128_one)) {
		mu8_zadd_fp128(zr, zi, mu0_fp128_one, mu0_fp128_zero, ar, ai);
		mu8_zlog_fp128(zr, zi, *zr, *zi);
	} else {
		const mu0_fp128_t d = mu0_fp128_one + ar;
		*zr                 = mu8_log1p_fp128(ar) + mu0_fp128_half * mu8_log1p_fp128(mu8_raise2_fp128(ai / d));
		*zi                 = mu8_atan2_fp128(ai, d);
	}
}

void mu8_zlog1p_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	if ((mu8_fabs_fp64(ar) >= mu0_fp64_one) || (mu8_fabs_fp64(ai) >= mu0_fp64_one)) {
		mu8_zadd_fp64(zr, zi, mu0_fp64_one, mu0_fp64_zero, ar, ai);
		mu8_zlog_fp64(zr, zi, *zr, *zi);
	} else {
		const mu0_fp64_t d = mu0_fp64_one + ar;
		*zr                 = mu8_log1p_fp64(ar) + mu0_fp64_half * mu8_log1p_fp64(mu8_raise2_fp64(ai / d));
		*zi                 = mu8_atan2_fp64(ai, d);
	}
}

void mu8_zlog1p_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	if ((mu8_fabs_fp32(ar) >= mu0_fp32_one) || (mu8_fabs_fp32(ai) >= mu0_fp32_one)) {
		mu8_zadd_fp32(zr, zi, mu0_fp32_one, mu0_fp32_zero, ar, ai);
		mu8_zlog_fp32(zr, zi, *zr, *zi);
	} else {
		const mu0_fp32_t d = mu0_fp32_one + ar;
		*zr                 = mu8_log1p_fp32(ar) + mu0_fp32_half * mu8_log1p_fp32(mu8_raise2_fp32(ai / d));
		*zi                 = mu8_atan2_fp32(ai, d);
	}
}

void mu8_zlog1p_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	if ((mu8_fabs_fp16(ar) >= mu0_fp16_one) || (mu8_fabs_fp16(ai) >= mu0_fp16_one)) {
		mu8_zadd_fp16(zr, zi, mu0_fp16_one, mu0_fp16_zero, ar, ai);
		mu8_zlog_fp16(zr, zi, *zr, *zi);
	} else {
		const mu0_fp16_t d = mu0_fp16_one + ar;
		*zr                 = mu8_log1p_fp16(ar) + mu0_fp16_half * mu8_log1p_fp16(mu8_raise2_fp16(ai / d));
		*zi                 = mu8_atan2_fp16(ai, d);
	}
}

/* EOF */