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

// mu8_math.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu0/mu0_floating.h>
#include <mu0/mu0_integer.h>

#ifndef MU8_MATH_H
#define MU8_MATH_H 1

MU0_BEGIN_CDECL

mu0_fp128_t  mu8_acos_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_acos_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_acos_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_acos_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_acosh_fp128    (const mu0_fp128_t x);
mu0_fp64_t   mu8_acosh_fp64     (const mu0_fp64_t  x);
mu0_fp32_t   mu8_acosh_fp32     (const mu0_fp32_t  x);
mu0_fp16_t   mu8_acosh_fp16     (const mu0_fp16_t  x);

mu0_fp128_t  mu8_asin_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_asin_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_asin_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_asin_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_asinh_fp128    (const mu0_fp128_t x);
mu0_fp64_t   mu8_asinh_fp64     (const mu0_fp64_t  x);
mu0_fp32_t   mu8_asinh_fp32     (const mu0_fp32_t  x);
mu0_fp16_t   mu8_asinh_fp16     (const mu0_fp16_t  x);

mu0_fp128_t  mu8_atan_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_atan_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_atan_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_atan_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_atan2_fp128    (const mu0_fp128_t y, const mu0_fp128_t x);
mu0_fp64_t   mu8_atan2_fp64     (const mu0_fp64_t  y, const mu0_fp64_t  x);
mu0_fp32_t   mu8_atan2_fp32     (const mu0_fp32_t  y, const mu0_fp32_t  x);
mu0_fp16_t   mu8_atan2_fp16     (const mu0_fp16_t  y, const mu0_fp16_t  x);

mu0_fp128_t  mu8_atanh_fp128    (const mu0_fp128_t x);
mu0_fp64_t   mu8_atanh_fp64     (const mu0_fp64_t  x);
mu0_fp32_t   mu8_atanh_fp32     (const mu0_fp32_t  x);
mu0_fp16_t   mu8_atanh_fp16     (const mu0_fp16_t  x);

