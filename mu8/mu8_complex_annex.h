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
// Copyright  (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex.h>

#ifndef MU8_COMPLEX_ANNEX_H
#define MU8_COMPLEX_ANNEX_H 1

mu0_fp128_t  mu8_cabs2_fp128   (const mu0_cfp128_t z);
mu0_fp64_t   mu8_cabs2_fp64    (const mu0_cfp64_t  z);
mu0_fp32_t   mu8_cabs2_fp32    (const mu0_cfp32_t  z);
mu0_fp16_t   mu8_cabs2_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cadd_fp128    (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfpex_t  mu8_cadd_fpex     (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_cfp64_t  mu8_cadd_fp64     (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cadd_fp32     (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cadd_fp16     (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cconj_fp128   (const mu0_cfp128_t z);
mu0_cfpex_t  mu8_cconj_fpex    (const mu0_cfpex_t  z);
mu0_cfp64_t  mu8_cconj_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cconj_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cconj_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cdiv_fp128    (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfpex_t  mu8_cdiv_fpex     (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_cfp64_t  mu8_cdiv_fp64     (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cdiv_fp32     (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cdiv_fp16     (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_bool_t   mu8_ceq_fp128     (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_bool_t   mu8_ceq_fpex      (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_bool_t   mu8_ceq_fp64      (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_bool_t   mu8_ceq_fp32      (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_bool_t   mu8_ceq_fp16      (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cexp2_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_cexp2_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cexp2_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cexp2_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cexp10_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_cexp10_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cexp10_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cexp10_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_cexpm1_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_cexpm1_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_cexpm1_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_cexpm1_fp16   (const mu0_cfp16_t  z);

mu0_bool_t   mu8_cge_fp128     (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_bool_t   mu8_cge_fpex      (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_bool_t   mu8_cge_fp64      (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_bool_t   mu8_cge_fp32      (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_bool_t   mu8_cge_fp16      (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_bool_t   mu8_cgt_fp128     (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_bool_t   mu8_cgt_fpex      (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_bool_t   mu8_cgt_fp64      (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_bool_t   mu8_cgt_fp32      (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_bool_t   mu8_cgt_fp16      (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_bool_t   mu8_cle_fp128     (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_bool_t   mu8_cle_fpex      (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_bool_t   mu8_cle_fp64      (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_bool_t   mu8_cle_fp32      (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_bool_t   mu8_cle_fp16      (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_clog1p_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_clog1p_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_clog1p_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_clog1p_fp16   (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_clog2_fp128   (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_clog2_fp64    (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_clog2_fp32    (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_clog2_fp16    (const mu0_cfp16_t  z);

mu0_cfp128_t mu8_clog10_fp128  (const mu0_cfp128_t z);
mu0_cfp64_t  mu8_clog10_fp64   (const mu0_cfp64_t  z);
mu0_cfp32_t  mu8_clog10_fp32   (const mu0_cfp32_t  z);
mu0_cfp16_t  mu8_clog10_fp16   (const mu0_cfp16_t  z);

mu0_bool_t   mu8_clt_fp128     (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_bool_t   mu8_clt_fpex      (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_bool_t   mu8_clt_fp64      (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_bool_t   mu8_clt_fp32      (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_bool_t   mu8_clt_fp16      (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cmul_fp128    (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfpex_t  mu8_cmul_fpex     (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_cfp64_t  mu8_cmul_fp64     (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_cmul_fp32     (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_cmul_fp16     (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_csub_fp128    (const mu0_cfp128_t a, const mu0_cfp128_t b);
mu0_cfpex_t  mu8_csub_fpex     (const mu0_cfpex_t  a, const mu0_cfpex_t  b);
mu0_cfp64_t  mu8_csub_fp64     (const mu0_cfp64_t  a, const mu0_cfp64_t  b);
mu0_cfp32_t  mu8_csub_fp32     (const mu0_cfp32_t  a, const mu0_cfp32_t  b);
mu0_cfp16_t  mu8_csub_fp16     (const mu0_cfp16_t  a, const mu0_cfp16_t  b);

mu0_cfp128_t mu8_cpolar_fp128  (const mu0_fp128_t rho, const mu0_fp128_t theta);
mu0_cfp64_t  mu8_cpolar_fp64   (const mu0_fp64_t  rho, const mu0_fp64_t  theta);
mu0_cfp32_t  mu8_cpolar_fp32   (const mu0_fp32_t  rho, const mu0_fp32_t  theta);
mu0_cfp16_t  mu8_cpolar_fp16   (const mu0_fp16_t  rho, const mu0_fp16_t  theta);

mu0_fp128_t  mu8_zabs_fp128    (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_zabs_fp64     (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_zabs_fp32     (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_zabs_fp16     (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

mu0_fp128_t  mu8_zabs2_fp128   (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_zabs2_fp64    (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_zabs2_fp32    (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_zabs2_fp16    (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

void         mu8_zacos_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zacos_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zacos_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zacos_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zacosh_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zacosh_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zacosh_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zacosh_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zadd_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zadd_fpex     (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
void         mu8_zadd_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zadd_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zadd_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zadd1_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zadd1_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zadd1_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zadd1_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

mu0_fp128_t  mu8_zarg_fp128    (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_zarg_fp64     (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_zarg_fp32     (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_zarg_fp16     (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

void         mu8_zasin_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zasin_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zasin_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zasin_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zasinh_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zasinh_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zasinh_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zasinh_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zatan_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zatan_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zatan_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zatan_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zatanh_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zatanh_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zatanh_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zatanh_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zconj_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zconj_fpex    (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai);
void         mu8_zconj_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zconj_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zconj_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zconj1_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t a);
void         mu8_zconj1_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  a);
void         mu8_zconj1_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  a);
void         mu8_zconj1_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  a);

void         mu8_zcos_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zcos_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zcos_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zcos_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zcosh_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zcosh_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zcosh_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zcosh_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zdiv_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zdiv_fpex     (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
void         mu8_zdiv_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zdiv_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zdiv_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zdiv1_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zdiv1_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zdiv1_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zdiv1_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

mu0_bool_t   mu8_zeq_fp128     (const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
mu0_bool_t   mu8_zeq_fpex      (const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
mu0_bool_t   mu8_zeq_fp64      (const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
mu0_bool_t   mu8_zeq_fp32      (const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
mu0_bool_t   mu8_zeq_fp16      (const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zexp_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zexp_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zexp_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zexp_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zexp2_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zexp2_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zexp2_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zexp2_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zexp10_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zexp10_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zexp10_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zexp10_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zexpm1_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zexpm1_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zexpm1_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zexpm1_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

mu0_bool_t   mu8_zge_fp128     (const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
mu0_bool_t   mu8_zge_fpex      (const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
mu0_bool_t   mu8_zge_fp64      (const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
mu0_bool_t   mu8_zge_fp32      (const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
mu0_bool_t   mu8_zge_fp16      (const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

mu0_bool_t   mu8_zgt_fp128     (const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
mu0_bool_t   mu8_zgt_fpex      (const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
mu0_bool_t   mu8_zgt_fp64      (const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
mu0_bool_t   mu8_zgt_fp32      (const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
mu0_bool_t   mu8_zgt_fp16      (const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

mu0_bool_t   mu8_zle_fp128     (const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
mu0_bool_t   mu8_zle_fpex      (const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
mu0_bool_t   mu8_zle_fp64      (const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
mu0_bool_t   mu8_zle_fp32      (const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
mu0_bool_t   mu8_zle_fp16      (const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zlog_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zlog_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zlog_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zlog_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zlog1p_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zlog1p_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zlog1p_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zlog1p_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zlog2_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zlog2_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zlog2_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zlog2_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zlog10_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zlog10_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zlog10_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zlog10_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

mu0_bool_t   mu8_zlt_fp128     (const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
mu0_bool_t   mu8_zlt_fpex      (const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
mu0_bool_t   mu8_zlt_fp64      (const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
mu0_bool_t   mu8_zlt_fp32      (const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
mu0_bool_t   mu8_zlt_fp16      (const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

mu0_fp128_t  mu8_zmod_fp128    (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_zmod_fp64     (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_zmod_fp32     (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_zmod_fp16     (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

void         mu8_zmul_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zmul_fpex     (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
void         mu8_zmul_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zmul_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zmul_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zmul1_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zmul1_fpex    (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  b);
void         mu8_zmul1_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zmul1_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zmul1_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

mu0_fp128_t  mu8_znorm_fp128   (const mu0_fp128_t zr, const mu0_fp128_t zi);
mu0_fp64_t   mu8_znorm_fp64    (const mu0_fp64_t  zr, const mu0_fp64_t  zi);
mu0_fp32_t   mu8_znorm_fp32    (const mu0_fp32_t  zr, const mu0_fp32_t  zi);
mu0_fp16_t   mu8_znorm_fp16    (const mu0_fp16_t  zr, const mu0_fp16_t  zi);

void         mu8_zpolar_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t rho, const mu0_fp128_t theta);
void         mu8_zpolar_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  rho, const mu0_fp64_t  theta);
void         mu8_zpolar_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  rho, const mu0_fp32_t  theta);
void         mu8_zpolar_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  rho, const mu0_fp16_t  theta);

void         mu8_zpow_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t xr, const mu0_fp128_t xi, const mu0_fp128_t yr, const mu0_fp128_t yi);
void         mu8_zpow_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  xr, const mu0_fp64_t  xi, const mu0_fp64_t  yr, const mu0_fp64_t  yi);
void         mu8_zpow_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  xr, const mu0_fp32_t  xi, const mu0_fp32_t  yr, const mu0_fp32_t  yi);
void         mu8_zpow_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  xr, const mu0_fp16_t  xi, const mu0_fp16_t  yr, const mu0_fp16_t  yi);

void         mu8_zproj_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zproj_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zproj_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zproj_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zraise2_fp128 (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zraise2_fp64  (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zraise2_fp32  (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zraise2_fp16  (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zsin_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zsin_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zsin_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zsin_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zsinh_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zsinh_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zsinh_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zsinh_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zsqrt_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_zsqrt_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_zsqrt_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_zsqrt_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zsub_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t br, const mu0_fp128_t bi);
void         mu8_zsub_fpex     (mu0_fpex_t  * zr, mu0_fpex_t  * zi, const mu0_fpex_t  ar, const mu0_fpex_t  ai, const mu0_fpex_t  br, const mu0_fpex_t  bi);
void         mu8_zsub_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  br, const mu0_fp64_t  bi);
void         mu8_zsub_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  br, const mu0_fp32_t  bi);
void         mu8_zsub_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  br, const mu0_fp16_t  bi);

void         mu8_zsub1_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai, const mu0_fp128_t b);
void         mu8_zsub1_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai, const mu0_fp64_t  b);
void         mu8_zsub1_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai, const mu0_fp32_t  b);
void         mu8_zsub1_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai, const mu0_fp16_t  b);

void         mu8_ztan_fp128    (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_ztan_fp64     (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_ztan_fp32     (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_ztan_fp16     (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_ztanh_fp128   (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t ar, const mu0_fp128_t ai);
void         mu8_ztanh_fp64    (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  ar, const mu0_fp64_t  ai);
void         mu8_ztanh_fp32    (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  ar, const mu0_fp32_t  ai);
void         mu8_ztanh_fp16    (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  ar, const mu0_fp16_t  ai);

void         mu8_zxlogy_fp128  (mu0_fp128_t * zr, mu0_fp128_t * zi, const mu0_fp128_t xr, const mu0_fp128_t xi, const mu0_fp128_t yr, const mu0_fp128_t yi);
void         mu8_zxlogy_fp64   (mu0_fp64_t  * zr, mu0_fp64_t  * zi, const mu0_fp64_t  xr, const mu0_fp64_t  xi, const mu0_fp64_t  yr, const mu0_fp64_t  yi);
void         mu8_zxlogy_fp32   (mu0_fp32_t  * zr, mu0_fp32_t  * zi, const mu0_fp32_t  xr, const mu0_fp32_t  xi, const mu0_fp32_t  yr, const mu0_fp32_t  yi);
void         mu8_zxlogy_fp16   (mu0_fp16_t  * zr, mu0_fp16_t  * zi, const mu0_fp16_t  xr, const mu0_fp16_t  xi, const mu0_fp16_t  yr, const mu0_fp16_t  yi);

MU0_END_CDECL

#endif /* !MU8_COMPLEX_ANNEX_H */

/* EOF */