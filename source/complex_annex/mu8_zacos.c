
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

// mu8_zacos.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_annex.h>

void mu8_zacos_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
	mu0_fp128_t w;
	if (mu8_isinf_fp128(ar)) {
		if (mu8_isnan_fp128(ai)) {
			*zr = ai;
			*zi = ar;
		} else if (mu8_isinf_fp128(ai)) {
			if (ar < mu0_fp128_zero) {
				*zr =  mu8_math_pi_fp128 * __mu0_fp128_const__(0.75);
				*zi = -ai;
			} else {
				*zr =  mu8_math_pio4_fp128;
				*zi = -ai;
			}
		} else if (ar < mu0_fp128_zero) {
			*zr = mu8_math_pi_fp128;
			*zi = mu8_signbit_fp128(ai) < mu0_fp128_zero ? -ar : ar;
		} else {
			*zr = mu0_fp128_zero;
			*zi = mu8_signbit_fp128(ai) < mu0_fp128_zero ? ar : -ar;
		}
	} else if (mu8_isnan_fp128(ar)) {
		if (mu8_isinf_fp128(ai)) {
			*zr =  ar;
			*zi = -ai;
		} else {
			*zr = ar;
			*zi = ar;
		}
	} else if (mu8_isinf_fp128(ai)) {
		*zr =  mu8_math_pio2_fp128;
		*zi = -ai;
	} else if (ar == 0 && (ai == 0 || isnan(ai))) {
		*zr =  mu8_math_pio2_fp128;
		*zi = -ai;
	} else {
		// mu8_zpow_fp128  (zr, zi,  ar,  ai, mu0_fp128_two, mu0_fp128_zero);
		mu8_zraise2_fp128 (zr, zi,  ar,  ai);
		mu8_zsqrt_fp128   (zr, zi, *zr, *zi);
		mu8_zadd_fp128    (zr, zi,  ar,  ai, *zr, *zi);
		mu8_zsub_fp128    (zr, zi, *zr, *zi, mu0_fp128_one, mu0_fp128_zero);
		mu8_zlog_fp128    (zr, zi, *zr, *zi);

		if (mu8_signbit_fp128(ai) < mu0_fp128_zero) {
			 w  = mu8_fabs_fp128(*zr);
			*zr = mu8_fabs_fp128(*zi);
			*zi = w;
		} else {
			 w  =  mu8_fabs_fp128(*zr);
			*zr =  mu8_fabs_fp128(*zi);
			*zi = -w;
		}
	}
}

void mu8_zacos_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
	mu0_fp64_t w;
	if (mu8_isinf_fp64(ar)) {
		if (mu8_isnan_fp64(ai)) {
			*zr = ai;
			*zi = ar;
		} else if (mu8_isinf_fp64(ai)) {
			if (ar < mu0_fp64_zero) {
				*zr =  mu8_math_pi_fp64 * __mu0_fp64_const__(0.75);
				*zi = -ai;
			} else {
				*zr =  mu8_math_pio4_fp64;
				*zi = -ai;
			}
		} else if (ar < mu0_fp64_zero) {
			*zr = mu8_math_pi_fp64;
			*zi = mu8_signbit_fp64(ai) < mu0_fp64_zero ? -ar : ar;
		} else {
			*zr = mu0_fp64_zero;
			*zi = mu8_signbit_fp64(ai) < mu0_fp64_zero ? ar : -ar;
		}
	} else if (mu8_isnan_fp64(ar)) {
		if (mu8_isinf_fp64(ai)) {
			*zr =  ar;
			*zi = -ai;
		} else {
			*zr = ar;
			*zi = ar;
		}
	} else if (mu8_isinf_fp64(ai)) {
		*zr =  mu8_math_pio2_fp64;
		*zi = -ai;
	} else if (ar == 0 && (ai == 0 || isnan(ai))) {
		*zr =  mu8_math_pio2_fp64;
		*zi = -ai;
	} else {
		// mu8_zpow_fp64   (zr, zi,  ar,  ai, mu0_fp64_two, mu0_fp64_zero);
		mu8_zraise2_fp64  (zr, zi,  ar,  ai);
		mu8_zsqrt_fp64    (zr, zi, *zr, *zi);
		mu8_zadd_fp64     (zr, zi,  ar,  ai, *zr, *zi);
		mu8_zsub_fp64     (zr, zi, *zr, *zi, mu0_fp64_one, mu0_fp64_zero);
		mu8_zlog_fp64     (zr, zi, *zr, *zi);

		if (mu8_signbit_fp64(ai) < mu0_fp64_zero) {
			 w  = mu8_fabs_fp64(*zr);
			*zr = mu8_fabs_fp64(*zi);
			*zi = w;
		} else {
			 w  =  mu8_fabs_fp64(*zr);
			*zr =  mu8_fabs_fp64(*zi);
			*zi = -w;
		}
	}
}

