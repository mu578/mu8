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

mu0_fp128_t mu8_exp10_fp128  (const mu0_fp128_t x);
mu0_fp64_t  mu8_exp10_fp64   (const mu0_fp64_t  x);
mu0_fp32_t  mu8_exp10_fp32   (const mu0_fp32_t  x);
mu0_fp16_t  mu8_exp10_fp16   (const mu0_fp16_t  x);

mu0_fp128_t mu8_raise2_fp128 (const mu0_fp128_t x);
mu0_fp64_t  mu8_raise2_fp64  (const mu0_fp64_t  x);
mu0_fp32_t  mu8_raise2_fp32  (const mu0_fp32_t  x);
mu0_fp16_t  mu8_raise2_fp16  (const mu0_fp16_t  x);

MU0_END_CDECL

#endif /* !MU8_MATH_ANNEX_H */

/* EOF */