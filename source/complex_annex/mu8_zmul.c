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

// mu8_zmul.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

void mu8_zmul_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi)
{
#	if MU0_HAVE_FASTMATH
	*cr = (ar * br) - (ai * bi);
	*ci = (ar * bi) + (ai * br);
#	else
	mu0_fp128_t a_r = ar, a_i = ai, b_r = br, b_i = bi;
	mu0_fp128_t  a  = a_r * b_r, b = a_i * b_i;
	mu0_fp128_t  c  = a_r * b_i, d = a_i * b_r;
	mu0_sint32_t w  = 0;
	*cr             = a - b;
	*ci             = c + d;
	if (mu8_isnan_fp128(*cr) && mu8_isnan_fp128(*ci)) {
		if (mu8_isinf_fp128(a_r) || mu8_isinf_fp128(a_i)) {
			a_r = mu8_copysign_fp128(mu8_isinf_fp128(a_r) ? mu0_fp128_one : mu0_fp128_zero, a_r);
			a_i = mu8_copysign_fp128(mu8_isinf_fp128(a_i) ? mu0_fp128_one : mu0_fp128_zero, a_i);
			if (mu8_isnan_fp128(b_r)) {
				b_r = mu8_copysign_fp128(mu0_fp128_zero, b_r);
			}
			if (mu8_isnan_fp128(b_i)) {
				b_i = mu8_copysign_fp128(mu0_fp128_zero, b_i);
			}
			w = 1;
		}
		if (mu8_isinf_fp128(b_r) || mu8_isinf_fp128(b_i)) {
			b_r = mu8_copysign_fp128(mu8_isinf_fp128(b_r) ? mu0_fp128_one : mu0_fp128_zero, b_r);
			b_i = mu8_copysign_fp128(mu8_isinf_fp128(b_i) ? mu0_fp128_one : mu0_fp128_zero, b_i);
			if (mu8_isnan_fp128(a_r)) {
				a_r = mu8_copysign_fp128(mu0_fp128_zero, a_r);
			}
			if (mu8_isnan_fp128(a_i)) {
				a_i = mu8_copysign_fp128(mu0_fp128_zero, a_i);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp128(a) || mu8_isinf_fp128(b) || mu8_isinf_fp128(c) || mu8_isinf_fp128(d))) {
			if (mu8_isnan_fp128(a_r)) {
				a_r = mu8_copysign_fp128(mu0_fp128_zero, a_r);
			}
			if (mu8_isnan_fp128(a_i)) {
				a_i = mu8_copysign_fp128(mu0_fp128_zero, a_i);
			}
			if (mu8_isnan_fp128(b_r)) {
				b_r = mu8_copysign_fp128(mu0_fp128_zero, b_r);
			}
			if (mu8_isnan_fp128(b_i)) {
				b_i = mu8_copysign_fp128(mu0_fp128_zero, b_i);
			}
			w = 1;
		}
		if (w) {
			*cr = mu0_fp128_inf * (a_r * b_r - a_i * b_i);
			*ci = mu0_fp128_inf * (a_r * b_i + a_i * b_r);
		}
	}
#	endif
}

