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

#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_math_annex.h>

void mu8_zmul_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi)
{
#	if MU0_HAVE_FASTMATH
	*zr = (ar * br) - (ai * bi);
	*zi = (ar * bi) + (ai * br);
#	else
	mu0_fp128_t gr = ar, gi = ai, hr = br, hi = bi;
	mu0_fp128_t  a = gr * hr, b = gi * hi;
	mu0_fp128_t  c = gr * hi, d = gi * hr;
	mu0_sint32_t w = 0;
	*zr            = a - b;
	*zi            = c + d;
	if (mu8_isnan_fp128(*zr) && mu8_isnan_fp128(*zi)) {
		if (mu8_isinf_fp128(gr) || mu8_isinf_fp128(gi)) {
			gr = mu8_copysign_fp128(mu8_isinf_fp128(gr) ? mu0_fp128_one : mu0_fp128_zero, gr);
			gi = mu8_copysign_fp128(mu8_isinf_fp128(gi) ? mu0_fp128_one : mu0_fp128_zero, gi);
			if (mu8_isnan_fp128(hr)) {
				hr = mu8_copysign_fp128(mu0_fp128_zero, hr);
			}
			if (mu8_isnan_fp128(hi)) {
				hi = mu8_copysign_fp128(mu0_fp128_zero, hi);
			}
			w = 1;
		}
		if (mu8_isinf_fp128(hr) || mu8_isinf_fp128(hi)) {
			hr = mu8_copysign_fp128(mu8_isinf_fp128(hr) ? mu0_fp128_one : mu0_fp128_zero, hr);
			hi = mu8_copysign_fp128(mu8_isinf_fp128(hi) ? mu0_fp128_one : mu0_fp128_zero, hi);
			if (mu8_isnan_fp128(gr)) {
				gr = mu8_copysign_fp128(mu0_fp128_zero, gr);
			}
			if (mu8_isnan_fp128(gi)) {
				gi = mu8_copysign_fp128(mu0_fp128_zero, gi);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp128(a) || mu8_isinf_fp128(b) || mu8_isinf_fp128(c) || mu8_isinf_fp128(d))) {
			if (mu8_isnan_fp128(gr)) {
				gr = mu8_copysign_fp128(mu0_fp128_zero, gr);
			}
			if (mu8_isnan_fp128(gi)) {
				gi = mu8_copysign_fp128(mu0_fp128_zero, gi);
			}
			if (mu8_isnan_fp128(hr)) {
				hr = mu8_copysign_fp128(mu0_fp128_zero, hr);
			}
			if (mu8_isnan_fp128(hi)) {
				hi = mu8_copysign_fp128(mu0_fp128_zero, hi);
			}
			w = 1;
		}
		if (w) {
			*zr = mu0_fp128_inf * (gr * hr - gi * hi);
			*zi = mu0_fp128_inf * (gr * hi + gi * hr);
		}
	}
#	endif
}

void mu8_zmul_fpex  (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi)
{
#	if MU0_HAVE_FASTMATH
	*zr = (ar * br) - (ai * bi);
	*zi = (ar * bi) + (ai * br);
#	else
	mu0_fpex_t   gr = ar, gi = ai, hr = br, hi = bi;
	mu0_fpex_t   a  = gr * hr, b = gi * hi;
	mu0_fpex_t   c  = gr * hi, d = gi * hr;
	mu0_sint32_t w  = 0;
	*zr             = a - b;
	*zi             = c + d;
	if (mu8_isnan_fpex(*zr) && mu8_isnan_fpex(*zi)) {
		if (mu8_isinf_fpex(gr) || mu8_isinf_fpex(gi)) {
			gr = mu8_copysign_fpex(mu8_isinf_fpex(gr) ? mu0_fpex_one : mu0_fpex_zero, gr);
			gi = mu8_copysign_fpex(mu8_isinf_fpex(gi) ? mu0_fpex_one : mu0_fpex_zero, gi);
			if (mu8_isnan_fpex(hr)) {
				hr = mu8_copysign_fpex(mu0_fpex_zero, hr);
			}
			if (mu8_isnan_fpex(hi)) {
				hi = mu8_copysign_fpex(mu0_fpex_zero, hi);
			}
			w = 1;
		}
		if (mu8_isinf_fpex(hr) || mu8_isinf_fpex(hi)) {
			hr = mu8_copysign_fpex(mu8_isinf_fpex(hr) ? mu0_fpex_one : mu0_fpex_zero, hr);
			hi = mu8_copysign_fpex(mu8_isinf_fpex(hi) ? mu0_fpex_one : mu0_fpex_zero, hi);
			if (mu8_isnan_fpex(gr)) {
				gr = mu8_copysign_fpex(mu0_fpex_zero, gr);
			}
			if (mu8_isnan_fpex(gi)) {
				gi = mu8_copysign_fpex(mu0_fpex_zero, gi);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fpex(a) || mu8_isinf_fpex(b) || mu8_isinf_fpex(c) || mu8_isinf_fpex(d))) {
			if (mu8_isnan_fpex(gr)) {
				gr = mu8_copysign_fpex(mu0_fpex_zero, gr);
			}
			if (mu8_isnan_fpex(gi)) {
				gi = mu8_copysign_fpex(mu0_fpex_zero, gi);
			}
			if (mu8_isnan_fpex(hr)) {
				hr = mu8_copysign_fpex(mu0_fpex_zero, hr);
			}
			if (mu8_isnan_fpex(hi)) {
				hi = mu8_copysign_fpex(mu0_fpex_zero, hi);
			}
			w = 1;
		}
		if (w) {
			*zr = mu0_fpex_inf * (gr * hr - gi * hi);
			*zi = mu0_fpex_inf * (gr * hi + gi * hr);
		}
	}
#	endif
}

