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
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_sint128_t mu8_rempio2d_fp128 (const mu0_fp128_t x, mu0_fp128_t * z)
{
	mu0_fp128_t   y = mu0_fp128_zero, w;
	mu0_sint128_t r = 0;
	if (mu8_fisval_fp128(x) && x != mu0_fp128_zero) {
		w = x;
		if (mu8_fabs_fp128(x) >= __mu0_fp128_const__(3054198966.0)) {
			w = mu8_fmod_fp128(w, __mu0_fp128_const__(360.0));
		}
		y = mu8_floor_fp128(w / __mu0_fp128_const__(45.0));
		r = mu0_const_uint128(y - __mu0_fp128_const__(16.0) * mu8_floor_fp128(y / __mu0_fp128_const__(16.0)));
		if (r & 1) {
			++r;
			y = y + mu0_fp128_one;
		}
		 r = (mu0_const_uint128(r) >> 1) & 7;
		 y = w - y * __mu0_fp128_const__(45.0);
	}
	*z = y;
	return r;
}

mu0_sint64_t  mu8_rempio2d_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * z)
{
	mu0_fp64_t    y = mu0_fp64_zero, w;
	mu0_sint64_t  r = 0;
	if (mu8_fisval_fp64(x) && x != mu0_fp64_zero) {
		w = x;
		if (mu8_fabs_fp64(x) >= __mu0_fp64_const__(23860928.0)) {
			w = mu8_fmod_fp64(w, __mu0_fp64_const__(360.0));
		}
		y = mu8_floor_fp64(w / __mu0_fp64_const__(45.0));
		r = mu0_const_uint64(y - __mu0_fp64_const__(16.0) * mu8_floor_fp64(y / __mu0_fp64_const__(16.0)));
		if (r & 1) {
			++r;
			y = y + mu0_fp64_one;
		}
		 r = (mu0_const_uint64(r) >> 1) & 7;
		 y = w - y * __mu0_fp64_const__(45.0);
	}
	*z = y;
	return r;
}

mu0_sint64_t  mu8_rempio2d_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * z)
{
	mu0_fp32_t    y = mu0_fp32_zero, w;
	mu0_sint64_t  r = 0;
	if (mu8_fisval_fp32(x) && x != mu0_fp32_zero) {
		w = x;
		if (mu8_fabs_fp32(x) >= __mu0_fp32_const__(5826.0)) {
			w = mu8_fmod_fp32(w, __mu0_fp32_const__(360.0));
		}
		y = mu8_floor_fp32(w / __mu0_fp32_const__(45.0));
		r = mu0_const_uint64(y - __mu0_fp32_const__(16.0) * mu8_floor_fp32(y / __mu0_fp32_const__(16.0)));
		if (r & 1) {
			++r;
			y = y + mu0_fp32_one;
		}
		 r = (mu0_const_uint64(r) >> 1) & 7;
		 y = w - y * __mu0_fp32_const__(45.0);
	}
	*z = y;
	return r;
}

mu0_sint32_t  mu8_rempio2d_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * z)
{
	mu0_fp16_t    y = mu0_fp16_zero, w;
	mu0_sint32_t  r = 0;
	if (mu8_fisval_fp16(x) && x != mu0_fp16_zero) {
		w = x;
		if (mu8_fabs_fp16(x) >= __mu0_fp16_const__(2914.0)) {
			w = mu8_fmod_fp16(w, __mu0_fp16_const__(360.0));
		}
		y = mu8_floor_fp16(w / __mu0_fp16_const__(45.0));
		r = mu0_const_uint32(y - __mu0_fp16_const__(16.0) * mu8_floor_fp16(y / __mu0_fp16_const__(16.0)));
		if (r & 1) {
			++r;
			y = y + mu0_fp16_one;
		}
		 r = (mu0_const_uint32(r) >> 1) & 7;
		 y = w - y * __mu0_fp16_const__(45.0);
	}
	*z = y;
	return r;
}

/* EOF */