void mu8_zmul_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi)
{
#	if MU0_HAVE_FASTMATH
	*cr = (ar * br) - (ai * bi);
	*ci = (ar * bi) + (ai * br);
#	else
	mu0_fp64_t   a_r = ar, a_i = ai, b_r = br, b_i = bi;
	mu0_fp64_t   a   = a_r * b_r, b = a_i * b_i;
	mu0_fp64_t   c   = a_r * b_i, d = a_i * b_r;
	mu0_sint32_t w   = 0;
	*cr              = a - b;
	*ci              = c + d;
	if (mu8_isnan_fp64(*cr) && mu8_isnan_fp64(*ci)) {
		if (mu8_isinf_fp64(a_r) || mu8_isinf_fp64(a_i)) {
			a_r = mu8_copysign_fp64(mu8_isinf_fp64(a_r) ? mu0_fp64_one : mu0_fp64_zero, a_r);
			a_i = mu8_copysign_fp64(mu8_isinf_fp64(a_i) ? mu0_fp64_one : mu0_fp64_zero, a_i);
			if (mu8_isnan_fp64(b_r)) {
				b_r = mu8_copysign_fp64(mu0_fp64_zero, b_r);
			}
			if (mu8_isnan_fp64(b_i)) {
				b_i = mu8_copysign_fp64(mu0_fp64_zero, b_i);
			}
			w = 1;
		}
		if (mu8_isinf_fp64(b_r) || mu8_isinf_fp64(b_i)) {
			b_r = mu8_copysign_fp64(mu8_isinf_fp64(b_r) ? mu0_fp64_one : mu0_fp64_zero, b_r);
			b_i = mu8_copysign_fp64(mu8_isinf_fp64(b_i) ? mu0_fp64_one : mu0_fp64_zero, b_i);
			if (mu8_isnan_fp64(a_r)) {
				a_r = mu8_copysign_fp64(mu0_fp64_zero, a_r);
			}
			if (mu8_isnan_fp64(a_i)) {
				a_i = mu8_copysign_fp64(mu0_fp64_zero, a_i);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp64(a) || mu8_isinf_fp64(b) || mu8_isinf_fp64(c) || mu8_isinf_fp64(d))) {
			if (mu8_isnan_fp64(a_r)) {
				a_r = mu8_copysign_fp64(mu0_fp64_zero, a_r);
			}
			if (mu8_isnan_fp64(a_i)) {
				a_i = mu8_copysign_fp64(mu0_fp64_zero, a_i);
			}
			if (mu8_isnan_fp64(b_r)) {
				b_r = mu8_copysign_fp64(mu0_fp64_zero, b_r);
			}
			if (mu8_isnan_fp64(b_i)) {
				b_i = mu8_copysign_fp64(mu0_fp64_zero, b_i);
			}
			w = 1;
		}
		if (w) {
			*cr = mu0_fp64_inf * (a_r * b_r - a_i * b_i);
			*ci = mu0_fp64_inf * (a_r * b_i + a_i * b_r);
		}
	}
#	endif
}

void mu8_zmul_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi)
{
#	if MU0_HAVE_FASTMATH
	*cr = (ar * br) - (ai * bi);
	*ci = (ar * bi) + (ai * br);
#	else
	mu0_fp32_t   a_r = ar, a_i = ai, b_r = br, b_i = bi;
	mu0_fp32_t   a   = a_r * b_r, b = a_i * b_i;
	mu0_fp32_t   c   = a_r * b_i, d = a_i * b_r;
	mu0_sint32_t w   = 0;
	*cr              = a - b;
	*ci              = c + d;
	if (mu8_isnan_fp32(*cr) && mu8_isnan_fp32(*ci)) {
		if (mu8_isinf_fp32(a_r) || mu8_isinf_fp32(a_i)) {
			a_r = mu8_copysign_fp32(mu8_isinf_fp32(a_r) ? mu0_fp32_one : mu0_fp32_zero, a_r);
			a_i = mu8_copysign_fp32(mu8_isinf_fp32(a_i) ? mu0_fp32_one : mu0_fp32_zero, a_i);
			if (mu8_isnan_fp32(b_r)) {
				b_r = mu8_copysign_fp32(mu0_fp32_zero, b_r);
			}
			if (mu8_isnan_fp32(b_i)) {
				b_i = mu8_copysign_fp32(mu0_fp32_zero, b_i);
			}
			w = 1;
		}
		if (mu8_isinf_fp32(b_r) || mu8_isinf_fp32(b_i)) {
			b_r = mu8_copysign_fp32(mu8_isinf_fp32(b_r) ? mu0_fp32_one : mu0_fp32_zero, b_r);
			b_i = mu8_copysign_fp32(mu8_isinf_fp32(b_i) ? mu0_fp32_one : mu0_fp32_zero, b_i);
			if (mu8_isnan_fp32(a_r)) {
				a_r = mu8_copysign_fp32(mu0_fp32_zero, a_r);
			}
			if (mu8_isnan_fp32(a_i)) {
				a_i = mu8_copysign_fp32(mu0_fp32_zero, a_i);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp32(a) || mu8_isinf_fp32(b) || mu8_isinf_fp32(c) || mu8_isinf_fp32(d))) {
			if (mu8_isnan_fp32(a_r)) {
				a_r = mu8_copysign_fp32(mu0_fp32_zero, a_r);
			}
			if (mu8_isnan_fp32(a_i)) {
				a_i = mu8_copysign_fp32(mu0_fp32_zero, a_i);
			}
			if (mu8_isnan_fp32(b_r)) {
				b_r = mu8_copysign_fp32(mu0_fp32_zero, b_r);
			}
			if (mu8_isnan_fp32(b_i)) {
				b_i = mu8_copysign_fp32(mu0_fp32_zero, b_i);
			}
			w = 1;
		}
		if (w) {
			*cr = mu0_fp32_inf * (a_r * b_r - a_i * b_i);
			*ci = mu0_fp32_inf * (a_r * b_i + a_i * b_r);
		}
	}
#	endif
}

