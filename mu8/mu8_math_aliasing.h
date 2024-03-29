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

// mu8_math_aliasing.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

#ifndef MU8_MATH_ALIASING_H
#define MU8_MATH_ALIASING_H 1

MU0_BEGIN_CDECL

//#! Compile time strict functional operations compatible with mu7's and mu9's operations.
//#! @see mu8_functional_aliasing.h and mu8_functional.h for similar technic.

#	define __mu8_math_aliasing__(_Tp, __alias) __alias ## _math_ ## _Tp

#	define __mu8_math_alias01__(_Tp, __alias, __unary_fn)                                            \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a)                                    \
	{                                                                                                \
		return __unary_fn(__a);                                                                       \
	} __mu0_delineate__

#	define __mu8_math_alias02__(_Tp, __alias, __binary_fn)                                           \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a, const _Tp __b)                     \
	{                                                                                                \
		return __binary_fn(__a, __b);                                                                 \
	} __mu0_delineate__

#	define __mu8_math_alias03__(_Tp, __alias, __trinary_fn)                                          \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a, const _Tp __b, const _Tp __c)      \
	{                                                                                                \
		return __trinary_fn(__a, __b, __c);                                                           \
	} __mu0_delineate__

#	define __mu8_math_alias04__(_Tp, __alias, __binary_fn)                                           \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a, mu0_sint64_t * __b)                \
	{                                                                                                \
		return __binary_fn(__a, __b);                                                                 \
	} __mu0_delineate__

#	define __mu8_math_alias05__(_Tp, __alias, __unary_fn)                                            \
	__mu0_static_inline__                                                                            \
	const mu0_sint64_t __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a)                           \
	{                                                                                                \
		return __unary_fn(__a);                                                                       \
	} __mu0_delineate__

#	define __mu8_math_alias06__(_Tp, __alias, __binary_fn)                                           \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const mu0_sint64_t __a, const _Tp __b)            \
	{                                                                                                \
		return __binary_fn(__a, __b);                                                                 \
	} __mu0_delineate__

#	define __mu8_math_alias07__(_Tp, __alias, __binary_fn)                                           \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a, const mu0_sint64_t __b)            \
	{                                                                                                \
		return __binary_fn(__a, __b);                                                                 \
	} __mu0_delineate__

#	define __mu8_math_alias08__(_Tp, __alias, __binary_fn)                                           \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a, _Tp * __b)                         \
	{                                                                                                \
		return __binary_fn(__a, __b);                                                                 \
	} __mu0_delineate__

#	define __mu8_math_alias09__(_Tp, __alias, __unary_fn)                                            \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const mu0_tchar8_t * __a)                         \
	{                                                                                                \
		return __unary_fn(__a);                                                                       \
	} __mu0_delineate__

