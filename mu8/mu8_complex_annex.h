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

// mu8_complex_annex.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex.h>

#ifndef MU8_COMPLEX_ANNEX_H
#define MU8_COMPLEX_ANNEX_H 1

mu0_fp128_t  mu8_cabs2_fp128 (const mu0_cfp128_t z);
mu0_fp64_t   mu8_cabs2_fp64  (const mu0_cfp64_t  z);
mu0_fp32_t   mu8_cabs2_fp32  (const mu0_cfp32_t  z);
mu0_fp16_t   mu8_cabs2_fp16  (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cadd_fp128  (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_cadd_fp64   (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cadd_fp32   (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cadd_fp16   (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cdiv_fp128  (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_cdiv_fp64   (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cdiv_fp32   (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cdiv_fp16   (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_csub_fp128  (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_csub_fp64   (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_csub_fp32   (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_csub_fp16   (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cmul_fp128  (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfp64_t  mu8_cmul_fp64   (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cmul_fp32   (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cmul_fp16   (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_fp128_t  mu8_zabs_fp128  (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_zabs_fp64   (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_zabs_fp32   (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_zabs_fp16   (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

mu0_fp128_t  mu8_zabs2_fp128 (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_zabs2_fp64  (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_zabs2_fp32  (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_zabs2_fp16  (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

void         mu8_zadd_fp128  (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zadd_fp64   (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zadd_fp32   (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zadd_fp16   (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zadd1_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zadd1_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zadd1_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zadd1_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

void         mu8_zconj_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zconj_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zconj_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zconj_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zdiv_fp128  (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zdiv_fp64   (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zdiv_fp32   (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zdiv_fp16   (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zdiv1_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zdiv1_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zdiv1_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zdiv1_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

void         mu8_zsub_fp128  (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zsub_fp64   (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zsub_fp32   (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zsub_fp16   (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zsub1_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zsub1_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zsub1_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zsub1_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

void         mu8_zmul_fp128  (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zmul_fp64   (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zmul_fp32   (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zmul_fp16   (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zmul1_fp128 (mu0_fp128_t * cr, mu0_fp128_t * ci, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zmul1_fp64  (mu0_fp64_t  * cr, mu0_fp64_t  * ci, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zmul1_fp32  (mu0_fp32_t  * cr, mu0_fp32_t  * ci, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zmul1_fp16  (mu0_fp16_t  * cr, mu0_fp16_t  * ci, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

mu0_fp128_t  mu8_znorm_fp128 (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_znorm_fp64  (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_znorm_fp32  (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_znorm_fp16  (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

mu0_fp128_t  mu8_zmod_fp128  (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_zmod_fp64   (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_zmod_fp32   (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_zmod_fp16   (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

MU0_END_CDECL

#endif /* !MU8_COMPLEX_ANNEX_H */

/* EOF */