mu0_fp128_t  mu8_cbrt_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_cbrt_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_cbrt_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_cbrt_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_ceil_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_ceil_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_ceil_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_ceil_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_copysign_fp128 (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t   mu8_copysign_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t   mu8_copysign_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t   mu8_copysign_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_fp128_t  mu8_cos_fp128      (const mu0_fp128_t x);
mu0_fp64_t   mu8_cos_fp64       (const mu0_fp64_t  x);
mu0_fp32_t   mu8_cos_fp32       (const mu0_fp32_t  x);
mu0_fp16_t   mu8_cos_fp16       (const mu0_fp16_t  x);

mu0_fp128_t  mu8_cosh_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_cosh_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_cosh_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_cosh_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_erf_fp128      (const mu0_fp128_t x);
mu0_fp64_t   mu8_erf_fp64       (const mu0_fp64_t  x);
mu0_fp32_t   mu8_erf_fp32       (const mu0_fp32_t  x);
mu0_fp16_t   mu8_erf_fp16       (const mu0_fp16_t  x);

mu0_fp128_t  mu8_erfc_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_erfc_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_erfc_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_erfc_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_exp_fp128      (const mu0_fp128_t x);
mu0_fp64_t   mu8_exp_fp64       (const mu0_fp64_t  x);
mu0_fp32_t   mu8_exp_fp32       (const mu0_fp32_t  x);
mu0_fp16_t   mu8_exp_fp16       (const mu0_fp16_t  x);

mu0_fp128_t  mu8_exp2_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_exp2_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_exp2_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_exp2_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_expm1_fp128    (const mu0_fp128_t x);
mu0_fp64_t   mu8_expm1_fp64     (const mu0_fp64_t  x);
mu0_fp32_t   mu8_expm1_fp32     (const mu0_fp32_t  x);
mu0_fp16_t   mu8_expm1_fp16     (const mu0_fp16_t  x);

mu0_fp128_t  mu8_fabs_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_fabs_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_fabs_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_fabs_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_fdim_fp128     (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t   mu8_fdim_fp64      (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t   mu8_fdim_fp32      (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t   mu8_fdim_fp16      (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_fp128_t  mu8_floor_fp128    (const mu0_fp128_t x);
mu0_fp64_t   mu8_floor_fp64     (const mu0_fp64_t  x);
mu0_fp32_t   mu8_floor_fp32     (const mu0_fp32_t  x);
mu0_fp16_t   mu8_floor_fp16     (const mu0_fp16_t  x);

mu0_fp128_t  mu8_fma_fp128      (const mu0_fp128_t x, const mu0_fp128_t y, const mu0_fp128_t z);
mu0_fp64_t   mu8_fma_fp64       (const mu0_fp64_t  x, const mu0_fp64_t  y, const mu0_fp64_t  z);
mu0_fp32_t   mu8_fma_fp32       (const mu0_fp32_t  x, const mu0_fp32_t  y, const mu0_fp32_t  z);
mu0_fp16_t   mu8_fma_fp16       (const mu0_fp16_t  x, const mu0_fp16_t  y, const mu0_fp16_t  z);

mu0_fp128_t  mu8_fmax_fp128     (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t   mu8_fmax_fp64      (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t   mu8_fmax_fp32      (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t   mu8_fmax_fp16      (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_fp128_t  mu8_fmin_fp128     (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t   mu8_fmin_fp64      (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t   mu8_fmin_fp32      (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t   mu8_fmin_fp16      (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_fp128_t  mu8_fmod_fp128     (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t   mu8_fmod_fp64      (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t   mu8_fmod_fp32      (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t   mu8_fmod_fp16      (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_fp128_t  mu8_frexp_fp128    (const mu0_fp128_t x, mu0_sint64_t * e);
mu0_fp64_t   mu8_frexp_fp64     (const mu0_fp64_t  x, mu0_sint64_t * e);
mu0_fp32_t   mu8_frexp_fp32     (const mu0_fp32_t  x, mu0_sint64_t * e);
mu0_fp16_t   mu8_frexp_fp16     (const mu0_fp16_t  x, mu0_sint64_t * e);

mu0_fp128_t  mu8_hypot_fp128    (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t   mu8_hypot_fp64     (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t   mu8_hypot_fp32     (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t   mu8_hypot_fp16     (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_sint64_t mu8_ilogb_fp128    (const mu0_fp128_t x);
mu0_sint64_t mu8_ilogb_fp64     (const mu0_fp64_t  x);
mu0_sint64_t mu8_ilogb_fp32     (const mu0_fp32_t  x);
mu0_sint64_t mu8_ilogb_fp16     (const mu0_fp16_t  x);

mu0_sint64_t mu8_irint_fp128    (const mu0_fp128_t x);
mu0_sint64_t mu8_irint_fp64     (const mu0_fp64_t  x);
mu0_sint64_t mu8_irint_fp32     (const mu0_fp32_t  x);
mu0_sint64_t mu8_irint_fp16     (const mu0_fp16_t  x);

mu0_sint64_t mu8_iround_fp128   (const mu0_fp128_t x);
mu0_sint64_t mu8_iround_fp64    (const mu0_fp64_t  x);
mu0_sint64_t mu8_iround_fp32    (const mu0_fp32_t  x);
mu0_sint64_t mu8_iround_fp16    (const mu0_fp16_t  x);

mu0_fp128_t  mu8_j0_fp128       (const mu0_fp128_t x);
mu0_fp64_t   mu8_j0_fp64        (const mu0_fp64_t  x);
mu0_fp32_t   mu8_j0_fp32        (const mu0_fp32_t  x);
mu0_fp16_t   mu8_j0_fp16        (const mu0_fp16_t  x);

mu0_fp128_t  mu8_j1_fp128       (const mu0_fp128_t x);
mu0_fp64_t   mu8_j1_fp64        (const mu0_fp64_t  x);
mu0_fp32_t   mu8_j1_fp32        (const mu0_fp32_t  x);
mu0_fp16_t   mu8_j1_fp16        (const mu0_fp16_t  x);

mu0_fp128_t  mu8_jn_fp128       (const mu0_sint64_t n, const mu0_fp128_t x);
mu0_fp64_t   mu8_jn_fp64        (const mu0_sint64_t n, const mu0_fp64_t  x);
mu0_fp32_t   mu8_jn_fp32        (const mu0_sint64_t n, const mu0_fp32_t  x);
mu0_fp16_t   mu8_jn_fp16        (const mu0_sint64_t n, const mu0_fp16_t  x);

mu0_fp128_t  mu8_ldexp_fp128    (const mu0_fp128_t x, const mu0_sint64_t n);
mu0_fp64_t   mu8_ldexp_fp64     (const mu0_fp64_t  x, const mu0_sint64_t n);
mu0_fp32_t   mu8_ldexp_fp32     (const mu0_fp32_t  x, const mu0_sint64_t n);
mu0_fp16_t   mu8_ldexp_fp16     (const mu0_fp16_t  x, const mu0_sint64_t n);

mu0_fp128_t  mu8_lgamma_fp128   (const mu0_fp128_t x);
mu0_fp64_t   mu8_lgamma_fp64    (const mu0_fp64_t  x);
mu0_fp32_t   mu8_lgamma_fp32    (const mu0_fp32_t  x);
mu0_fp16_t   mu8_lgamma_fp16    (const mu0_fp16_t  x);

mu0_fp128_t  mu8_log_fp128      (const mu0_fp128_t x);
mu0_fp64_t   mu8_log_fp64       (const mu0_fp64_t  x);
mu0_fp32_t   mu8_log_fp32       (const mu0_fp32_t  x);
mu0_fp16_t   mu8_log_fp16       (const mu0_fp16_t  x);

mu0_fp128_t  mu8_log1p_fp128    (const mu0_fp128_t x);
mu0_fp64_t   mu8_log1p_fp64     (const mu0_fp64_t  x);
mu0_fp32_t   mu8_log1p_fp32     (const mu0_fp32_t  x);
mu0_fp16_t   mu8_log1p_fp16     (const mu0_fp16_t  x);

mu0_fp128_t  mu8_log2_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_log2_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_log2_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_log2_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_log10_fp128    (const mu0_fp128_t x);
mu0_fp64_t   mu8_log10_fp64     (const mu0_fp64_t  x);
mu0_fp32_t   mu8_log10_fp32     (const mu0_fp32_t  x);
mu0_fp16_t   mu8_log10_fp16     (const mu0_fp16_t  x);

mu0_fp128_t  mu8_logb_fp128     (const mu0_fp128_t x);
mu0_fp64_t   mu8_logb_fp64      (const mu0_fp64_t  x);
mu0_fp32_t   mu8_logb_fp32      (const mu0_fp32_t  x);
mu0_fp16_t   mu8_logb_fp16      (const mu0_fp16_t  x);

mu0_fp128_t  mu8_y0_fp128       (const mu0_fp128_t x);
mu0_fp64_t   mu8_y0_fp64        (const mu0_fp64_t  x);
mu0_fp32_t   mu8_y0_fp32        (const mu0_fp32_t  x);
mu0_fp16_t   mu8_y0_fp16        (const mu0_fp16_t  x);

mu0_fp128_t  mu8_y1_fp128       (const mu0_fp128_t x);
mu0_fp64_t   mu8_y1_fp64        (const mu0_fp64_t  x);
mu0_fp32_t   mu8_y1_fp32        (const mu0_fp32_t  x);
mu0_fp16_t   mu8_y1_fp16        (const mu0_fp16_t  x);

mu0_fp128_t  mu8_yn_fp128       (const mu0_sint64_t n, const mu0_fp128_t x);
mu0_fp64_t   mu8_yn_fp64        (const mu0_sint64_t n, const mu0_fp64_t  x);
mu0_fp32_t   mu8_yn_fp32        (const mu0_sint64_t n, const mu0_fp32_t  x);
mu0_fp16_t   mu8_yn_fp16        (const mu0_sint64_t n, const mu0_fp16_t  x);

MU0_END_CDECL

#endif /* !MU8_MATH_H */

/* EOF */