#	define __mu8_math_alias10__(_Tp, __alias, __trinary_fn)                                          \
	__mu0_static_inline__                                                                            \
	const _Tp __mu8_math_aliasing__(_Tp, __alias) (const _Tp __a, const _Tp __b, mu0_sint64_t * __c) \
	{                                                                                                \
		return __trinary_fn(__a, __b, __c);                                                           \
	} __mu0_delineate__

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_acos      , mu8_acos_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_acos      , mu8_acos_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_acos      , mu8_acos_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_acos      , mu8_acos_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_acosh     , mu8_acosh_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_acosh     , mu8_acosh_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_acosh     , mu8_acosh_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_acosh     , mu8_acosh_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_asin      , mu8_asin_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_asin      , mu8_asin_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_asin      , mu8_asin_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_asin      , mu8_asin_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_asinh     , mu8_asinh_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_asinh     , mu8_asinh_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_asinh     , mu8_asinh_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_asinh     , mu8_asinh_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_atan      , mu8_atan_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_atan      , mu8_atan_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_atan      , mu8_atan_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_atan      , mu8_atan_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_atan2     , mu8_atan2_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_atan2     , mu8_atan2_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_atan2     , mu8_atan2_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_atan2     , mu8_atan2_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_atanh     , mu8_atanh_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_atanh     , mu8_atanh_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_atanh     , mu8_atanh_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_atanh     , mu8_atanh_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_cbrt      , mu8_cbrt_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_cbrt      , mu8_cbrt_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_cbrt      , mu8_cbrt_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_cbrt      , mu8_cbrt_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_ceil      , mu8_ceil_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_ceil      , mu8_ceil_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_ceil      , mu8_ceil_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_ceil      , mu8_ceil_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_copysign  , mu8_copysign_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_copysign  , mu8_copysign_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_copysign  , mu8_copysign_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_copysign  , mu8_copysign_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_cos       , mu8_cos_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_cos       , mu8_cos_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_cos       , mu8_cos_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_cos       , mu8_cos_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_cosh      , mu8_cosh_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_cosh      , mu8_cosh_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_cosh      , mu8_cosh_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_cosh      , mu8_cosh_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_erf       , mu8_erf_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_erf       , mu8_erf_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_erf       , mu8_erf_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_erf       , mu8_erf_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_erfc      , mu8_erfc_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_erfc      , mu8_erfc_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_erfc      , mu8_erfc_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_erfc      , mu8_erfc_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_exp       , mu8_exp_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_exp       , mu8_exp_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_exp       , mu8_exp_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_exp       , mu8_exp_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_exp2      , mu8_exp2_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_exp2      , mu8_exp2_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_exp2      , mu8_exp2_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_exp2      , mu8_exp2_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_expm1     , mu8_expm1_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_expm1     , mu8_expm1_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_expm1     , mu8_expm1_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_expm1     , mu8_expm1_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_fabs      , mu8_fabs_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_fabs      , mu8_fabs_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_fabs      , mu8_fabs_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_fabs      , mu8_fabs_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_fdim      , mu8_fdim_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_fdim      , mu8_fdim_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_fdim      , mu8_fdim_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_fdim      , mu8_fdim_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_floor     , mu8_floor_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_floor     , mu8_floor_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_floor     , mu8_floor_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_floor     , mu8_floor_fp16 );

__mu8_math_alias03__(mu0_fp128_t, mu8_alias_fma       , mu8_fma_fp128);
__mu8_math_alias03__(mu0_fp64_t , mu8_alias_fma       , mu8_fma_fp64 );
__mu8_math_alias03__(mu0_fp32_t , mu8_alias_fma       , mu8_fma_fp32 );
__mu8_math_alias03__(mu0_fp16_t , mu8_alias_fma       , mu8_fma_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_fmax      , mu8_fmax_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_fmax      , mu8_fmax_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_fmax      , mu8_fmax_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_fmax      , mu8_fmax_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_fmin      , mu8_fmin_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_fmin      , mu8_fmin_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_fmin      , mu8_fmin_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_fmin      , mu8_fmin_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_fmod      , mu8_fmod_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_fmod      , mu8_fmod_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_fmod      , mu8_fmod_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_fmod      , mu8_fmod_fp16 );

__mu8_math_alias04__(mu0_fp128_t, mu8_alias_frexp     , mu8_frexp_fp128);
__mu8_math_alias04__(mu0_fp64_t , mu8_alias_frexp     , mu8_frexp_fp64 );
__mu8_math_alias04__(mu0_fp32_t , mu8_alias_frexp     , mu8_frexp_fp32 );
__mu8_math_alias04__(mu0_fp16_t , mu8_alias_frexp     , mu8_frexp_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_hypot     , mu8_hypot_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_hypot     , mu8_hypot_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_hypot     , mu8_hypot_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_hypot     , mu8_hypot_fp16 );

__mu8_math_alias05__(mu0_fp128_t, mu8_alias_ilogb     , mu8_ilogb_fp128);
__mu8_math_alias05__(mu0_fp64_t , mu8_alias_ilogb     , mu8_ilogb_fp64 );
__mu8_math_alias05__(mu0_fp32_t , mu8_alias_ilogb     , mu8_ilogb_fp32 );
__mu8_math_alias05__(mu0_fp16_t , mu8_alias_ilogb     , mu8_ilogb_fp16 );

__mu8_math_alias05__(mu0_fp128_t, mu8_alias_irint     , mu8_irint_fp128);
__mu8_math_alias05__(mu0_fp64_t , mu8_alias_irint     , mu8_irint_fp64 );
__mu8_math_alias05__(mu0_fp32_t , mu8_alias_irint     , mu8_irint_fp32 );
__mu8_math_alias05__(mu0_fp16_t , mu8_alias_irint     , mu8_irint_fp16 );