void mu8_zmul_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi)
{
#	if MU0_HAVE_FASTMATH
	*zr = (ar * br) - (ai * bi);
	*zi = (ar * bi) + (ai * br);
#	else
	mu0_fp64_t   gr = ar, gi = ai, hr = br, hi = bi;
	mu0_fp64_t   a  = gr * hr, b = gi * hi;
	mu0_fp64_t   c  = gr * hi, d = gi * hr;
	mu0_sint32_t w  = 0;
	*zr             = a - b;
	*zi             = c + d;
	if (mu8_isnan_fp64(*zr) && mu8_isnan_fp64(*zi)) {
		if (mu8_isinf_fp64(gr) || mu8_isinf_fp64(gi)) {
			gr = mu8_copysign_fp64(mu8_isinf_fp64(gr) ? mu0_fp64_one : mu0_fp64_zero, gr);
			gi = mu8_copysign_fp64(mu8_isinf_fp64(gi) ? mu0_fp64_one : mu0_fp64_zero, gi);
			if (mu8_isnan_fp64(hr)) {
				hr = mu8_copysign_fp64(mu0_fp64_zero, hr);
			}
			if (mu8_isnan_fp64(hi)) {
				hi = mu8_copysign_fp64(mu0_fp64_zero, hi);
			}
			w = 1;
		}
		if (mu8_isinf_fp64(hr) || mu8_isinf_fp64(hi)) {
			hr = mu8_copysign_fp64(mu8_isinf_fp64(hr) ? mu0_fp64_one : mu0_fp64_zero, hr);
			hi = mu8_copysign_fp64(mu8_isinf_fp64(hi) ? mu0_fp64_one : mu0_fp64_zero, hi);
			if (mu8_isnan_fp64(gr)) {
				gr = mu8_copysign_fp64(mu0_fp64_zero, gr);
			}
			if (mu8_isnan_fp64(gi)) {
				gi = mu8_copysign_fp64(mu0_fp64_zero, gi);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp64(a) || mu8_isinf_fp64(b) || mu8_isinf_fp64(c) || mu8_isinf_fp64(d))) {
			if (mu8_isnan_fp64(gr)) {
				gr = mu8_copysign_fp64(mu0_fp64_zero, gr);
			}
			if (mu8_isnan_fp64(gi)) {
				gi = mu8_copysign_fp64(mu0_fp64_zero, gi);
			}
			if (mu8_isnan_fp64(hr)) {
				hr = mu8_copysign_fp64(mu0_fp64_zero, hr);
			}
			if (mu8_isnan_fp64(hi)) {
				hi = mu8_copysign_fp64(mu0_fp64_zero, hi);
			}
			w = 1;
		}
		if (w) {
			*zr = mu0_fp64_inf * (gr * hr - gi * hi);
			*zi = mu0_fp64_inf * (gr * hi + gi * hr);
		}
	}
#	endif
}

