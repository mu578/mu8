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

// mu8_complex.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_floating.h>

#ifndef MU8_COMPLEX_H
#define MU8_COMPLEX_H 1

mu0_fp128_t  mu8_cabs_fp128   (const mu0_cfp128_t z);
mu0_fp64_t   mu8_cabs_fp64    (const mu0_cfp64_t  z);
mu0_fp32_t   mu8_cabs_fp32    (const mu0_cfp32_t  z);
mu0_fp16_t   mu8_cabs_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cacos_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_cacos_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cacos_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cacos_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cacosh_fp128 (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_cacosh_fp64  (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cacosh_fp32  (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cacosh_fp16  (const mu0_cfp16_t  z);

mu0_fp128_t  mu8_carg_fp128   (const mu0_cfp128_t z);
mu0_fp64_t   mu8_carg_fp64    (const mu0_cfp64_t  z);
mu0_fp32_t   mu8_carg_fp32    (const mu0_cfp32_t  z);
mu0_fp16_t   mu8_carg_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_casin_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_casin_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_casin_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_casin_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_casinh_fp128 (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_casinh_fp64  (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_casinh_fp32  (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_casinh_fp16  (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_catan_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_catan_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_catan_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_catan_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_catanh_fp128 (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_catanh_fp64  (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_catanh_fp32  (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_catanh_fp16  (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_ccos_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_ccos_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_ccos_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_ccos_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_ccosh_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_ccosh_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_ccosh_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_ccosh_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cexp_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_cexp_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cexp_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cexp_fp16    (const mu0_cfp16_t  z);

mu0_fp128_t  mu8_cimag_fp128  (const mu0_cfp128_t z);
mu0_fp64_t   mu8_cimag_fp64   (const mu0_cfp64_t  z);
mu0_fp32_t   mu8_cimag_fp32   (const mu0_cfp32_t  z);
mu0_fp16_t   mu8_cimag_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_clog_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_clog_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_clog_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_clog_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_conj_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_conj_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_conj_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_conj_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cpow_fp128   (const mu0_cfp128_t x, const mu0_cfp128_t y);
mu0_cfp64_t  mu8_cpow_fp64    (const mu0_cfp64_t  x, const mu0_cfp64_t  y);
mu0_cfp32_t  mu8_cpow_fp32    (const mu0_cfp32_t  x, const mu0_cfp32_t  y);
mu0_cfp16_t  mu8_cpow_fp16    (const mu0_cfp16_t  x, const mu0_cfp16_t  y);

mu0_cfp128_t mu8_cproj_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_cproj_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cproj_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cproj_fp16   (const mu0_cfp16_t  z);

mu0_fp128_t  mu8_creal_fp128  (const mu0_cfp128_t z);
mu0_fp64_t   mu8_creal_fp64   (const mu0_cfp64_t  z);
mu0_fp32_t   mu8_creal_fp32   (const mu0_cfp32_t  z);
mu0_fp16_t   mu8_creal_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_csin_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_csin_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_csin_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_csin_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_csinh_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_csinh_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_csinh_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_csinh_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_csqrt_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_csqrt_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_csqrt_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_csqrt_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_ctan_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_ctan_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_ctan_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_ctan_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_ctanh_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_ctanh_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_ctanh_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_ctanh_fp16   (const mu0_cfp16_t  z);

//#!
//#! complex number arithmetic addition.
//#!

mu0_cfp128_t mu8_cadd_fp128   (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_cadd_fp64    (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cadd_fp32    (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cadd_fp16    (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_csub_fp128   (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_csub_fp64    (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_csub_fp32    (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_csub_fp16    (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cmul_fp128   (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_cmul_fp64    (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cmul_fp32    (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cmul_fp16    (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cdiv_fp128   (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_cdiv_fp64    (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cdiv_fp32    (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cdiv_fp16    (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

MU0_END_CDECL

#endif /* !MU8_COMPLEX_H */

/* EOF */