__mu8_math_alias05__(mu0_fp128_t, mu8_alias_iround    , mu8_iround_fp128);
__mu8_math_alias05__(mu0_fp64_t , mu8_alias_iround    , mu8_iround_fp64 );
__mu8_math_alias05__(mu0_fp32_t , mu8_alias_iround    , mu8_iround_fp32 );
__mu8_math_alias05__(mu0_fp16_t , mu8_alias_iround    , mu8_iround_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_j0        , mu8_j0_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_j0        , mu8_j0_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_j0        , mu8_j0_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_j0        , mu8_j0_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_j1        , mu8_j1_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_j1        , mu8_j1_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_j1        , mu8_j1_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_j1        , mu8_j1_fp16 );

__mu8_math_alias06__(mu0_fp128_t, mu8_alias_jn        , mu8_jn_fp128);
__mu8_math_alias06__(mu0_fp64_t , mu8_alias_jn        , mu8_jn_fp64 );
__mu8_math_alias06__(mu0_fp32_t , mu8_alias_jn        , mu8_jn_fp32 );
__mu8_math_alias06__(mu0_fp16_t , mu8_alias_jn        , mu8_jn_fp16 );

__mu8_math_alias07__(mu0_fp128_t, mu8_alias_ldexp     , mu8_ldexp_fp128);
__mu8_math_alias07__(mu0_fp64_t , mu8_alias_ldexp     , mu8_ldexp_fp64 );
__mu8_math_alias07__(mu0_fp32_t , mu8_alias_ldexp     , mu8_ldexp_fp32 );
__mu8_math_alias07__(mu0_fp16_t , mu8_alias_ldexp     , mu8_ldexp_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_lgamma    , mu8_lgamma_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_lgamma    , mu8_lgamma_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_lgamma    , mu8_lgamma_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_lgamma    , mu8_lgamma_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_log       , mu8_log_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_log       , mu8_log_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_log       , mu8_log_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_log       , mu8_log_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_log1p     , mu8_log1p_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_log1p     , mu8_log1p_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_log1p     , mu8_log1p_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_log1p     , mu8_log1p_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_log2      , mu8_log2_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_log2      , mu8_log2_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_log2      , mu8_log2_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_log2      , mu8_log2_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_log10     , mu8_log10_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_log10     , mu8_log10_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_log10     , mu8_log10_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_log10     , mu8_log10_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_logb      , mu8_logb_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_logb      , mu8_logb_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_logb      , mu8_logb_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_logb      , mu8_logb_fp16 );

__mu8_math_alias08__(mu0_fp128_t, mu8_alias_modf      , mu8_modf_fp128);
__mu8_math_alias08__(mu0_fp64_t , mu8_alias_modf      , mu8_modf_fp64 );
__mu8_math_alias08__(mu0_fp32_t , mu8_alias_modf      , mu8_modf_fp32 );
__mu8_math_alias08__(mu0_fp16_t , mu8_alias_modf      , mu8_modf_fp16 );

__mu8_math_alias09__(mu0_fp128_t, mu8_alias_nan       , mu8_nan_fp128);
__mu8_math_alias09__(mu0_fp64_t , mu8_alias_nan       , mu8_nan_fp64 );
__mu8_math_alias09__(mu0_fp32_t , mu8_alias_nan       , mu8_nan_fp32 );
__mu8_math_alias09__(mu0_fp16_t , mu8_alias_nan       , mu8_nan_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_nearbyint , mu8_nearbyint_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_nearbyint , mu8_nearbyint_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_nearbyint , mu8_nearbyint_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_nearbyint , mu8_nearbyint_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_nextafter , mu8_nextafter_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_nextafter , mu8_nextafter_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_nextafter , mu8_nextafter_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_nextafter , mu8_nextafter_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_nexttoward, mu8_nexttoward_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_nexttoward, mu8_nexttoward_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_nexttoward, mu8_nexttoward_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_nexttoward, mu8_nexttoward_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_pow       , mu8_pow_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_pow       , mu8_pow_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_pow       , mu8_pow_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_pow       , mu8_pow_fp16 );

