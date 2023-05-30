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

// mu8_rempio2.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_sint128_t mu8_rempio2_fp128 (const mu0_fp128_t x, mu0_fp128_t * z)
{
	mu0_fp128_t   y = x, w;
	mu0_sint128_t r = 0;
	*z              = mu0_fp128_zero;
	if (mu8_fisval_fp128(y)) {
		if (mu8_fabs_fp128(y) <= __mu0_fp128_const__(0.25)) {
			 r = 0;
			*z = y;
		} else if (mu8_fisint_fp128(y)) {
			if (mu8_fisodd_fp128(y, mu0_false)) {
				r = 2;
			}
		} else {
			y = __mu0_fp128_const__(0.5) * y;
			y = mu0_fp128_two * (y - mu8_floor_fp128(y));
			w = mu8_floor_fp128(__mu0_fp128_const__(4.0) * y);
			r = mu0_const_sint128(w - __mu0_fp128_const__(16.0) * mu8_floor_fp128(w / __mu0_fp128_const__(16.0)));
			if (r < (mu0_sint128_max - 1)) {
				if (r & 1) {
					++r;
					w = w + mu0_fp128_one;
				}
				 r = (mu0_const_uint128(r) >> 1) & 7;
				*z = y - __mu0_fp128_const__(0.25) * w;
			} else {
				 r = 0;
				*z = y;
			}
		}
	}
	return r;
}

mu0_sint64_t  mu8_rempio2_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * z)
{
	mu0_fp64_t    y = x, w;
	mu0_sint64_t  r = 0;
	*z              = mu0_fp64_zero;
	if (mu8_fisval_fp64(y)) {
		if (mu8_fabs_fp64(y) <= __mu0_fp64_const__(0.25)) {
			 r = 0;
			*z = y;
		} else if (mu8_fisint_fp64(y)) {
			if (mu8_fisodd_fp64(y, mu0_false)) {
				r = 2;
			}
		} else {
			y = __mu0_fp64_const__(0.5) * y;
			y = mu0_fp64_two * (y - mu8_floor_fp64(y));
			w = mu8_floor_fp64(__mu0_fp64_const__(4.0) * y);
			r = mu0_const_sint64(w - __mu0_fp64_const__(16.0) * mu8_floor_fp64(w / __mu0_fp64_const__(16.0)));
			if (r < (mu0_sint64_max - 1)) {
				if (r & 1) {
					++r;
					w = w + mu0_fp64_one;
				}
				 r = (mu0_const_uint64(r) >> 1) & 7;
				*z = y - __mu0_fp64_const__(0.25) * w;
			} else {
				 r = 0;
				*z = y;
			}
		}
	}
	return r;
}

mu0_sint64_t  mu8_rempio2_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * z)
{
	mu0_fp32_t    y = x, w;
	mu0_sint64_t  r = 0;
	*z              = mu0_fp32_zero;
	if (mu8_fisval_fp32(y)) {
		if (mu8_fabs_fp32(y) <= __mu0_fp32_const__(0.25)) {
			 r = 0;
			*z = y;
		} else if (mu8_fisint_fp32(y)) {
			if (mu8_fisodd_fp32(y, mu0_false)) {
				r = 2;
			}
		} else {
			y = __mu0_fp32_const__(0.5) * y;
			y = mu0_fp32_two * (y - mu8_floor_fp32(y));
			w = mu8_floor_fp32(__mu0_fp32_const__(4.0) * y);
			r = mu0_const_sint64(w - __mu0_fp32_const__(16.0) * mu8_floor_fp32(w / __mu0_fp32_const__(16.0)));
			if (r < (mu0_sint64_max - 1)) {
				if (r & 1) {
					++r;
					w = w + mu0_fp32_one;
				}
				 r = (mu0_const_uint64(r) >> 1) & 7;
				*z = y - __mu0_fp32_const__(0.25) * w;
			} else {
				 r = 0;
				*z = y;
			}
		}
	}
	return r;
}

mu0_sint32_t  mu8_rempio2_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * z)
{
	mu0_fp16_t    y = x, w;
	mu0_sint32_t  r = 0;
	*z              = mu0_fp16_zero;
	if (mu8_fisval_fp16(y)) {
		if (mu8_fabs_fp16(y) <= __mu0_fp16_const__(0.25)) {
			 r = 0;
			*z = y;
		} else if (mu8_fisint_fp16(y)) {
			if (mu8_fisodd_fp16(y, mu0_false)) {
				r = 2;
			}
		} else {
			y = __mu0_fp16_const__(0.5) * y;
			y = mu0_fp16_two * (y - mu8_floor_fp16(y));
			w = mu8_floor_fp16(__mu0_fp16_const__(4.0) * y);
			r = mu0_const_sint32(w - __mu0_fp16_const__(16.0) * mu8_floor_fp16(w / __mu0_fp16_const__(16.0)));
			if (r < (mu0_sint32_max - 1)) {
				if (r & 1) {
					++r;
					w = w + mu0_fp16_one;
				}
				 r = (mu0_const_uint32(r) >> 1) & 7;
				*z = y - __mu0_fp16_const__(0.25) * w;
			} else {
				 r = 0;
				*z = y;
			}
		}
	}
	return r;
}

/* EOF */