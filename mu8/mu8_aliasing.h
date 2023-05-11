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

// __mu8_aliasing__.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

#ifndef MU8_ALIASING_H
#define MU8_ALIASING_H 1

MU0_BEGIN_CDECL

#	define __mu8_aliasing__(_Tp, __alias) __alias ## _ ## _Tp

#	define __mu8_alias1__(_Tp, __alias, __unary_fn)    \
	__mu0_static_inline__                              \
	_Tp __mu8_aliasing__(_Tp, __alias) (const _Tp __a) \
	{                                                  \
		return __unary_fn(__a);                         \
	} __mu0_delineate__

#	define __mu8_alias2__(_Tp, __alias, __binary_fn)                  \
	__mu0_static_inline__                                             \
	_Tp __mu8_aliasing__(_Tp, __alias) (const _Tp __a, const _Tp __b) \
	{                                                                 \
		return __binary_fn(__a, __b);                                  \
	} __mu0_delineate__

#	define __mu8_alias3__(_Tp, __alias, __trinary_fn)                                \
	__mu0_static_inline__                                                            \
	_Tp __mu8_aliasing__(_Tp, __alias) (const _Tp __a, const _Tp __b, const _Tp __c) \
	{                                                                                \
		return __trinary_fn(__a, __b, __c);                                           \
	} __mu0_delineate__

#	define __mu8_alias4__(_Tp, Sint, __alias, __binary_fn)                 \
	__mu0_static_inline__                                                  \
	_Tp __mu8_aliasing__(_Tp, __alias) (const _Tp __a, mu0_sint32_t * __b) \
	{                                                                      \
		return __binary_fn(__a, __b);                                       \
	} __mu0_delineate__

__mu8_alias1__(mu0_fp128_t, mu8_alias_acos    , mu8_acos_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_acos    , mu8_acos_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_acos    , mu8_acos_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_acos    , mu8_acos_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_acos    , mu8_acosh_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_acosh   , mu8_acosh_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_acosh   , mu8_acosh_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_acosh   , mu8_acosh_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_asin    , mu8_asin_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_asin    , mu8_asin_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_asin    , mu8_asin_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_asin    , mu8_asin_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_asinh   , mu8_asinh_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_asinh   , mu8_asinh_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_asinh   , mu8_asinh_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_asinh   , mu8_asinh_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_atan    , mu8_atan_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_atan    , mu8_atan_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_atan    , mu8_atan_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_atan    , mu8_atan_fp16 );

__mu8_alias2__(mu0_fp128_t, mu8_alias_atan2   , mu8_atan2_fp128);
__mu8_alias2__(mu0_fp64_t , mu8_alias_atan2   , mu8_atan2_fp64 );
__mu8_alias2__(mu0_fp32_t , mu8_alias_atan2   , mu8_atan2_fp32 );
__mu8_alias2__(mu0_fp16_t , mu8_alias_atan2   , mu8_atan2_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_atanh   , mu8_atanh_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_atanh   , mu8_atanh_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_atanh   , mu8_atanh_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_atanh   , mu8_atanh_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_cbrt    , mu8_cbrt_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_cbrt    , mu8_cbrt_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_cbrt    , mu8_cbrt_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_cbrt    , mu8_cbrt_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_ceil    , mu8_ceil_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_ceil    , mu8_ceil_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_ceil    , mu8_ceil_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_ceil    , mu8_ceil_fp16 );

__mu8_alias2__(mu0_fp128_t, mu8_alias_copysign, mu8_copysign_fp128);
__mu8_alias2__(mu0_fp64_t , mu8_alias_copysign, mu8_copysign_fp64 );
__mu8_alias2__(mu0_fp32_t , mu8_alias_copysign, mu8_copysign_fp32 );
__mu8_alias2__(mu0_fp16_t , mu8_alias_copysign, mu8_copysign_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_cos     , mu8_cos_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_cos     , mu8_cos_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_cos     , mu8_cos_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_cos     , mu8_cos_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_cosh    , mu8_cosh_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_cosh    , mu8_cosh_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_cosh    , mu8_cosh_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_cosh    , mu8_cosh_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_erf     , mu8_erf_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_erf     , mu8_erf_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_erf     , mu8_erf_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_erf     , mu8_erf_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_erfc    , mu8_erfc_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_erfc    , mu8_erfc_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_erfc    , mu8_erfc_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_erfc    , mu8_erfc_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_exp     , mu8_exp_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_exp     , mu8_exp_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_exp     , mu8_exp_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_exp     , mu8_exp_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_exp2    , mu8_exp2_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_exp2    , mu8_exp2_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_exp2    , mu8_exp2_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_exp2    , mu8_exp2_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_expm1   , mu8_expm1_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_expm1   , mu8_expm1_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_expm1   , mu8_expm1_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_expm1   , mu8_expm1_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_fabs    , mu8_fabs_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_fabs    , mu8_fabs_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_fabs    , mu8_fabs_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_fabs    , mu8_fabs_fp16 );