__mu8_math_alias02__(mu0_fp128_t, mu8_alias_remainder , mu8_remainder_fp128);
__mu8_math_alias02__(mu0_fp64_t , mu8_alias_remainder , mu8_remainder_fp64 );
__mu8_math_alias02__(mu0_fp32_t , mu8_alias_remainder , mu8_remainder_fp32 );
__mu8_math_alias02__(mu0_fp16_t , mu8_alias_remainder , mu8_remainder_fp16 );

__mu8_math_alias10__(mu0_fp128_t, mu8_alias_remquo    , mu8_remquo_fp128);
__mu8_math_alias10__(mu0_fp64_t , mu8_alias_remquo    , mu8_remquo_fp64 );
__mu8_math_alias10__(mu0_fp32_t , mu8_alias_remquo    , mu8_remquo_fp32 );
__mu8_math_alias10__(mu0_fp16_t , mu8_alias_remquo    , mu8_remquo_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_rint      , mu8_rint_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_rint      , mu8_rint_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_rint      , mu8_rint_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_rint      , mu8_rint_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_round     , mu8_round_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_round     , mu8_round_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_round     , mu8_round_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_round     , mu8_round_fp16 );

__mu8_math_alias07__(mu0_fp128_t, mu8_alias_scalbn    , mu8_scalbn_fp128);
__mu8_math_alias07__(mu0_fp64_t , mu8_alias_scalbn    , mu8_scalbn_fp64 );
__mu8_math_alias07__(mu0_fp32_t , mu8_alias_scalbn    , mu8_scalbn_fp32 );
__mu8_math_alias07__(mu0_fp16_t , mu8_alias_scalbn    , mu8_scalbn_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_sin       , mu8_sin_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_sin       , mu8_sin_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_sin       , mu8_sin_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_sin       , mu8_sin_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_sinh      , mu8_sinh_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_sinh      , mu8_sinh_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_sinh      , mu8_sinh_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_sinh      , mu8_sinh_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_sqrt      , mu8_sqrt_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_sqrt      , mu8_sqrt_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_sqrt      , mu8_sqrt_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_sqrt      , mu8_sqrt_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_tan       , mu8_tan_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_tan       , mu8_tan_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_tan       , mu8_tan_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_tan       , mu8_tan_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_tanh      , mu8_tanh_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_tanh      , mu8_tanh_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_tanh      , mu8_tanh_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_tanh      , mu8_tanh_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_tgamma    , mu8_tgamma_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_tgamma    , mu8_tgamma_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_tgamma    , mu8_tgamma_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_tgamma    , mu8_tgamma_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_trunc     , mu8_trunc_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_trunc     , mu8_trunc_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_trunc     , mu8_trunc_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_trunc     , mu8_trunc_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_y0        , mu8_y0_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_y0        , mu8_y0_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_y0        , mu8_y0_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_y0        , mu8_y0_fp16 );

__mu8_math_alias01__(mu0_fp128_t, mu8_alias_y1        , mu8_y1_fp128);
__mu8_math_alias01__(mu0_fp64_t , mu8_alias_y1        , mu8_y1_fp64 );
__mu8_math_alias01__(mu0_fp32_t , mu8_alias_y1        , mu8_y1_fp32 );
__mu8_math_alias01__(mu0_fp16_t , mu8_alias_y1        , mu8_y1_fp16 );

__mu8_math_alias06__(mu0_fp128_t, mu8_alias_yn        , mu8_yn_fp128);
__mu8_math_alias06__(mu0_fp64_t , mu8_alias_yn        , mu8_yn_fp64 );
__mu8_math_alias06__(mu0_fp32_t , mu8_alias_yn        , mu8_yn_fp32 );
__mu8_math_alias06__(mu0_fp16_t , mu8_alias_yn        , mu8_yn_fp16 );

#	define mu8_alias_acos(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_acos)(__x)

#	define mu8_alias_acosh(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_acosh)(__x)

#	define mu8_alias_asin(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_asin)(__x)

#	define mu8_alias_asinh(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_asinh)(__x)

#	define mu8_alias_atan(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_atan)(__x)

#	define mu8_alias_atan2(_Tp, __y, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_atan2)(__y, __x)

#	define mu8_alias_atanh(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_atanh)(__x)

#	define mu8_alias_cbrt(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_cbrt)(__x)

#	define mu8_alias_ceil(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_ceil)(__x)

#	define mu8_alias_copysign(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_copysign)(__x, __y)

#	define mu8_alias_cos(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_cos)(__x)

