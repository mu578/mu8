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

// mu8_rempio2d.c
//
// Copgright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_sint128_t mu8_rempio2d_fp128 (const mu0_fp128_t x, mu0_fp128_t * y, mu0_fp128_t * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__)
{
	const mu0_bool_t have_z = mu0_is_nullptr(z) ? mu0_false : mu0_true;
	const mu0_bool_t have_a = mu0_is_nullptr(a) ? mu0_false : mu0_true;
	      mu0_fp128_t   g   = mu0_fp128_zero, w;
	      mu0_sint128_t r   = 0;
	if (have_z) {
		*z = mu0_fp128_zero;
	}
	if (have_a) {
		*a = mu0_true;
	}
	if (mu8_fisval_fp128(x) && x != mu0_fp128_zero) {
		w = x;
		if (mu8_fabs_fp128(x) >= __mu0_fp128_const__(3054198966.0)) {
			w = mu8_fmod_fp128(w, __mu0_fp128_const__(360.0));
			if (have_a) {
				*a = mu0_false;
			}
		}
		g = mu8_floor_fp128(w / __mu0_fp128_const__(45.0));
		if (have_z) {
			*z = g;
		}
		if (have_a) {
			if (*a == mu0_true) {
				*a = (mu8_ffrac_fp128(g) == mu0_fp128_zero && mu8_ffrac_fp128(w) == mu0_fp128_zero) ? mu0_true : mu0_false;
			}
		}
		r = mu0_const_uint128(g - __mu0_fp128_const__(16.0) * mu8_floor_fp128(g / __mu0_fp128_const__(16.0)));
		if (r & 1) {
			++r;
			g = g + mu0_fp128_one;
		}
		r = (mu0_const_uint128(r) >> 1) & 7;
		g = w - g * __mu0_fp128_const__(45.0);
	}
	*y = g;
	return r;
}

mu0_sint64_t  mu8_rempio2d_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * y, mu0_fp64_t  * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__)
{
	const mu0_bool_t have_z = mu0_is_nullptr(z) ? mu0_false : mu0_true;
	const mu0_bool_t have_a = mu0_is_nullptr(a) ? mu0_false : mu0_true;
	      mu0_fp64_t    g   = mu0_fp64_zero, w;
	      mu0_sint64_t  r   = 0;
	if (have_z) {
		*z = mu0_fp64_zero;
	}
	if (have_a) {
		*a = mu0_true;
	}
	if (mu8_fisval_fp64(x) && x != mu0_fp64_zero) {
		w = x;
		if (mu8_fabs_fp64(x) >= __mu0_fp64_const__(23860928.0)) {
			w = mu8_fmod_fp64(w, __mu0_fp64_const__(360.0));
			if (have_a) {
				*a = mu0_false;
			}
		}
		g = mu8_floor_fp64(w / __mu0_fp64_const__(45.0));
		if (have_z) {
			*z = g;
		}
		if (have_a) {
			if (*a == mu0_true) {
				*a = (mu8_ffrac_fp64(g) == mu0_fp64_zero && mu8_ffrac_fp64(w) == mu0_fp64_zero) ? mu0_true : mu0_false;
			}
		}
		r = mu0_const_uint64(g - __mu0_fp64_const__(16.0) * mu8_floor_fp64(g / __mu0_fp64_const__(16.0)));
		if (r & 1) {
			++r;
			g = g + mu0_fp64_one;
		}
		r = (mu0_const_uint64(r) >> 1) & 7;
		g = w - g * __mu0_fp64_const__(45.0);
	}
	*y = g;
	return r;
}

mu0_sint64_t  mu8_rempio2d_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * y, mu0_fp32_t  * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__)
{
	const mu0_bool_t have_z = mu0_is_nullptr(z) ? mu0_false : mu0_true;
	const mu0_bool_t have_a = mu0_is_nullptr(a) ? mu0_false : mu0_true;
	      mu0_fp32_t    g   = mu0_fp32_zero, w;
	      mu0_sint64_t  r   = 0;
	if (have_z) {
		*z = mu0_fp32_zero;
	}
	if (have_a) {
		*a = mu0_true;
	}
	if (mu8_fisval_fp32(x) && x != mu0_fp32_zero) {
		w = x;
		if (mu8_fabs_fp32(x) >= __mu0_fp32_const__(5826.0)) {
			w = mu8_fmod_fp32(w, __mu0_fp32_const__(360.0));
			if (have_a) {
				*a = mu0_false;
			}
		}
		g = mu8_floor_fp32(w / __mu0_fp32_const__(45.0));
		if (have_z) {
			*z = g;
		}
		if (have_a) {
			if (*a == mu0_true) {
				*a = (mu8_ffrac_fp32(g) == mu0_fp32_zero && mu8_ffrac_fp32(w) == mu0_fp32_zero) ? mu0_true : mu0_false;
			}
		}
		r = mu0_const_uint64(g - __mu0_fp32_const__(16.0) * mu8_floor_fp32(g / __mu0_fp32_const__(16.0)));
		if (r & 1) {
			++r;
			g = g + mu0_fp32_one;
		}
		r = (mu0_const_uint64(r) >> 1) & 7;
		g = w - g * __mu0_fp32_const__(45.0);
	}
	*y = g;
	return r;
}

mu0_sint32_t  mu8_rempio2d_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * y, mu0_fp16_t  * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__)
{
	const mu0_bool_t have_z = mu0_is_nullptr(z) ? mu0_false : mu0_true;
	const mu0_bool_t have_a = mu0_is_nullptr(a) ? mu0_false : mu0_true;
	      mu0_fp16_t    g   = mu0_fp16_zero, w;
	      mu0_sint32_t  r   = 0;
	if (have_z) {
		*z = mu0_fp16_zero;
	}
	if (have_a) {
		*a = mu0_true;
	}
	if (mu8_fisval_fp16(x) && x != mu0_fp16_zero) {
		w = x;
		if (mu8_fabs_fp16(x) >= __mu0_fp16_const__(2914.0)) {
			w = mu8_fmod_fp16(w, __mu0_fp16_const__(360.0));
			if (have_a) {
				*a = mu0_false;
			}
		}
		g = mu8_floor_fp16(w / __mu0_fp16_const__(45.0));
		if (have_z) {
			*z = g;
		}
		if (have_a) {
			if (*a == mu0_true) {
				*a = (mu8_ffrac_fp16(g) == mu0_fp16_zero && mu8_ffrac_fp16(w) == mu0_fp16_zero) ? mu0_true : mu0_false;
			}
		}
		r = mu0_const_uint32(g - __mu0_fp16_const__(16.0) * mu8_floor_fp16(g / __mu0_fp16_const__(16.0)));
		if (r & 1) {
			++r;
			g = g + mu0_fp16_one;
		}
		r = (mu0_const_uint32(r) >> 1) & 7;
		g = w - g * __mu0_fp16_const__(45.0);
	}
	*y = g;
	return r;
}

/* EOF */