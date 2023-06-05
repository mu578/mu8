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

mu0_fp128_t   mu8_2sum_fp128     (const mu0_fp128_t a, const mu0_fp128_t b, mu0_fp128_t * x, mu0_fp128_t * y);
mu0_fp64_t    mu8_2sum_fp64      (const mu0_fp64_t  a, const mu0_fp64_t  b, mu0_fp64_t  * x, mu0_fp64_t  * y);
mu0_fp32_t    mu8_2sum_fp32      (const mu0_fp32_t  a, const mu0_fp32_t  b, mu0_fp32_t  * x, mu0_fp32_t  * y);
mu0_fp16_t    mu8_2sum_fp16      (const mu0_fp16_t  a, const mu0_fp16_t  b, mu0_fp16_t  * x, mu0_fp16_t  * y);

mu0_fp128_t   mu8_acosd_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_acosd_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_acosd_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_acosd_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_acot_fp128     (const mu0_fp128_t x);
mu0_fp64_t    mu8_acot_fp64      (const mu0_fp64_t  x);
mu0_fp32_t    mu8_acot_fp32      (const mu0_fp32_t  x);
mu0_fp16_t    mu8_acot_fp16      (const mu0_fp16_t  x);

mu0_fp128_t   mu8_acotd_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_acotd_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_acotd_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_acotd_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_acoth_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_acoth_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_acoth_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_acoth_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_asind_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_asind_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_asind_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_asind_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_atand_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_atand_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_atand_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_atand_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_cosd_fp128     (const mu0_fp128_t x);
mu0_fp64_t    mu8_cosd_fp64      (const mu0_fp64_t  x);
mu0_fp32_t    mu8_cosd_fp32      (const mu0_fp32_t  x);
mu0_fp16_t    mu8_cosd_fp16      (const mu0_fp16_t  x);

mu0_fp128_t   mu8_cospi_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_cospi_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_cospi_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_cospi_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_cot_fp128      (const mu0_fp128_t x);
mu0_fp64_t    mu8_cot_fp64       (const mu0_fp64_t  x);
mu0_fp32_t    mu8_cot_fp32       (const mu0_fp32_t  x);
mu0_fp16_t    mu8_cot_fp16       (const mu0_fp16_t  x);

mu0_fp128_t   mu8_coth_fp128     (const mu0_fp128_t x);
mu0_fp64_t    mu8_coth_fp64      (const mu0_fp64_t  x);
mu0_fp32_t    mu8_coth_fp32      (const mu0_fp32_t  x);
mu0_fp16_t    mu8_coth_fp16      (const mu0_fp16_t  x);

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

mu0_fp128_t   mu8_exprel_fp128   (const mu0_fp128_t x);
mu0_fp64_t    mu8_exprel_fp64    (const mu0_fp64_t  x);
mu0_fp32_t    mu8_exprel_fp32    (const mu0_fp32_t  x);
mu0_fp16_t    mu8_exprel_fp16    (const mu0_fp16_t  x);

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

mu0_sint128_t mu8_iexp2_fp128    (const mu0_fp128_t e);
mu0_sint64_t  mu8_iexp2_fp64     (const mu0_fp64_t  e);
mu0_sint32_t  mu8_iexp2_fp32     (const mu0_fp32_t  e);
mu0_sint16_t  mu8_iexp2_fp16     (const mu0_fp16_t  e);

mu0_uint128_t mu8_iexpi2_u128    (const mu0_uint128_t e);
mu0_uint64_t  mu8_iexpi2_u64     (const mu0_uint64_t  e);
mu0_uint32_t  mu8_iexpi2_u32     (const mu0_uint32_t  e);
mu0_uint16_t  mu8_iexpi2_u16     (const mu0_uint16_t  e);

mu0_sint128_t mu8_iexpi2_i128    (const mu0_sint128_t e);
mu0_sint64_t  mu8_iexpi2_i64     (const mu0_sint64_t  e);
mu0_sint32_t  mu8_iexpi2_i32     (const mu0_sint32_t  e);
mu0_sint16_t  mu8_iexpi2_i16     (const mu0_sint16_t  e);

mu0_fp128_t   mu8_log1m_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_log1m_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_log1m_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_log1m_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_log1me_fp128   (const mu0_fp128_t x);
mu0_fp64_t    mu8_log1me_fp64    (const mu0_fp64_t  x);
mu0_fp32_t    mu8_log1me_fp32    (const mu0_fp32_t  x);
mu0_fp16_t    mu8_log1me_fp16    (const mu0_fp16_t  x);

mu0_fp128_t   mu8_nthroot_fp128  (const mu0_uint64_t n, const mu0_fp128_t x);
mu0_fp64_t    mu8_nthroot_fp64   (const mu0_uint64_t n, const mu0_fp64_t  x);
mu0_fp32_t    mu8_nthroot_fp32   (const mu0_uint64_t n, const mu0_fp32_t  x);
mu0_fp16_t    mu8_nthroot_fp16   (const mu0_uint64_t n, const mu0_fp16_t  x);