void mu8_zmul_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi)
{
#	if MU0_HAVE_FASTMATH
	*zr = (ar * br) - (ai * bi);
	*zi = (ar * bi) + (ai * br);
#	else
	mu0_fp32_t   gr = ar, gi = ai, hr = br, hi = bi;
	mu0_fp32_t   a  = gr * hr, b = gi * hi;
	mu0_fp32_t   c  = gr * hi, d = gi * hr;
	mu0_sint32_t w  = 0;
	*zr             = a - b;
	*zi             = c + d;
	if (mu8_isnan_fp32(*zr) && mu8_isnan_fp32(*zi)) {
		if (mu8_isinf_fp32(gr) || mu8_isinf_fp32(gi)) {
			gr = mu8_copysign_fp32(mu8_isinf_fp32(gr) ? mu0_fp32_one : mu0_fp32_zero, gr);
			gi = mu8_copysign_fp32(mu8_isinf_fp32(gi) ? mu0_fp32_one : mu0_fp32_zero, gi);
			if (mu8_isnan_fp32(hr)) {
				hr = mu8_copysign_fp32(mu0_fp32_zero, hr);
			}
			if (mu8_isnan_fp32(hi)) {
				hi = mu8_copysign_fp32(mu0_fp32_zero, hi);
			}
			w = 1;
		}
		if (mu8_isinf_fp32(hr) || mu8_isinf_fp32(hi)) {
			hr = mu8_copysign_fp32(mu8_isinf_fp32(hr) ? mu0_fp32_one : mu0_fp32_zero, hr);
			hi = mu8_copysign_fp32(mu8_isinf_fp32(hi) ? mu0_fp32_one : mu0_fp32_zero, hi);
			if (mu8_isnan_fp32(gr)) {
				gr = mu8_copysign_fp32(mu0_fp32_zero, gr);
			}
			if (mu8_isnan_fp32(gi)) {
				gi = mu8_copysign_fp32(mu0_fp32_zero, gi);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp32(a) || mu8_isinf_fp32(b) || mu8_isinf_fp32(c) || mu8_isinf_fp32(d))) {
			if (mu8_isnan_fp32(gr)) {
				gr = mu8_copysign_fp32(mu0_fp32_zero, gr);
			}
			if (mu8_isnan_fp32(gi)) {
				gi = mu8_copysign_fp32(mu0_fp32_zero, gi);
			}
			if (mu8_isnan_fp32(hr)) {
				hr = mu8_copysign_fp32(mu0_fp32_zero, hr);
			}
			if (mu8_isnan_fp32(hi)) {
				hi = mu8_copysign_fp32(mu0_fp32_zero, hi);
			}
			w = 1;
		}
		if (w) {
			*zr = mu0_fp32_inf * (gr * hr - gi * hi);
			*zi = mu0_fp32_inf * (gr * hi + gi * hr);
		}
	}
#	endif
}

void mu8_zmul_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi)
{
#	if MU0_HAVE_FASTMATH
	*zr = (ar * br) - (ai * bi);
	*zi = (ar * bi) + (ai * br);
#	else
	mu0_fp16_t   gr = ar, gi = ai, hr = br, hi = bi;
	mu0_fp16_t   a  = gr * hr, b = gi * hi;
	mu0_fp16_t   c  = gr * hi, d = gi * hr;
	mu0_sint16_t w  = 0;
	*zr             = a - b;
	*zi             = c + d;
	if (mu8_isnan_fp16(*zr) && mu8_isnan_fp16(*zi)) {
		if (mu8_isinf_fp16(gr) || mu8_isinf_fp16(gi)) {
			gr = mu8_copysign_fp16(mu8_isinf_fp16(gr) ? mu0_fp16_one : mu0_fp16_zero, gr);
			gi = mu8_copysign_fp16(mu8_isinf_fp16(gi) ? mu0_fp16_one : mu0_fp16_zero, gi);
			if (mu8_isnan_fp16(hr)) {
				hr = mu8_copysign_fp16(mu0_fp16_zero, hr);
			}
			if (mu8_isnan_fp16(hi)) {
				hi = mu8_copysign_fp16(mu0_fp16_zero, hi);
			}
			w = 1;
		}
		if (mu8_isinf_fp16(hr) || mu8_isinf_fp16(hi)) {
			hr = mu8_copysign_fp16(mu8_isinf_fp16(hr) ? mu0_fp16_one : mu0_fp16_zero, hr);
			hi = mu8_copysign_fp16(mu8_isinf_fp16(hi) ? mu0_fp16_one : mu0_fp16_zero, hi);
			if (mu8_isnan_fp16(gr)) {
				gr = mu8_copysign_fp16(mu0_fp16_zero, gr);
			}
			if (mu8_isnan_fp16(gi)) {
				gi = mu8_copysign_fp16(mu0_fp16_zero, gi);
			}
			w = 1;
		}
		if (w == 0 && (mu8_isinf_fp16(a) || mu8_isinf_fp16(b) || mu8_isinf_fp16(c) || mu8_isinf_fp16(d))) {
			if (mu8_isnan_fp16(gr)) {
				gr = mu8_copysign_fp16(mu0_fp16_zero, gr);
			}
			if (mu8_isnan_fp16(gi)) {
				gi = mu8_copysign_fp16(mu0_fp16_zero, gi);
			}
			if (mu8_isnan_fp16(hr)) {
				hr = mu8_copysign_fp16(mu0_fp16_zero, hr);
			}
			if (mu8_isnan_fp16(hi)) {
				hi = mu8_copysign_fp16(mu0_fp16_zero, hi);
			}
			w = 1;
		}
		if (w) {
			*zr = mu0_fp16_inf * (gr * hr - gi * hi);
			*zi = mu0_fp16_inf * (gr * hi + gi * hr);
		}
	}
#	endif
}

/* EOF */