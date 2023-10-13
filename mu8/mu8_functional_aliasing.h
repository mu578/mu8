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

// mu8_functional_aliasing.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

#ifndef MU8_FUNCTIONAL_ALIASING_H
#define MU8_FUNCTIONAL_ALIASING_H 1

MU0_BEGIN_CDECL

//#! Compile time strict functional operations compatible with mu7's and mu9's operations.

#	define __mu8_functional_aliasing__(_Tp, __alias) __alias ## _functional_ ## _Tp

#	define __mu8_functional_alias01__(_Tp, __alias, __unary_fn)                               \
	__mu0_static_inline__                                                                     \
	const _Tp __mu8_functional_aliasing__(_Tp, __alias) (const _Tp __a)                       \
	{                                                                                         \
		return __unary_fn(__a);                                                                \
	} __mu0_delineate__

#	define __mu8_functional_alias02__(_Tp, __alias, __binary_fn)                              \
	__mu0_static_inline__                                                                     \
	const _Tp __mu8_functional_aliasing__(_Tp, __alias) (const _Tp __a, const _Tp __b)        \
	{                                                                                         \
		return __binary_fn(__a, __b);                                                          \
	} __mu0_delineate__

#	define __mu8_functional_alias03__(_Tp, __alias, __comp_fn)                                \
	__mu0_static_inline__                                                                     \
	const mu0_bool_t __mu8_functional_aliasing__(_Tp, __alias) (const _Tp __a, const _Tp __b) \
	{                                                                                         \
		return __comp_fn(__a, __b);                                                            \
	} __mu0_delineate__