#	define mu8_alias_cosh(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_cosh)(__x)

#	define mu8_alias_erf(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_erf)(__x)

#	define mu8_alias_erfc(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_erfc)(__x)

#	define mu8_alias_exp(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_exp)(__x)

#	define mu8_alias_exp2(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_exp2)(__x)

#	define mu8_alias_expm1(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_expm1)(__x)

#	define mu8_alias_fabs(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_fabs)(__x)

#	define mu8_alias_fdim(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_fdim)(__x, __y)

#	define mu8_alias_floor(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_floor)(__x)

#	define mu8_alias_fma(_Tp, __x, __y, __z) \
	__mu8_math_aliasing__(_Tp, mu8_alias_fma)(__x, __y, __z)

#	define mu8_alias_fmax(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_fmax)(__x, __y)

#	define mu8_alias_fmin(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_fmin)(__x, __y)

#	define mu8_alias_fmod(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_fmod)(__x, __y)

#	define mu8_alias_frexp(_Tp, __x, __e) \
	__mu8_math_aliasing__(_Tp, mu8_alias_frexp)(__x, __e)

#	define mu8_alias_hypot(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_hypot)(__x, __y)

#	define mu8_alias_ilogb(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_ilogb)(__x)

#	define mu8_alias_irint(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_irint)(__x)

#	define mu8_alias_iround(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_iround)(__x)

#	define mu8_alias_j0(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_j0)(__x)

#	define mu8_alias_j1(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_j1)(__x)

#	define mu8_alias_jn(_Tp, __n, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_j1)(__n, __x)

#	define mu8_alias_ldexp(_Tp, __x, __n) \
	__mu8_math_aliasing__(_Tp, mu8_alias_ldexp)(__x, __n)

#	define mu8_alias_lgamma(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_lgamma)(__x)

#	define mu8_alias_log(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_log)(__x)

#	define mu8_alias_log1p(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_log1p)(__x)

#	define mu8_alias_log2(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_log2)(__x)

#	define mu8_alias_log10(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_log10)(__x)

#	define mu8_alias_logb(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_logb)(__x)

#	define mu8_alias_modf(_Tp, __x, __f) \
	__mu8_math_aliasing__(_Tp, mu8_alias_modf)(__x, __f)

#	define mu8_alias_nan(_Tp, __s) \
	__mu8_math_aliasing__(_Tp, mu8_alias_nan)(__s)

#	define mu8_alias_nearbyint(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_nearbyint)(__x)

#	define mu8_alias_nextafter(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_nextafter)(__x, __y)

#	define mu8_alias_nexttoward(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_nexttoward)(__x, __y)

#	define mu8_alias_pow(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_pow)(__x, __y)

#	define mu8_alias_remainder(_Tp, __x, __y) \
	__mu8_math_aliasing__(_Tp, mu8_alias_remainder)(__x, __y)

#	define mu8_alias_remquo(_Tp, __x, __y, __q) \
	__mu8_math_aliasing__(_Tp, mu8_alias_remquo)(__x, __y, __q)

#	define mu8_alias_rint(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_rint)(__x)

#	define mu8_alias_round(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_round)(__x)

#	define mu8_alias_scalbn(_Tp, __x, __n) \
	__mu8_math_aliasing__(_Tp, mu8_alias_scalbn)(__x, __n)

#	define mu8_alias_sin(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_sin)(__x)

#	define mu8_alias_sinh(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_sinh)(__x)

#	define mu8_alias_sqrt(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_sqrt)(__x)

#	define mu8_alias_tan(_Tp, __x) \
	__mu8_aliatang__(_Tp, mu8_alias_tan)(__x)

#	define mu8_alias_tanh(_Tp, __x) \
	__mu8_aliatang__(_Tp, mu8_alias_tanh)(__x)

#	define mu8_alias_tgamma(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_tgamma)(__x)

#	define mu8_alias_trunc(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_trunc)(__x)

#	define mu8_alias_y0(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_y0)(__x)

#	define mu8_alias_y1(_Tp, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_y1)(__x)

#	define mu8_alias_yn(_Tp, __n, __x) \
	__mu8_math_aliasing__(_Tp, mu8_alias_y1)(__n, __x)

MU0_END_CDECL

#endif /* !MU8_MATH_ALIASING_H */

/* EOF */