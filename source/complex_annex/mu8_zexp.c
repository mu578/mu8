
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

// mu8_zexp.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math.h>

void mu8_zexp_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai)
{
#	if MU0_HAVE_FASTMATH
	if (ar == mu0_fp128_zero && ai == mu0_fp128_zero) {
		*zr = mu0_fp128_one;
		*zi = mu0_fp128_zero;
		return;
	}
#	else
	*zi = ai;
	if (*zi == mu0_fp128_zero) {
		*zr = mu8_exp_fp128(ar);
		*zi = mu8_copysign_fp128(mu0_fp128_zero, ai);
		return;
	}
	if (mu8_isinf_fp128(ar)) {
		if (ar < mu0_fp128_zero) {
			if (!mu8_isfinite_fp128(*zi)) {
				*zi = mu0_fp128_one;
			}
		} else if (*zi == mu0_fp128_zero || !mu8_isfinite_fp128(*zi)) {
			if (mu8_isinf_fp128(*zi)) {
				*zi = mu0_fp128_nan;
			}
			*zr = ar;
			return;
		}
	} else if (mu8_isnan_fp128(ar) && ai == mu0_fp128_zero) {
		*zr = ar;
		*zi = ai;
		return;
	}
#	endif
	const mu0_fp128_t e =     mu8_exp_fp128( ar);
	*zr                 = e * mu8_cos_fp128(*zi);
	*zi                 = e * mu8_sin_fp128(*zi);
}

void mu8_zexp_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai)
{
#	if MU0_HAVE_FASTMATH
	if (ar == mu0_fp64_zero && ai == mu0_fp64_zero) {
		*zr = mu0_fp64_one;
		*zi = mu0_fp64_zero;
		return;
	}
#	else
	*zi = ai;
	if (*zi == mu0_fp64_zero) {
		*zr = mu8_exp_fp64(ar);
		*zi = mu8_copysign_fp64(mu0_fp64_zero, ai);
		return;
	}
	if (mu8_isinf_fp64 (ar)) {
		if (ar < mu0_fp64_zero) {
			if (!mu8_isfinite_fp64(*zi)) {
				*zi = mu0_fp64_one;
			}
		} else if (*zi == mu0_fp64_zero || !mu8_isfinite_fp64(*zi)) {
			if (mu8_isinf_fp64(*zi)) {
				*zi = mu0_fp64_nan;
			}
			*zr = ar;
			return;
		}
	} else if (mu8_isnan_fp64(ar) && ai == mu0_fp64_zero) {
		*zr = ar;
		*zi = ai;
		return;
	}
#	endif
	const mu0_fp64_t  e =     mu8_exp_fp64( ar);
	*zr                 = e * mu8_cos_fp64(*zi);
	*zi                 = e * mu8_sin_fp64(*zi);
}

void mu8_zexp_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai)
{
#	if MU0_HAVE_FASTMATH
	if (ar == mu0_fp32_zero && ai == mu0_fp32_zero) {
		*zr = mu0_fp32_one;
		*zi = mu0_fp32_zero;
		return;
	}
#	else
	*zi = ai;
	if (*zi == mu0_fp32_zero) {
		*zr = mu8_exp_fp32(ar);
		*zi = mu8_copysign_fp32(mu0_fp32_zero, ai);
		return;
	}
	if (mu8_isinf_fp32 (ar)) {
		if (ar < mu0_fp32_zero) {
			if (!mu8_isfinite_fp32(*zi)) {
				*zi = mu0_fp32_one;
			}
		} else if (*zi == mu0_fp32_zero || !mu8_isfinite_fp32(*zi)) {
			if (mu8_isinf_fp32(*zi)) {
				*zi = mu0_fp32_nan;
			}
			*zr = ar;
			return;
		}
	} else if (mu8_isnan_fp32(ar) && ai == mu0_fp32_zero) {
		*zr = ar;
		*zi = ai;
		return;
	}
#	endif
	const mu0_fp32_t  e =     mu8_exp_fp32( ar);
	*zr                 = e * mu8_cos_fp32(*zi);
	*zi                 = e * mu8_sin_fp32(*zi);
}

void mu8_zexp_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai)
{
#	if MU0_HAVE_FASTMATH
	if (ar == mu0_fp16_zero && ai == mu0_fp16_zero) {
		*zr = mu0_fp16_one;
		*zi = mu0_fp16_zero;
		return;
	}
#	else
	*zi = ai;
	if (*zi == mu0_fp16_zero) {
		*zr = mu8_exp_fp16(ar);
		*zi = mu8_copysign_fp16(mu0_fp16_zero, ai);
		return;
	}
	if (mu8_isinf_fp16 (ar)) {
		if (ar < mu0_fp16_zero) {
			if (!mu8_isfinite_fp16(*zi)) {
				*zi = mu0_fp16_one;
			}
		} else if (*zi == mu0_fp16_zero || !mu8_isfinite_fp16(*zi)) {
			if (mu8_isinf_fp16(*zi)) {
				*zi = mu0_fp16_nan;
			}
			*zr = ar;
			return;
		}
	} else if (mu8_isnan_fp16(ar) && ai == mu0_fp16_zero) {
		*zr = ar;
		*zi = ai;
		return;
	}
#	endif
	const mu0_fp16_t  e =     mu8_exp_fp16( ar);
	*zr                 = e * mu8_cos_fp16(*zi);
	*zi                 = e * mu8_sin_fp16(*zi);
}

/* EOF */