void mu8_zacos_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
	mu0_fp32_t w;
	if (mu8_isinf_fp32(ar)) {
		if (mu8_isnan_fp32(ai)) {
			*zr = ai;
			*zi = ar;
		} else if (mu8_isinf_fp32(ai)) {
			if (ar < mu0_fp32_zero) {
				*zr =  mu8_math_pi_fp32 * __mu0_fp32_const__(0.75);
				*zi = -ai;
			} else {
				*zr =  mu8_math_pio4_fp32;
				*zi = -ai;
			}
		} else if (ar < mu0_fp32_zero) {
			*zr = mu8_math_pi_fp32;
			*zi = mu8_signbit_fp32(ai) < mu0_fp32_zero ? -ar : ar;
		} else {
			*zr = mu0_fp32_zero;
			*zi = mu8_signbit_fp32(ai) < mu0_fp32_zero ? ar : -ar;
		}
	} else if (mu8_isnan_fp32(ar)) {
		if (mu8_isinf_fp32(ai)) {
			*zr =  ar;
			*zi = -ai;
		} else {
			*zr = ar;
			*zi = ar;
		}
	} else if (mu8_isinf_fp32(ai)) {
		*zr =  mu8_math_pio2_fp32;
		*zi = -ai;
	} else if (ar == 0 && (ai == 0 || isnan(ai))) {
		*zr =  mu8_math_pio2_fp32;
		*zi = -ai;
	} else {
		// mu8_zpow_fp32   (zr, zi,  ar,  ai, mu0_fp32_two, mu0_fp32_zero);
		mu8_zraise2_fp32  (zr, zi,  ar,  ai);
		mu8_zsqrt_fp32    (zr, zi, *zr, *zi);
		mu8_zadd_fp32     (zr, zi,  ar,  ai, *zr, *zi);
		mu8_zsub_fp32     (zr, zi, *zr, *zi, mu0_fp32_one, mu0_fp32_zero);
		mu8_zlog_fp32     (zr, zi, *zr, *zi);

		if (mu8_signbit_fp32(ai) < mu0_fp32_zero) {
			 w  = mu8_fabs_fp32(*zr);
			*zr = mu8_fabs_fp32(*zi);
			*zi = w;
		} else {
			 w  =  mu8_fabs_fp32(*zr);
			*zr =  mu8_fabs_fp32(*zi);
			*zi = -w;
		}
	}
}

void mu8_zacos_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
	mu0_fp16_t w;
	if (mu8_isinf_fp16(ar)) {
		if (mu8_isnan_fp16(ai)) {
			*zr = ai;
			*zi = ar;
		} else if (mu8_isinf_fp16(ai)) {
			if (ar < mu0_fp16_zero) {
				*zr =  mu8_math_pi_fp16 * __mu0_fp16_const__(0.75);
				*zi = -ai;
			} else {
				*zr =  mu8_math_pio4_fp16;
				*zi = -ai;
			}
		} else if (ar < mu0_fp16_zero) {
			*zr = mu8_math_pi_fp16;
			*zi = mu8_signbit_fp16(ai) < mu0_fp16_zero ? -ar : ar;
		} else {
			*zr = mu0_fp16_zero;
			*zi = mu8_signbit_fp16(ai) < mu0_fp16_zero ? ar : -ar;
		}
	} else if (mu8_isnan_fp16(ar)) {
		if (mu8_isinf_fp16(ai)) {
			*zr =  ar;
			*zi = -ai;
		} else {
			*zr = ar;
			*zi = ar;
		}
	} else if (mu8_isinf_fp16(ai)) {
		*zr =  mu8_math_pio2_fp16;
		*zi = -ai;
	} else if (ar == 0 && (ai == 0 || isnan(ai))) {
		*zr =  mu8_math_pio2_fp16;
		*zi = -ai;
	} else {
		// mu8_zpow_fp16   (zr, zi,  ar,  ai, mu0_fp16_two, mu0_fp16_zero);
		mu8_zraise2_fp16  (zr, zi,  ar,  ai);
		mu8_zsqrt_fp16    (zr, zi, *zr, *zi);
		mu8_zadd_fp16     (zr, zi,  ar,  ai, *zr, *zi);
		mu8_zsub_fp16     (zr, zi, *zr, *zi, mu0_fp16_one, mu0_fp16_zero);
		mu8_zlog_fp16     (zr, zi, *zr, *zi);

		if (mu8_signbit_fp16(ai) < mu0_fp16_zero) {
			 w  = mu8_fabs_fp16(*zr);
			*zr = mu8_fabs_fp16(*zi);
			*zi = w;
		} else {
			 w  =  mu8_fabs_fp16(*zr);
			*zr =  mu8_fabs_fp16(*zi);
			*zi = -w;
		}
	}
}

/* EOF */