mu0_fp128_t   mu8_pow1pm1_fp128  (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t    mu8_pow1pm1_fp64   (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t    mu8_pow1pm1_fp32   (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t    mu8_pow1pm1_fp16   (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_fp128_t   mu8_powm1_fp128    (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t    mu8_powm1_fp64     (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t    mu8_powm1_fp32     (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t    mu8_powm1_fp16     (const mu0_fp16_t  x, const mu0_fp16_t  y);

mu0_fp128_t   mu8_raise2_fp128   (const mu0_fp128_t x);
mu0_fp64_t    mu8_raise2_fp64    (const mu0_fp64_t  x);
mu0_fp32_t    mu8_raise2_fp32    (const mu0_fp32_t  x);
mu0_fp16_t    mu8_raise2_fp16    (const mu0_fp16_t  x);

mu0_sint128_t mu8_rempio2_fp128  (const mu0_fp128_t x, mu0_fp128_t * z);
mu0_sint64_t  mu8_rempio2_fp64   (const mu0_fp64_t  x, mu0_fp64_t  * z);
mu0_sint64_t  mu8_rempio2_fp32   (const mu0_fp32_t  x, mu0_fp32_t  * z);
mu0_sint32_t  mu8_rempio2_fp16   (const mu0_fp16_t  x, mu0_fp16_t  * z);

mu0_sint128_t mu8_rempio2d_fp128 (const mu0_fp128_t x, mu0_fp128_t * y, mu0_fp128_t * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__);
mu0_sint64_t  mu8_rempio2d_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * y, mu0_fp64_t  * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__);
mu0_sint64_t  mu8_rempio2d_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * y, mu0_fp32_t  * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__);
mu0_sint32_t  mu8_rempio2d_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * y, mu0_fp16_t  * z __mu0_nullable__, mu0_bool_t * a __mu0_nullable__);

void          mu8_sincos_fp128   (const mu0_fp128_t x, mu0_fp128_t * s, mu0_fp128_t * c);
void          mu8_sincos_fp64    (const mu0_fp64_t  x, mu0_fp64_t  * s, mu0_fp64_t  * c);
void          mu8_sincos_fp32    (const mu0_fp32_t  x, mu0_fp32_t  * s, mu0_fp32_t  * c);
void          mu8_sincos_fp16    (const mu0_fp16_t  x, mu0_fp16_t  * s, mu0_fp16_t  * c);

void          mu8_sincosd_fp128  (const mu0_fp128_t x, mu0_fp128_t * s, mu0_fp128_t * c);
void          mu8_sincosd_fp64   (const mu0_fp64_t  x, mu0_fp64_t  * s, mu0_fp64_t  * c);
void          mu8_sincosd_fp32   (const mu0_fp32_t  x, mu0_fp32_t  * s, mu0_fp32_t  * c);
void          mu8_sincosd_fp16   (const mu0_fp16_t  x, mu0_fp16_t  * s, mu0_fp16_t  * c);

void          mu8_sincospi_fp128 (const mu0_fp128_t x, mu0_fp128_t * s, mu0_fp128_t * c);
void          mu8_sincospi_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * s, mu0_fp64_t  * c);
void          mu8_sincospi_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * s, mu0_fp32_t  * c);
void          mu8_sincospi_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * s, mu0_fp16_t  * c);

mu0_fp128_t   mu8_sind_fp128     (const mu0_fp128_t x);
mu0_fp64_t    mu8_sind_fp64      (const mu0_fp64_t  x);
mu0_fp32_t    mu8_sind_fp32      (const mu0_fp32_t  x);
mu0_fp16_t    mu8_sind_fp16      (const mu0_fp16_t  x);

mu0_fp128_t   mu8_sinpi_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_sinpi_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_sinpi_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_sinpi_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_tanpi_fp128    (const mu0_fp128_t x);
mu0_fp64_t    mu8_tanpi_fp64     (const mu0_fp64_t  x);
mu0_fp32_t    mu8_tanpi_fp32     (const mu0_fp32_t  x);
mu0_fp16_t    mu8_tanpi_fp16     (const mu0_fp16_t  x);

mu0_fp128_t   mu8_xlogy_fp128    (const mu0_fp128_t x, const mu0_fp128_t y);
mu0_fp64_t    mu8_xlogy_fp64     (const mu0_fp64_t  x, const mu0_fp64_t  y);
mu0_fp32_t    mu8_xlogy_fp32     (const mu0_fp32_t  x, const mu0_fp32_t  y);
mu0_fp16_t    mu8_xlogy_fp16     (const mu0_fp16_t  x, const mu0_fp16_t  y);

MU0_END_CDECL

#endif /* !MU8_MATH_ANNEX_H */

/* EOF */