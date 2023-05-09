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

__mu8_alias1__(mu0_fp128_t, mu8_alias_acos, mu8_acos_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_acos, mu8_acos_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_acos, mu8_acos_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_acos, mu8_acos_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_acosh, mu8_acosh_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_acosh, mu8_acosh_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_acosh, mu8_acosh_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_acosh, mu8_acosh_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_asin, mu8_asin_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_asin, mu8_asin_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_asin, mu8_asin_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_asin, mu8_asin_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_asinh, mu8_asinh_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_asinh, mu8_asinh_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_asinh, mu8_asinh_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_asinh, mu8_asinh_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_atan, mu8_atan_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_atan, mu8_atan_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_atan, mu8_atan_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_atan, mu8_atan_fp16 );

__mu8_alias2__(mu0_fp128_t, mu8_alias_atan2, mu8_atan2_fp128);
__mu8_alias2__(mu0_fp64_t , mu8_alias_atan2, mu8_atan2_fp64 );
__mu8_alias2__(mu0_fp32_t , mu8_alias_atan2, mu8_atan2_fp32 );
__mu8_alias2__(mu0_fp16_t , mu8_alias_atan2, mu8_atan2_fp16 );

__mu8_alias1__(mu0_fp128_t, mu8_alias_atanh, mu8_atanh_fp128);
__mu8_alias1__(mu0_fp64_t , mu8_alias_atanh, mu8_atanh_fp64 );
__mu8_alias1__(mu0_fp32_t , mu8_alias_atanh, mu8_atanh_fp32 );
__mu8_alias1__(mu0_fp16_t , mu8_alias_atanh, mu8_atanh_fp16 );

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

MU0_END_CDECL

#endif /* !MU8_ALIASING_H */

/* EOF */