__mu8_alias2__(mu0_fp128_t, mu8_alias_fdim    , mu8_fdim_fp128);
__mu8_alias2__(mu0_fp64_t , mu8_alias_fdim    , mu8_fdim_fp64 );
__mu8_alias2__(mu0_fp32_t , mu8_alias_fdim    , mu8_fdim_fp32 );
__mu8_alias2__(mu0_fp16_t , mu8_alias_fdim    , mu8_fdim_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_floor   , mu8_floor_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_floor   , mu8_floor_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_floor   , mu8_floor_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_floor   , mu8_floor_fp16 );

__mu8_alias3__(mu0_fp128_t, mu8_alias_fma     , mu8_fma_fp128);
__mu8_alias3__(mu0_fp64_t , mu8_alias_fma     , mu8_fma_fp64 );
__mu8_alias3__(mu0_fp32_t , mu8_alias_fma     , mu8_fma_fp32 );
__mu8_alias3__(mu0_fp16_t , mu8_alias_fma     , mu8_fma_fp16 );

__mu8_alias2__(mu0_fp128_t, mu8_alias_fmax    , mu8_fmax_fp128);
__mu8_alias2__(mu0_fp64_t , mu8_alias_fmax    , mu8_fmax_fp64 );
__mu8_alias2__(mu0_fp32_t , mu8_alias_fmax    , mu8_fmax_fp32 );
__mu8_alias2__(mu0_fp16_t , mu8_alias_fmax    , mu8_fmax_fp16 );

__mu8_alias2__(mu0_fp128_t, mu8_alias_fmin    , mu8_fmin_fp128);
__mu8_alias2__(mu0_fp64_t , mu8_alias_fmin    , mu8_fmin_fp64 );
__mu8_alias2__(mu0_fp32_t , mu8_alias_fmin    , mu8_fmin_fp32 );
__mu8_alias2__(mu0_fp16_t , mu8_alias_fmin    , mu8_fmin_fp16 );

__mu8_alias2__(mu0_fp128_t, mu8_alias_fmod    , mu8_fmod_fp128);
__mu8_alias2__(mu0_fp64_t , mu8_alias_fmod    , mu8_fmod_fp64 );
__mu8_alias2__(mu0_fp32_t , mu8_alias_fmod    , mu8_fmod_fp32 );
__mu8_alias2__(mu0_fp16_t , mu8_alias_fmod    , mu8_fmod_fp16 );

__mu8_alias4__(mu0_fp128_t, mu8_alias_frexp   , mu8_frexp_fp128);
__mu8_alias4__(mu0_fp64_t , mu8_alias_frexp   , mu8_frexp_fp64 );
__mu8_alias4__(mu0_fp32_t , mu8_alias_frexp   , mu8_frexp_fp32 );
__mu8_alias4__(mu0_fp16_t , mu8_alias_frexp   , mu8_frexp_fp16 );

#	define mu8_alias_acos(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_acos)(__x)

#	define mu8_alias_acosh(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_acosh)(__x)

#	define mu8_alias_asin(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_asin)(__x)

#	define mu8_alias_asinh(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_asinh)(__x)

#	define mu8_alias_atan(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_atan)(__x)

#	define mu8_alias_atan2(_Tp, __y, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_atan2)(__y, __x)

#	define mu8_alias_atanh(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_atanh)(__x)

#	define mu8_alias_cbrt(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_cbrt)(__x)

#	define mu8_alias_ceil(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_ceil)(__x)

#	define mu8_alias_copysign(_Tp, __x, __y) \
	__mu8_aliasing__(_Tp, mu8_alias_copysign)(__x, __y)

#	define mu8_alias_cos(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_cos)(__x)

#	define mu8_alias_cosh(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_cosh)(__x)

#	define mu8_alias_erf(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_erf)(__x)

#	define mu8_alias_erfc(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_erfc)(__x)

#	define mu8_alias_exp(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_exp)(__x)

#	define mu8_alias_exp2(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_exp2)(__x)

#	define mu8_alias_expm1(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_expm1)(__x)

#	define mu8_alias_fabs(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_fabs)(__x)

#	define mu8_alias_fdim(_Tp, __x, __y) \
	__mu8_aliasing__(_Tp, mu8_alias_fdim)(__x, __y)

#	define mu8_alias_floor(_Tp, __x) \
	__mu8_aliasing__(_Tp, mu8_alias_floor)(__x)

#	define mu8_alias_fma(_Tp, __x, __y, __z) \
	__mu8_aliasing__(_Tp, mu8_alias_fma)(__x, __y, __z)

#	define mu8_alias_fmax(_Tp, __x, __y) \
	__mu8_aliasing__(_Tp, mu8_alias_fmax)(__x, __y)

#	define mu8_alias_fmin(_Tp, __x, __y) \
	__mu8_aliasing__(_Tp, mu8_alias_fmin)(__x, __y)

#	define mu8_alias_fmod(_Tp, __x, __y) \
	__mu8_aliasing__(_Tp, mu8_alias_fmod)(__x, __y)

#	define mu8_alias_frexp(_Tp, __x, __e) \
	__mu8_aliasing__(_Tp, mu8_alias_frexp)(__x, __e)

MU0_END_CDECL

#endif /* !MU8_ALIASING_H */

/* EOF */