__mu0_static_inline__ const mu0_bool_t    mu8_eq_cfp128        (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_ceq_fp128  (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_cfp64         (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_ceq_fp64   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_cfp32         (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_ceq_fp32   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_cfp16         (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_ceq_fp16   (__a, __b);         }

__mu0_static_inline__ const mu0_bool_t    mu8_ge_cfp128        (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cge_fp128  (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_cfp64         (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cge_fp64   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_cfp32         (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cge_fp32   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_cfp16         (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cge_fp16   (__a, __b);         }

__mu0_static_inline__ const mu0_bool_t    mu8_gt_cfp128        (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cgt_fp128  (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_cfp64         (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cgt_fp64   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_cfp32         (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cgt_fp32   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_cfp16         (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cgt_fp16   (__a, __b);         }

__mu0_static_inline__ const mu0_bool_t    mu8_le_cfp128        (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cle_fp128  (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_le_cfp64         (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cle_fp64   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_le_cfp32         (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cle_fp32   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_le_cfp16         (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cle_fp16   (__a, __b);         }

__mu0_static_inline__ const mu0_bool_t    mu8_lt_cfp128        (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_clt_fp128  (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_cfp64         (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_clt_fp64   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_cfp32         (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_clt_fp32   (__a, __b);         }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_cfp16         (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_clt_fp16   (__a, __b);         }

__mu0_static_inline__ const mu0_cfp128_t  mu8_conjugate_cfp128 (const mu0_cfp128_t __x)                           { return mu8_cconj_fp128 (__x);             }
__mu0_static_inline__ const mu0_cfp64_t   mu8_conjugate_cfp64  (const mu0_cfp64_t  __x)                           { return mu8_cconj_fp64  (__x);             }
__mu0_static_inline__ const mu0_cfp32_t   mu8_conjugate_cfp32  (const mu0_cfp32_t  __x)                           { return mu8_cconj_fp32  (__x);             }
__mu0_static_inline__ const mu0_cfp16_t   mu8_conjugate_cfp16  (const mu0_cfp16_t  __x)                           { return mu8_cconj_fp16  (__x);             }

__mu0_static_inline__ const mu0_cfp128_t  mu8_add_cfp128       (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cadd_fp128 (__a, __b);         }
__mu0_static_inline__ const mu0_cfp64_t   mu8_add_cfp64        (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cadd_fp64  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp32_t   mu8_add_cfp32        (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cadd_fp32  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp16_t   mu8_add_cfp16        (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cadd_fp16  (__a, __b);         }

__mu0_static_inline__ const mu0_cfp128_t  mu8_div_cfp128       (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cdiv_fp128 (__a, __b);         }
__mu0_static_inline__ const mu0_cfp64_t   mu8_div_cfp64        (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cdiv_fp64  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp32_t   mu8_div_cfp32        (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cdiv_fp32  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp16_t   mu8_div_cfp16        (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cdiv_fp16  (__a, __b);         }

__mu0_static_inline__ const mu0_cfp128_t  mu8_mul_cfp128       (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cmul_fp128 (__a, __b);         }
__mu0_static_inline__ const mu0_cfp64_t   mu8_mul_cfp64        (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cmul_fp64  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp32_t   mu8_mul_cfp32        (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cmul_fp32  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp16_t   mu8_mul_cfp16        (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cmul_fp16  (__a, __b);         }

__mu0_static_inline__ const mu0_cfp128_t  mu8_sub_cfp128       (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_csub_fp128 (__a, __b);         }
__mu0_static_inline__ const mu0_cfp64_t   mu8_sub_cfp64        (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_csub_fp64  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp32_t   mu8_sub_cfp32        (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_csub_fp32  (__a, __b);         }
__mu0_static_inline__ const mu0_cfp16_t   mu8_sub_cfp16        (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_csub_fp16  (__a, __b);         }

__mu0_static_inline__ const mu0_bool_t    mu8_eq_fp128         (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_fp64          (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_fp32          (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_fp16          (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a == __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_ge_fp128         (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_fp64          (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_fp32          (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_fp16          (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a >= __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_gt_fp128         (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_fp64          (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_fp32          (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_fp16          (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a >  __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_le_fp128         (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_fp64          (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_fp32          (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_fp16          (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a <= __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_lt_fp128         (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_fp64          (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_fp32          (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_fp16          (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a <  __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_fp128_t   mu8_conjugate_fp128  (const mu0_fp128_t __x)                            { return __x;                               }
__mu0_static_inline__ const mu0_fp64_t    mu8_conjugate_fp64   (const mu0_fp64_t  __x)                            { return __x;                               }
__mu0_static_inline__ const mu0_fp32_t    mu8_conjugate_fp32   (const mu0_fp32_t  __x)                            { return __x;                               }
__mu0_static_inline__ const mu0_fp16_t    mu8_conjugate_fp16   (const mu0_fp16_t  __x)                            { return __x;                               }

__mu0_static_inline__ const mu0_fp128_t   mu8_add_fp128        (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a + __b;                         }
__mu0_static_inline__ const mu0_fp64_t    mu8_add_fp64         (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a + __b;                         }
__mu0_static_inline__ const mu0_fp32_t    mu8_add_fp32         (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a + __b;                         }
__mu0_static_inline__ const mu0_fp16_t    mu8_add_fp16         (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a + __b;                         }

__mu0_static_inline__ const mu0_fp128_t   mu8_div_fp128        (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a / __b;                         }
__mu0_static_inline__ const mu0_fp64_t    mu8_div_fp64         (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a / __b;                         }
__mu0_static_inline__ const mu0_fp32_t    mu8_div_fp32         (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a / __b;                         }
__mu0_static_inline__ const mu0_fp16_t    mu8_div_fp16         (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a / __b;                         }

__mu0_static_inline__ const mu0_fp128_t   mu8_mul_fp128        (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a * __b;                         }
__mu0_static_inline__ const mu0_fp64_t    mu8_mul_fp64         (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a * __b;                         }
__mu0_static_inline__ const mu0_fp32_t    mu8_mul_fp32         (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a * __b;                         }
__mu0_static_inline__ const mu0_fp16_t    mu8_mul_fp16         (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a * __b;                         }

__mu0_static_inline__ const mu0_fp128_t   mu8_sub_fp128        (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a - __b;                         }
__mu0_static_inline__ const mu0_fp64_t    mu8_sub_fp64         (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a - __b;                         }
__mu0_static_inline__ const mu0_fp32_t    mu8_sub_fp32         (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a - __b;                         }
__mu0_static_inline__ const mu0_fp16_t    mu8_sub_fp16         (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a - __b;                         }

__mu0_static_inline__ const mu0_bool_t    mu8_eq_i128          (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_i64           (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_i32           (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_i16           (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_i8            (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a == __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_ge_i128          (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_i64           (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_i32           (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_i16           (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_i8            (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a >= __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_gt_i128          (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_i64           (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_i32           (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_i16           (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_i8            (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a >  __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_le_i128          (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_i64           (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_i32           (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_i16           (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_i8            (const mu0_sint8_t  __a, const mu0_sint8_t  __b)   { return __a <= __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_lt_i128          (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_i64           (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_i32           (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_i16           (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_i8            (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a <  __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_sint128_t mu8_conjugate_i128   (const mu0_sint128_t __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_sint64_t  mu8_conjugate_i64    (const mu0_sint64_t  __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_sint32_t  mu8_conjugate_i32    (const mu0_sint32_t  __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_sint16_t  mu8_conjugate_i16    (const mu0_sint16_t  __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_sint8_t   mu8_conjugate_i8     (const mu0_sint8_t   __x)                          { return __x;                               }

__mu0_static_inline__ const mu0_sint128_t mu8_add_i128         (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_sint64_t  mu8_add_i64          (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_sint32_t  mu8_add_i32          (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_sint16_t  mu8_add_i16          (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_sint8_t   mu8_add_i8           (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a + __b;                         }

__mu0_static_inline__ const mu0_sint128_t mu8_div_i128         (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_sint64_t  mu8_div_i64          (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_sint32_t  mu8_div_i32          (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_sint16_t  mu8_div_i16          (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_sint8_t   mu8_div_i8           (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a / __b;                         }

__mu0_static_inline__ const mu0_sint128_t mu8_mul_i128         (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_sint64_t  mu8_mul_i64          (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_sint32_t  mu8_mul_i32          (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_sint16_t  mu8_mul_i16          (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_sint8_t   mu8_mul_i8           (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a * __b;                         }

__mu0_static_inline__ const mu0_sint128_t mu8_sub_i128         (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_sint64_t  mu8_sub_i64          (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_sint32_t  mu8_sub_i32          (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_sint16_t  mu8_sub_i16          (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_sint8_t   mu8_sub_i8           (const mu0_sint8_t   __a, const mu0_sint8_t   __b) { return __a - __b;                         }

__mu0_static_inline__ const mu0_bool_t    mu8_eq_u128          (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_u64           (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_u32           (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_u16           (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a == __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_eq_u8            (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a == __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_ge_u128          (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_u64           (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_u32           (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_u16           (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a >= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_ge_u8            (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a >= __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_gt_u128          (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_u64           (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_u32           (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_u16           (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a >  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_gt_u8            (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a >  __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_le_u128          (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_u64           (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_u32           (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_u16           (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a <= __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_le_u8            (const mu0_uint8_t  __a, const mu0_uint8_t  __b)   { return __a <= __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_bool_t    mu8_lt_u128          (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_u64           (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_u32           (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_u16           (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a <  __b ? mu0_true : mu0_false; }
__mu0_static_inline__ const mu0_bool_t    mu8_lt_u8            (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a <  __b ? mu0_true : mu0_false; }

__mu0_static_inline__ const mu0_uint128_t mu8_conjugate_u128   (const mu0_uint128_t __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_uint64_t  mu8_conjugate_u64    (const mu0_uint64_t  __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_uint32_t  mu8_conjugate_u32    (const mu0_uint32_t  __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_uint16_t  mu8_conjugate_u16    (const mu0_uint16_t  __x)                          { return __x;                               }
__mu0_static_inline__ const mu0_uint8_t   mu8_conjugate_u8     (const mu0_uint8_t   __x)                          { return __x;                               }

__mu0_static_inline__ const mu0_uint128_t mu8_add_u128         (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_uint64_t  mu8_add_u64          (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_uint32_t  mu8_add_u32          (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_uint16_t  mu8_add_u16          (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a + __b;                         }
__mu0_static_inline__ const mu0_uint8_t   mu8_add_u8           (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a + __b;                         }

__mu0_static_inline__ const mu0_uint128_t mu8_div_u128         (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_uint64_t  mu8_div_u64          (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_uint32_t  mu8_div_u32          (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_uint16_t  mu8_div_u16          (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a / __b;                         }
__mu0_static_inline__ const mu0_uint8_t   mu8_div_u8           (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a / __b;                         }

__mu0_static_inline__ const mu0_uint128_t mu8_mul_u128         (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_uint64_t  mu8_mul_u64          (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_uint32_t  mu8_mul_u32          (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_uint16_t  mu8_mul_u16          (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a * __b;                         }
__mu0_static_inline__ const mu0_uint8_t   mu8_mul_u8           (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a * __b;                         }

__mu0_static_inline__ const mu0_uint128_t mu8_sub_u128         (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_uint64_t  mu8_sub_u64          (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_uint32_t  mu8_sub_u32          (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_uint16_t  mu8_sub_u16          (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a - __b;                         }
__mu0_static_inline__ const mu0_uint8_t   mu8_sub_u8           (const mu0_uint8_t   __a, const mu0_uint8_t   __b) { return __a - __b;                         }

__mu8_functional_alias03__(mu0_cfp128_t , mu8_alias_eq  , mu8_eq_cfp128);
__mu8_functional_alias03__(mu0_cfp64_t  , mu8_alias_eq  , mu8_eq_cfp64 );
__mu8_functional_alias03__(mu0_cfp32_t  , mu8_alias_eq  , mu8_eq_cfp32 );
__mu8_functional_alias03__(mu0_cfp16_t  , mu8_alias_eq  , mu8_eq_cfp16 );

__mu8_functional_alias03__(mu0_cfp128_t , mu8_alias_ge  , mu8_ge_cfp128);
__mu8_functional_alias03__(mu0_cfp64_t  , mu8_alias_ge  , mu8_ge_cfp64 );
__mu8_functional_alias03__(mu0_cfp32_t  , mu8_alias_ge  , mu8_ge_cfp32 );
__mu8_functional_alias03__(mu0_cfp16_t  , mu8_alias_ge  , mu8_ge_cfp16 );

__mu8_functional_alias03__(mu0_cfp128_t , mu8_alias_gt  , mu8_gt_cfp128);
__mu8_functional_alias03__(mu0_cfp64_t  , mu8_alias_gt  , mu8_gt_cfp64 );
__mu8_functional_alias03__(mu0_cfp32_t  , mu8_alias_gt  , mu8_gt_cfp32 );
__mu8_functional_alias03__(mu0_cfp16_t  , mu8_alias_gt  , mu8_gt_cfp16 );

__mu8_functional_alias03__(mu0_cfp128_t , mu8_alias_le  , mu8_le_cfp128);
__mu8_functional_alias03__(mu0_cfp64_t  , mu8_alias_le  , mu8_le_cfp64 );
__mu8_functional_alias03__(mu0_cfp32_t  , mu8_alias_le  , mu8_le_cfp32 );
__mu8_functional_alias03__(mu0_cfp16_t  , mu8_alias_le  , mu8_le_cfp16 );

__mu8_functional_alias03__(mu0_cfp128_t , mu8_alias_lt  , mu8_lt_cfp128);
__mu8_functional_alias03__(mu0_cfp64_t  , mu8_alias_lt  , mu8_lt_cfp64 );
__mu8_functional_alias03__(mu0_cfp32_t  , mu8_alias_lt  , mu8_lt_cfp32 );
__mu8_functional_alias03__(mu0_cfp16_t  , mu8_alias_lt  , mu8_lt_cfp16 );

__mu8_functional_alias01__(mu0_cfp128_t , mu8_alias_conj, mu8_conjugate_cfp128);
__mu8_functional_alias01__(mu0_cfp64_t  , mu8_alias_conj, mu8_conjugate_cfp64 );
__mu8_functional_alias01__(mu0_cfp32_t  , mu8_alias_conj, mu8_conjugate_cfp32 );
__mu8_functional_alias01__(mu0_cfp16_t  , mu8_alias_conj, mu8_conjugate_cfp16 );

__mu8_functional_alias02__(mu0_cfp128_t , mu8_alias_add , mu8_add_cfp128);
__mu8_functional_alias02__(mu0_cfp64_t  , mu8_alias_add , mu8_add_cfp64 );
__mu8_functional_alias02__(mu0_cfp32_t  , mu8_alias_add , mu8_add_cfp32 );
__mu8_functional_alias02__(mu0_cfp16_t  , mu8_alias_add , mu8_add_cfp16 );

__mu8_functional_alias02__(mu0_cfp128_t , mu8_alias_div , mu8_div_cfp128);
__mu8_functional_alias02__(mu0_cfp64_t  , mu8_alias_div , mu8_div_cfp64 );
__mu8_functional_alias02__(mu0_cfp32_t  , mu8_alias_div , mu8_div_cfp32 );
__mu8_functional_alias02__(mu0_cfp16_t  , mu8_alias_div , mu8_div_cfp16 );

__mu8_functional_alias02__(mu0_cfp128_t , mu8_alias_mul , mu8_mul_cfp128);
__mu8_functional_alias02__(mu0_cfp64_t  , mu8_alias_mul , mu8_mul_cfp64 );
__mu8_functional_alias02__(mu0_cfp32_t  , mu8_alias_mul , mu8_mul_cfp32 );
__mu8_functional_alias02__(mu0_cfp16_t  , mu8_alias_mul , mu8_mul_cfp16 );

__mu8_functional_alias02__(mu0_cfp128_t , mu8_alias_sub , mu8_sub_cfp128);
__mu8_functional_alias02__(mu0_cfp64_t  , mu8_alias_sub , mu8_sub_cfp64 );
__mu8_functional_alias02__(mu0_cfp32_t  , mu8_alias_sub , mu8_sub_cfp32 );
__mu8_functional_alias02__(mu0_cfp16_t  , mu8_alias_sub , mu8_sub_cfp16 );

__mu8_functional_alias03__(mu0_fp128_t  , mu8_alias_eq  , mu8_eq_fp128);
__mu8_functional_alias03__(mu0_fp64_t   , mu8_alias_eq  , mu8_eq_fp64 );
__mu8_functional_alias03__(mu0_fp32_t   , mu8_alias_eq  , mu8_eq_fp32 );
__mu8_functional_alias03__(mu0_fp16_t   , mu8_alias_eq  , mu8_eq_fp16 );

__mu8_functional_alias03__(mu0_fp128_t  , mu8_alias_ge  , mu8_ge_fp128);
__mu8_functional_alias03__(mu0_fp64_t   , mu8_alias_ge  , mu8_ge_fp64 );
__mu8_functional_alias03__(mu0_fp32_t   , mu8_alias_ge  , mu8_ge_fp32 );
__mu8_functional_alias03__(mu0_fp16_t   , mu8_alias_ge  , mu8_ge_fp16 );

__mu8_functional_alias03__(mu0_fp128_t  , mu8_alias_gt  , mu8_gt_fp128);
__mu8_functional_alias03__(mu0_fp64_t   , mu8_alias_gt  , mu8_gt_fp64 );
__mu8_functional_alias03__(mu0_fp32_t   , mu8_alias_gt  , mu8_gt_fp32 );
__mu8_functional_alias03__(mu0_fp16_t   , mu8_alias_gt  , mu8_gt_fp16 );

__mu8_functional_alias03__(mu0_fp128_t  , mu8_alias_le  , mu8_le_fp128);
__mu8_functional_alias03__(mu0_fp64_t   , mu8_alias_le  , mu8_le_fp64 );
__mu8_functional_alias03__(mu0_fp32_t   , mu8_alias_le  , mu8_le_fp32 );
__mu8_functional_alias03__(mu0_fp16_t   , mu8_alias_le  , mu8_le_fp16 );

__mu8_functional_alias03__(mu0_fp128_t  , mu8_alias_lt  , mu8_lt_fp128);
__mu8_functional_alias03__(mu0_fp64_t   , mu8_alias_lt  , mu8_lt_fp64 );
__mu8_functional_alias03__(mu0_fp32_t   , mu8_alias_lt  , mu8_lt_fp32 );
__mu8_functional_alias03__(mu0_fp16_t   , mu8_alias_lt  , mu8_lt_fp16 );

__mu8_functional_alias01__(mu0_fp128_t  , mu8_alias_conj, mu8_conjugate_fp128);
__mu8_functional_alias01__(mu0_fp64_t   , mu8_alias_conj, mu8_conjugate_fp64);
__mu8_functional_alias01__(mu0_fp32_t   , mu8_alias_conj, mu8_conjugate_fp32);
__mu8_functional_alias01__(mu0_fp16_t   , mu8_alias_conj, mu8_conjugate_fp16);

__mu8_functional_alias02__(mu0_fp128_t  , mu8_alias_add , mu8_add_fp128);
__mu8_functional_alias02__(mu0_fp64_t   , mu8_alias_add , mu8_add_fp64 );
__mu8_functional_alias02__(mu0_fp32_t   , mu8_alias_add , mu8_add_fp32 );
__mu8_functional_alias02__(mu0_fp16_t   , mu8_alias_add , mu8_add_fp16 );

__mu8_functional_alias02__(mu0_fp128_t  , mu8_alias_div , mu8_div_fp128);
__mu8_functional_alias02__(mu0_fp64_t   , mu8_alias_div , mu8_div_fp64 );
__mu8_functional_alias02__(mu0_fp32_t   , mu8_alias_div , mu8_div_fp32 );
__mu8_functional_alias02__(mu0_fp16_t   , mu8_alias_div , mu8_div_fp16 );

__mu8_functional_alias02__(mu0_fp128_t  , mu8_alias_mul , mu8_mul_fp128);
__mu8_functional_alias02__(mu0_fp64_t   , mu8_alias_mul , mu8_mul_fp64 );
__mu8_functional_alias02__(mu0_fp32_t   , mu8_alias_mul , mu8_mul_fp32 );
__mu8_functional_alias02__(mu0_fp16_t   , mu8_alias_mul , mu8_mul_fp16 );

__mu8_functional_alias02__(mu0_fp128_t  , mu8_alias_sub , mu8_sub_fp128);
__mu8_functional_alias02__(mu0_fp64_t   , mu8_alias_sub , mu8_sub_fp64 );
__mu8_functional_alias02__(mu0_fp32_t   , mu8_alias_sub , mu8_sub_fp32 );
__mu8_functional_alias02__(mu0_fp16_t   , mu8_alias_sub , mu8_sub_fp16 );

__mu8_functional_alias03__(mu0_sint128_t, mu8_alias_eq  , mu8_eq_i128);
__mu8_functional_alias03__(mu0_sint64_t , mu8_alias_eq  , mu8_eq_i64 );
__mu8_functional_alias03__(mu0_sint32_t , mu8_alias_eq  , mu8_eq_i32 );
__mu8_functional_alias03__(mu0_sint16_t , mu8_alias_eq  , mu8_eq_i16 );
__mu8_functional_alias03__(mu0_sint8_t  , mu8_alias_eq  , mu8_eq_i8  );

__mu8_functional_alias03__(mu0_sint128_t , mu8_alias_ge , mu8_ge_i128);
__mu8_functional_alias03__(mu0_sint64_t  , mu8_alias_ge , mu8_ge_i64 );
__mu8_functional_alias03__(mu0_sint32_t  , mu8_alias_ge , mu8_ge_i32 );
__mu8_functional_alias03__(mu0_sint16_t  , mu8_alias_ge , mu8_ge_i16 );
__mu8_functional_alias03__(mu0_sint8_t   , mu8_alias_ge , mu8_ge_i8 );

__mu8_functional_alias03__(mu0_sint128_t , mu8_alias_gt , mu8_gt_i128);
__mu8_functional_alias03__(mu0_sint64_t  , mu8_alias_gt , mu8_gt_i64 );
__mu8_functional_alias03__(mu0_sint32_t  , mu8_alias_gt , mu8_gt_i32 );
__mu8_functional_alias03__(mu0_sint16_t  , mu8_alias_gt , mu8_gt_i16 );
__mu8_functional_alias03__(mu0_sint8_t   , mu8_alias_gt , mu8_gt_i8  );

__mu8_functional_alias03__(mu0_sint128_t , mu8_alias_le , mu8_le_i128);
__mu8_functional_alias03__(mu0_sint64_t  , mu8_alias_le , mu8_le_i64 );
__mu8_functional_alias03__(mu0_sint32_t  , mu8_alias_le , mu8_le_i32 );
__mu8_functional_alias03__(mu0_sint16_t  , mu8_alias_le , mu8_le_i16 );
__mu8_functional_alias03__(mu0_sint8_t   , mu8_alias_le , mu8_le_i8  );

__mu8_functional_alias03__(mu0_sint128_t , mu8_alias_lt , mu8_lt_i128);
__mu8_functional_alias03__(mu0_sint64_t  , mu8_alias_lt , mu8_lt_i64 );
__mu8_functional_alias03__(mu0_sint32_t  , mu8_alias_lt , mu8_lt_i32 );
__mu8_functional_alias03__(mu0_sint16_t  , mu8_alias_lt , mu8_lt_i16 );
__mu8_functional_alias03__(mu0_sint8_t   , mu8_alias_lt , mu8_lt_i8 );

__mu8_functional_alias01__(mu0_sint128_t, mu8_alias_conj, mu8_conjugate_i128);
__mu8_functional_alias01__(mu0_sint64_t , mu8_alias_conj, mu8_conjugate_i64 );
__mu8_functional_alias01__(mu0_sint32_t , mu8_alias_conj, mu8_conjugate_i32 );
__mu8_functional_alias01__(mu0_sint16_t , mu8_alias_conj, mu8_conjugate_i16 );
__mu8_functional_alias01__(mu0_sint8_t  , mu8_alias_conj, mu8_conjugate_i8  );

__mu8_functional_alias02__(mu0_sint128_t, mu8_alias_add , mu8_add_i128);
__mu8_functional_alias02__(mu0_sint64_t , mu8_alias_add , mu8_add_i64 );
__mu8_functional_alias02__(mu0_sint32_t , mu8_alias_add , mu8_add_i32 );
__mu8_functional_alias02__(mu0_sint16_t , mu8_alias_add , mu8_add_i16 );
__mu8_functional_alias02__(mu0_sint8_t  , mu8_alias_add , mu8_add_i8  );

__mu8_functional_alias02__(mu0_sint128_t, mu8_alias_div , mu8_div_i128);
__mu8_functional_alias02__(mu0_sint64_t , mu8_alias_div , mu8_div_i64 );
__mu8_functional_alias02__(mu0_sint32_t , mu8_alias_div , mu8_div_i32 );
__mu8_functional_alias02__(mu0_sint16_t , mu8_alias_div , mu8_div_i16 );
__mu8_functional_alias02__(mu0_sint8_t  , mu8_alias_div , mu8_div_i8  );

__mu8_functional_alias02__(mu0_sint128_t, mu8_alias_mul , mu8_mul_i128);
__mu8_functional_alias02__(mu0_sint64_t , mu8_alias_mul , mu8_mul_i64 );
__mu8_functional_alias02__(mu0_sint32_t , mu8_alias_mul , mu8_mul_i32 );
__mu8_functional_alias02__(mu0_sint16_t , mu8_alias_mul , mu8_mul_i16 );
__mu8_functional_alias02__(mu0_sint8_t  , mu8_alias_mul , mu8_mul_i8 );

__mu8_functional_alias02__(mu0_sint128_t, mu8_alias_sub , mu8_sub_i128);
__mu8_functional_alias02__(mu0_sint64_t , mu8_alias_sub , mu8_sub_i64 );
__mu8_functional_alias02__(mu0_sint32_t , mu8_alias_sub , mu8_sub_i32 );
__mu8_functional_alias02__(mu0_sint16_t , mu8_alias_sub , mu8_sub_i16 );
__mu8_functional_alias02__(mu0_sint8_t  , mu8_alias_sub , mu8_sub_i8  );

__mu8_functional_alias03__(mu0_uint128_t, mu8_alias_eq  , mu8_eq_u128);
__mu8_functional_alias03__(mu0_uint64_t , mu8_alias_eq  , mu8_eq_u64 );
__mu8_functional_alias03__(mu0_uint32_t , mu8_alias_eq  , mu8_eq_u32 );
__mu8_functional_alias03__(mu0_uint16_t , mu8_alias_eq  , mu8_eq_u16 );
__mu8_functional_alias03__(mu0_uint8_t  , mu8_alias_eq  , mu8_eq_u8  );

__mu8_functional_alias03__(mu0_uint128_t , mu8_alias_ge , mu8_ge_u128);
__mu8_functional_alias03__(mu0_uint64_t  , mu8_alias_ge , mu8_ge_u64 );
__mu8_functional_alias03__(mu0_uint32_t  , mu8_alias_ge , mu8_ge_u32 );
__mu8_functional_alias03__(mu0_uint16_t  , mu8_alias_ge , mu8_ge_u16 );
__mu8_functional_alias03__(mu0_uint8_t   , mu8_alias_ge , mu8_ge_u8 );

__mu8_functional_alias03__(mu0_uint128_t , mu8_alias_gt , mu8_gt_u128);
__mu8_functional_alias03__(mu0_uint64_t  , mu8_alias_gt , mu8_gt_u64 );
__mu8_functional_alias03__(mu0_uint32_t  , mu8_alias_gt , mu8_gt_u32 );
__mu8_functional_alias03__(mu0_uint16_t  , mu8_alias_gt , mu8_gt_u16 );
__mu8_functional_alias03__(mu0_uint8_t   , mu8_alias_gt , mu8_gt_u8  );

__mu8_functional_alias03__(mu0_uint128_t , mu8_alias_le , mu8_le_u128);
__mu8_functional_alias03__(mu0_uint64_t  , mu8_alias_le , mu8_le_u64 );
__mu8_functional_alias03__(mu0_uint32_t  , mu8_alias_le , mu8_le_u32 );
__mu8_functional_alias03__(mu0_uint16_t  , mu8_alias_le , mu8_le_u16 );
__mu8_functional_alias03__(mu0_uint8_t   , mu8_alias_le , mu8_le_u8  );

__mu8_functional_alias03__(mu0_uint128_t , mu8_alias_lt , mu8_lt_u128);
__mu8_functional_alias03__(mu0_uint64_t  , mu8_alias_lt , mu8_lt_u64 );
__mu8_functional_alias03__(mu0_uint32_t  , mu8_alias_lt , mu8_lt_u32 );
__mu8_functional_alias03__(mu0_uint16_t  , mu8_alias_lt , mu8_lt_u16 );
__mu8_functional_alias03__(mu0_uint8_t   , mu8_alias_lt , mu8_lt_u8 );

__mu8_functional_alias01__(mu0_uint128_t, mu8_alias_conj, mu8_conjugate_u128);
__mu8_functional_alias01__(mu0_uint64_t , mu8_alias_conj, mu8_conjugate_u64 );
__mu8_functional_alias01__(mu0_uint32_t , mu8_alias_conj, mu8_conjugate_u32 );
__mu8_functional_alias01__(mu0_uint16_t , mu8_alias_conj, mu8_conjugate_u16 );
__mu8_functional_alias01__(mu0_uint8_t  , mu8_alias_conj, mu8_conjugate_u8  );

__mu8_functional_alias02__(mu0_uint128_t, mu8_alias_add , mu8_add_u128);
__mu8_functional_alias02__(mu0_uint64_t , mu8_alias_add , mu8_add_u64 );
__mu8_functional_alias02__(mu0_uint32_t , mu8_alias_add , mu8_add_u32 );
__mu8_functional_alias02__(mu0_uint16_t , mu8_alias_add , mu8_add_u16 );
__mu8_functional_alias02__(mu0_uint8_t  , mu8_alias_add , mu8_add_u8  );

__mu8_functional_alias02__(mu0_uint128_t, mu8_alias_div , mu8_div_u128);
__mu8_functional_alias02__(mu0_uint64_t , mu8_alias_div , mu8_div_u64 );
__mu8_functional_alias02__(mu0_uint32_t , mu8_alias_div , mu8_div_u32 );
__mu8_functional_alias02__(mu0_uint16_t , mu8_alias_div , mu8_div_u16 );
__mu8_functional_alias02__(mu0_uint8_t  , mu8_alias_div , mu8_div_u8  );

__mu8_functional_alias02__(mu0_uint128_t, mu8_alias_mul , mu8_mul_u128);
__mu8_functional_alias02__(mu0_uint64_t , mu8_alias_mul , mu8_mul_u64 );
__mu8_functional_alias02__(mu0_uint32_t , mu8_alias_mul , mu8_mul_u32 );
__mu8_functional_alias02__(mu0_uint16_t , mu8_alias_mul , mu8_mul_u16 );
__mu8_functional_alias02__(mu0_uint8_t  , mu8_alias_mul , mu8_mul_u8 );

__mu8_functional_alias02__(mu0_uint128_t, mu8_alias_sub , mu8_sub_u128);
__mu8_functional_alias02__(mu0_uint64_t , mu8_alias_sub , mu8_sub_u64 );
__mu8_functional_alias02__(mu0_uint32_t , mu8_alias_sub , mu8_sub_u32 );
__mu8_functional_alias02__(mu0_uint16_t , mu8_alias_sub , mu8_sub_u16 );
__mu8_functional_alias02__(mu0_uint8_t  , mu8_alias_sub , mu8_sub_u8  );

#	define mu8_alias_eq(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_eq)(__a, __b)

#	define mu8_alias_ge(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_ge)(__a, __b)

#	define mu8_alias_gt(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_gt)(__a, __b)

#	define mu8_alias_le(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_le)(__a, __b)

#	define mu8_alias_lt(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_lt)(__a, __b)

#	define mu8_alias_conj(_Tp, __x) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_conj)(__x)

#	define mu8_alias_add(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_add)(__a, __b)

#	define mu8_alias_div(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_div)(__a, __b)

#	define mu8_alias_mul(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_mul)(__a, __b)

#	define mu8_alias_sub(_Tp, __a, __b) \
	__mu8_functional_aliasing__(_Tp, mu8_alias_sub)(__a, __b)

MU0_END_CDECL

#endif /* !MU8_FUNCTIONAL_ALIASING_H */

/* EOF */