
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

// mu8_ztanh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_ztanh_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp128_t cr = __mu0_fp128_const__(2.0) * ar;
	const mu0_fp128_t ci = __mu0_fp128_const__(2.0) * ai;
	const mu0_fp128_t zd = mu8_cosh_fp128 (cr) + mu8_cos_fp128(ci);
	*zr                  = mu8_sinh_fp128 (cr) / zd;
	*zi                  = mu8_sin_fp128  (ci) / zd;
#	else
	if (mu8_isinf_fp128(ar)) {
		if (!mu8_isfinite_fp128(ai)) {
			*zr = mu0_fp128_one;
			*zi = mu0_fp128_zero;
		} else {
			*zr = mu0_fp128_one;
			*zi = mu8_copysign_fp128(mu0_fp128_zero, mu8_sin_fp128(__mu0_fp128_const__(2.0) * ai));
		}
	} else if (mu8_isnan_fp128(ar) && ai == mu0_fp128_zero) {
		*zr = ar;
		*zi = ai;
	} else {
		const mu0_fp128_t cr = __mu0_fp128_const__(2.0) * ar;
		const mu0_fp128_t ci = __mu0_fp128_const__(2.0) * ai;
		const mu0_fp128_t zd = mu8_cosh_fp128 (cr) + mu8_cos_fp128(ci);
		const mu0_fp128_t zh = mu8_sinh_fp128 (cr);
		if (mu8_isinf_fp128(zh) && mu8_isinf_fp128(zd)) {
			*zr = zh > mu0_fp128_zero ? mu0_fp128_one  : -mu0_fp128_one;
			*zi = ci > mu0_fp128_zero ? mu0_fp128_zero : -mu0_fp128_zero;
		} else {
			*zr = zh / zd;
			*zi = mu8_sin_fp128(ci) / zd;
		}
	}
#	endif
}

void mu8_ztanh_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp64_t  cr = __mu0_fp64_const__(2.0) * ar;
	const mu0_fp64_t  ci = __mu0_fp64_const__(2.0) * ai;
	const mu0_fp64_t  zd = mu8_cosh_fp64 (cr) + mu8_cos_fp64(ci);
	*zr                  = mu8_sinh_fp64 (cr) / zd;
	*zi                  = mu8_sin_fp64  (ci) / zd;
#	else
	if (mu8_isinf_fp64(ar)) {
		if (!mu8_isfinite_fp64(ai)) {
			*zr = mu0_fp64_one;
			*zi = mu0_fp64_zero;
		} else {
			*zr = mu0_fp64_one;
			*zi = mu8_copysign_fp64(mu0_fp64_zero, mu8_sin_fp64(__mu0_fp64_const__(2.0) * ai));
		}
	} else if (mu8_isnan_fp64(ar) && ai == mu0_fp64_zero) {
		*zr = ar;
		*zi = ai;
	} else {
		const mu0_fp64_t  cr = __mu0_fp64_const__(2.0) * ar;
		const mu0_fp64_t  ci = __mu0_fp64_const__(2.0) * ai;
		const mu0_fp64_t  zd = mu8_cosh_fp64 (cr) + mu8_cos_fp64(ci);
		const mu0_fp64_t  zh = mu8_sinh_fp64 (cr);
		if (mu8_isinf_fp64(zh) && mu8_isinf_fp64(zd)) {
			*zr = zh > mu0_fp64_zero ? mu0_fp64_one  : -mu0_fp64_one;
			*zi = ci > mu0_fp64_zero ? mu0_fp64_zero : -mu0_fp64_zero;
		} else {
			*zr = zh / zd;
			*zi = mu8_sin_fp64(ci) / zd;
		}
	}
#	endif
}

void mu8_ztanh_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp32_t  cr = __mu0_fp32_const__(2.0) * ar;
	const mu0_fp32_t  ci = __mu0_fp32_const__(2.0) * ai;
	const mu0_fp32_t  zd = mu8_cosh_fp32 (cr) + mu8_cos_fp32(ci);
	*zr                  = mu8_sinh_fp32 (cr) / zd;
	*zi                  = mu8_sin_fp32  (ci) / zd;
#	else
	if (mu8_isinf_fp32(ar)) {
		if (!mu8_isfinite_fp32(ai)) {
			*zr = mu0_fp32_one;
			*zi = mu0_fp32_zero;
		} else {
			*zr = mu0_fp32_one;
			*zi = mu8_copysign_fp32(mu0_fp32_zero, mu8_sin_fp32(__mu0_fp32_const__(2.0) * ai));
		}
	} else if (mu8_isnan_fp32(ar) && ai == mu0_fp32_zero) {
		*zr = ar;
		*zi = ai;
	} else {
		const mu0_fp32_t  cr = __mu0_fp32_const__(2.0) * ar;
		const mu0_fp32_t  ci = __mu0_fp32_const__(2.0) * ai;
		const mu0_fp32_t  zd = mu8_cosh_fp32 (cr) + mu8_cos_fp32(ci);
		const mu0_fp32_t  zh = mu8_sinh_fp32 (cr);
		if (mu8_isinf_fp32(zh) && mu8_isinf_fp32(zd)) {
			*zr = zh > mu0_fp32_zero ? mu0_fp32_one  : -mu0_fp32_one;
			*zi = ci > mu0_fp32_zero ? mu0_fp32_zero : -mu0_fp32_zero;
		} else {
			*zr = zh / zd;
			*zi = mu8_sin_fp32(ci) / zd;
		}
	}
#	endif
}

void mu8_ztanh_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
#	if MU0_HAVE_FASTMATH
	const mu0_fp16_t  cr = __mu0_fp16_const__(2.0) * ar;
	const mu0_fp16_t  ci = __mu0_fp16_const__(2.0) * ai;
	const mu0_fp16_t  zd = mu8_cosh_fp16 (cr) + mu8_cos_fp16(ci);
	*zr                  = mu8_sinh_fp16 (cr) / zd;
	*zi                  = mu8_sin_fp16  (ci) / zd;
#	else
	if (mu8_isinf_fp16(ar)) {
		if (!mu8_isfinite_fp16(ai)) {
			*zr = mu0_fp16_one;
			*zi = mu0_fp16_zero;
		} else {
			*zr = mu0_fp16_one;
			*zi = mu8_copysign_fp16(mu0_fp16_zero, mu8_sin_fp16(__mu0_fp16_const__(2.0) * ai));
		}
	} else if (mu8_isnan_fp16(ar) && ai == mu0_fp16_zero) {
		*zr = ar;
		*zi = ai;
	} else {
		const mu0_fp16_t  cr = __mu0_fp16_const__(2.0) * ar;
		const mu0_fp16_t  ci = __mu0_fp16_const__(2.0) * ai;
		const mu0_fp16_t  zd = mu8_cosh_fp16 (cr) + mu8_cos_fp16(ci);
		const mu0_fp16_t  zh = mu8_sinh_fp16 (cr);
		if (mu8_isinf_fp16(zh) && mu8_isinf_fp16(zd)) {
			*zr = zh > mu0_fp16_zero ? mu0_fp16_one  : -mu0_fp16_one;
			*zi = ci > mu0_fp16_zero ? mu0_fp16_zero : -mu0_fp16_zero;
		} else {
			*zr = zh / zd;
			*zi = mu8_sin_fp16(ci) / zd;
		}
	}
#	endif
}

/* EOF */