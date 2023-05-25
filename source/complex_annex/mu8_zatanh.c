
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

// mu8_zatanh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_annex.h>

void mu8_zatanh_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	mu0_fp128_t cr, ci, dr, di;
	if (mu8_isinf_fp128(ai)) {
			*zr = mu8_copysign_fp128(mu0_fp128_zero, ar);
			*zi = mu8_copysign_fp128(mu8_math_pi2_fp128, ai);
	} else if (mu8_isnan_fp128(ai)) {
		if (mu8_isinf_fp128(ar) || ar == mu0_fp128_zero) {
			*zr = mu8_copysign_fp128(mu0_fp128_zero, ar);
			*zi = ai;
		} else {
			*zr = ai;
			*zi = ai;
		}
	} else if (mu8_isnan_fp128(ar)) {
		*zr = ar;
		*zi = ar;
	} else if (mu8_isinf_fp128(ar)) {
		*zr = mu8_copysign_fp128(mu0_fp128_zero, ar);
		*zi = mu8_copysign_fp128(mu8_math_pi2_fp128, ai);
	} else if (mu8_fabs_fp128(ar) == mu0_fp128_one && ai == mu0_fp128_zero) {
		*zr = mu8_copysign_fp128(mu0_fp128_inf , ar);
		*zi = mu8_copysign_fp128(mu0_fp128_zero, ai);
	} else {
		mu8_zadd_fp128(&cr, &ci,  mu0_fp128_one, mu0_fp128_zero, ar, ai);
		mu8_zsub_fp128(&dr, &di,  mu0_fp128_one, mu0_fp128_zero, ar, ai);
		mu8_zdiv_fp128( zr,  zi,  cr,  ci, dr, di);
		mu8_zlog_fp128( zr,  zi, *zr, *zi);
		mu8_zmul_fp128( zr,  zi, *zr, *zi, __mu0_fp128_const__(0.5), mu0_fp128_zero);
		*zr = mu8_copysign_fp128(*zr,  ar);
		*zi = mu8_copysign_fp128(*zi,  ai);
	}
}

void mu8_zatanh_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{

}

void mu8_zatanh_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{

}

void mu8_zatanh_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{

}

/* EOF */