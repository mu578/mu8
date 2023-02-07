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

// mu8_aliasing.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

#ifndef MU8_ALIASING_H
#define MU8_ALIASING_H 1

MU0_BEGIN_CDECL

#	define mu8_aliasing(_Tp, __alias) __alias ## _Tp

#	define mu8_alias1(_Tp, __alias, __unary_fn)  \
	____mu8_static___inline__                    \
	_Tp mu8_aliasing(_Tp, __alias) (const _Tp x) \
	{                                            \
		return __unary_fn(x);                     \
	} enum { /***/ }

mu8_alias1(mu0_fp128_t, mu8_alias_acos, mu8_acos_fp128);
mu8_alias1(mu0_fp64_t , mu8_alias_acos, mu8_acos_fp64 );
mu8_alias1(mu0_fp32_t , mu8_alias_acos, mu8_acos_fp32 );
mu8_alias1(mu0_fp16_t , mu8_alias_acos, mu8_acos_fp16 );

mu8_alias1(mu0_fp128_t, mu8_alias_acosh, mu8_acosh_fp128);
mu8_alias1(mu0_fp64_t , mu8_alias_acosh, mu8_acosh_fp64 );
mu8_alias1(mu0_fp32_t , mu8_alias_acosh, mu8_acosh_fp32 );
mu8_alias1(mu0_fp16_t , mu8_alias_acosh, mu8_acosh_fp16 );

mu8_alias1(mu0_fp128_t, mu8_alias_asin, mu8_asin_fp128);
mu8_alias1(mu0_fp64_t , mu8_alias_asin, mu8_asin_fp64 );
mu8_alias1(mu0_fp32_t , mu8_alias_asin, mu8_asin_fp32 );
mu8_alias1(mu0_fp16_t , mu8_alias_asin, mu8_asin_fp16 );

mu8_alias1(mu0_fp128_t, mu8_alias_asinh, mu8_asinh_fp128);
mu8_alias1(mu0_fp64_t , mu8_alias_asinh, mu8_asinh_fp64 );
mu8_alias1(mu0_fp32_t , mu8_alias_asinh, mu8_asinh_fp32 );
mu8_alias1(mu0_fp16_t , mu8_alias_asinh, mu8_asinh_fp16 );

#	define mu8_alias_acos(_Tp, __x) \
	mu8_aliasing(_Tp, mu8_alias_acos)(__x)

#	define mu8_alias_acosh(_Tp, __x) \
	mu8_aliasing(_Tp, mu8_alias_acosh)(__x)

#	define mu8_alias_asin(_Tp, __x) \
	mu8_aliasing(_Tp, mu8_alias_asin)(__x)

#	define mu8_alias_asinh(_Tp, __x) \
	mu8_aliasing(_Tp, mu8_alias_asinh)(__x)

MU0_END_CDECL

#endif /* !MU8_ALIASING_H */

/* EOF */