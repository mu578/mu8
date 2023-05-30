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

// mu8_math_annex.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

#ifndef MU8_MATH_ANNEX_H
#define MU8_MATH_ANNEX_H 1

MU0_BEGIN_CDECL

mu0_fp128_t   mu8_cospi_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_cospi_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_cospi_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_cospi_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_exp2m1_fp128   (const mu0_fp128_t x);
mu0_fp64_t    mu8_exp2m1_fp64    (const mu0_fp64_t  x);
mu0_fp32_t    mu8_exp2m1_fp32    (const mu0_fp32_t  x);
mu0_fp16_t    mu8_exp2m1_fp16    (const mu0_fp16_t  x);

mu0_fp128_t   mu8_exp10_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_exp10_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_exp10_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_exp10_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_exp10m1_fp128  (const mu0_fp128_t x);
mu0_fp64_t    mu8_exp10m1_fp64   (const mu0_fp64_t  x);
mu0_fp32_t    mu8_exp10m1_fp32   (const mu0_fp32_t  x);
mu0_fp16_t    mu8_exp10m1_fp16   (const mu0_fp16_t  x);

mu0_fp128_t   mu8_ffrac_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_ffrac_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_ffrac_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_ffrac_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_fhrt_fp128     (const mu0_fp128_t x);
mu0_fp64_t    mu8_fhrt_fp64      (const mu0_fp64_t  x);
mu0_fp32_t    mu8_fhrt_fp32      (const mu0_fp32_t  x);
mu0_fp16_t    mu8_fhrt_fp16      (const mu0_fp16_t  x);

mu0_bool_t    mu8_fisint_fp128   (const mu0_fp128_t x);
mu0_bool_t    mu8_fisint_fp64    (const mu0_fp64_t  x);
mu0_bool_t    mu8_fisint_fp32    (const mu0_fp32_t  x);
mu0_bool_t    mu8_fisint_fp16    (const mu0_fp16_t  x);

mu0_bool_t    mu8_fisneg_fp128   (const mu0_fp128_t x);
mu0_bool_t    mu8_fisneg_fp64    (const mu0_fp64_t  x);
mu0_bool_t    mu8_fisneg_fp32    (const mu0_fp32_t  x);
mu0_bool_t    mu8_fisneg_fp16    (const mu0_fp16_t  x);

mu0_bool_t    mu8_fisodd_fp128   (const mu0_fp128_t x, const mu0_bool_t f);
mu0_bool_t    mu8_fisodd_fp64    (const mu0_fp64_t  x, const mu0_bool_t f);
mu0_bool_t    mu8_fisodd_fp32    (const mu0_fp32_t  x, const mu0_bool_t f);
mu0_bool_t    mu8_fisodd_fp16    (const mu0_fp16_t  x, const mu0_bool_t f);

mu0_bool_t    mu8_fisval_fp128   (const mu0_fp128_t x);
mu0_bool_t    mu8_fisval_fp64    (const mu0_fp64_t  x);
mu0_bool_t    mu8_fisval_fp32    (const mu0_fp32_t  x);
mu0_bool_t    mu8_fisval_fp16    (const mu0_fp16_t  x);

mu0_fp128_t   mu8_nthroot_fp128  (const mu0_uint64_t n, const mu0_fp128_t x);
mu0_fp64_t    mu8_nthroot_fp64   (const mu0_uint64_t n, const mu0_fp64_t  x);
mu0_fp32_t    mu8_nthroot_fp32   (const mu0_uint64_t n, const mu0_fp32_t  x);
mu0_fp16_t    mu8_nthroot_fp16   (const mu0_uint64_t n, const mu0_fp16_t  x);

mu0_fp128_t   mu8_raise2_fp128   (const mu0_fp128_t x);
mu0_fp64_t    mu8_raise2_fp64    (const mu0_fp64_t  x);
mu0_fp32_t    mu8_raise2_fp32    (const mu0_fp32_t  x);
mu0_fp16_t    mu8_raise2_fp16    (const mu0_fp16_t  x);

mu0_sint128_t mu8_rempio2_fp128  (const mu0_fp128_t x, mu0_fp128_t * z);
mu0_sint64_t  mu8_rempio2_fp64   (const mu0_fp64_t  x, mu0_fp64_t  * z);
mu0_sint64_t  mu8_rempio2_fp32   (const mu0_fp32_t  x, mu0_fp32_t  * z);
mu0_sint32_t  mu8_rempio2_fp16   (const mu0_fp16_t  x, mu0_fp16_t  * z);

mu0_sint128_t mu8_rempio2d_fp128 (const mu0_fp128_t x, mu0_fp128_t * z);
mu0_sint64_t  mu8_rempio2d_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * z);
mu0_sint64_t  mu8_rempio2d_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * z);
mu0_sint32_t  mu8_rempio2d_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * z);

mu0_fp128_t   mu8_sinpi_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_sinpi_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_sinpi_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_sinpi_fp16     (const mu0_fp16_t  x);

MU0_END_CDECL

#endif /* !MU8_MATH_ANNEX_H */

/* EOF */