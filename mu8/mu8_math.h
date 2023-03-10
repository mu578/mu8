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

mu0_fp128_t mu8_acos_fp128  (const mu0_fp128_t x);
mu0_fp64_t  mu8_acos_fp64   (const mu0_fp64_t  x);
mu0_fp32_t  mu8_acos_fp32   (const mu0_fp32_t  x);
mu0_fp16_t  mu8_acos_fp16   (const mu0_fp16_t  x);

mu0_fp128_t mu8_acosh_fp128 (const mu0_fp128_t x);
mu0_fp64_t  mu8_acosh_fp64  (const mu0_fp64_t  x);
mu0_fp32_t  mu8_acosh_fp32  (const mu0_fp32_t  x);
mu0_fp16_t  mu8_acosh_fp16  (const mu0_fp16_t  x);

mu0_fp128_t mu8_asin_fp128  (const mu0_fp128_t x);
mu0_fp64_t  mu8_asin_fp64   (const mu0_fp64_t  x);
mu0_fp32_t  mu8_asin_fp32   (const mu0_fp32_t  x);
mu0_fp16_t  mu8_asin_fp16   (const mu0_fp16_t  x);

mu0_fp128_t mu8_asinh_fp128 (const mu0_fp128_t x);
mu0_fp64_t  mu8_asinh_fp64  (const mu0_fp64_t  x);
mu0_fp32_t  mu8_asinh_fp32  (const mu0_fp32_t  x);
mu0_fp16_t  mu8_asinh_fp16  (const mu0_fp16_t  x);

mu0_fp128_t mu8_atan_fp128  (const mu0_fp128_t x);
mu0_fp64_t  mu8_atan_fp64   (const mu0_fp64_t  x);
mu0_fp32_t  mu8_atan_fp32   (const mu0_fp32_t  x);
mu0_fp16_t  mu8_atan_fp16   (const mu0_fp16_t  x);

mu0_fp128_t mu8_atan2_fp128 (const mu0_fp128_t y, const mu0_fp128_t x);
mu0_fp64_t  mu8_atan2_fp64  (const mu0_fp64_t  y, const mu0_fp64_t  x);
mu0_fp32_t  mu8_atan2_fp32  (const mu0_fp32_t  y, const mu0_fp32_t  x);
mu0_fp16_t  mu8_atan2_fp16  (const mu0_fp16_t  y, const mu0_fp16_t  x);

mu0_fp128_t mu8_atanh_fp128 (const mu0_fp128_t x);
mu0_fp64_t  mu8_atanh_fp64  (const mu0_fp64_t  x);
mu0_fp32_t  mu8_atanh_fp32  (const mu0_fp32_t  x);
mu0_fp16_t  mu8_atanh_fp16  (const mu0_fp16_t  x);

MU0_END_CDECL

#endif /* !MU8_MATH_H */

/* EOF */