void mu8_zmul_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi)
{
#	if MU0_HAVE_FASTMATH
	*cr = (ar * br) - (ai * bi);
	*ci = (ar * bi) + (ai * br);
#	else
	mu0_fp16_t   a_r = ar, a_i = ai, b_r = br, b_i = bi;
	mu0_fp16_t   a   = a_r * b_r, b = a_i * b_i;
	mu0_fp16_t   c   = a_r * b_i, d = a_i * b_r;
	mu0_sint16_t w   = 0;
	*cr              = a - b;
	*ci              = c + d;
	if (mu8_isnan_fp16(*cr) && mu8_isnan_fp16(*ci)) {
		if (mu8_isinf_fp16(a_r) || mu8_isinf_fp16(a_i)) {
			a_r = mu8_copysign_fp16(mu8_isinf_fp16(a_r) ? mu0_fp16_one : mu0_fp16_zero, a_r);
			a_i = mu8_copysign_fp16(mu8_isinf_fp16(a_i) ? mu0_fp16_one : mu0_fp16_zero, a_i);
			if (mu8_isnan_fp16(b_r)) {
				b_r = mu8_copysign_fp16(mu0_fp16_zero, b_r);
			}
			if (mu8_isnan_fp16(b_i)) {
				b_i = mu8_copysign_fp16(mu0_fp16_zero, b_i);
			}
			w = 1;
		}
		if (mu8_isinf_fp16(b_r) || mu8_isinf_fp16(b_i)) {
			b_r = mu8_copysign_fp16(mu8_isinf_fp16(b_r) ? mu0_fp16_one : mu0_fp16_zero, b_r);
			b_i = mu8_copysign_fp16(mu8_isinf_fp16(b_i) ? mu0_fp16_one : mu0_fp16_zero, b_i);
			if (mu8_isnan_fp16(a_r)) {
				a_r = mu8_copysign_fp16(mu0_fp16_zero, a_r);
			}
			if (mu8_isnan_fp16(a_i)) {
				a_i = mu8_copysign_fp16(mu0_fp16_zero, a_i);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp16(a) || mu8_isinf_fp16(b) || mu8_isinf_fp16(c) || mu8_isinf_fp16(d))) {
			if (mu8_isnan_fp16(a_r)) {
				a_r = mu8_copysign_fp16(mu0_fp16_zero, a_r);
			}
			if (mu8_isnan_fp16(a_i)) {
				a_i = mu8_copysign_fp16(mu0_fp16_zero, a_i);
			}
			if (mu8_isnan_fp16(b_r)) {
				b_r = mu8_copysign_fp16(mu0_fp16_zero, b_r);
			}
			if (mu8_isnan_fp16(b_i)) {
				b_i = mu8_copysign_fp16(mu0_fp16_zero, b_i);
			}
			w = 1;
		}
		if (w) {
			*cr = mu0_fp16_inf * (a_r * b_r - a_i * b_i);
			*ci = mu0_fp16_inf * (a_r * b_i + a_i * b_r);
		}
	}
#	endif
}

/* EOF */