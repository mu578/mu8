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

// mu8_arithmetic.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_aliasing.h>
#include <mu8/mu8_complex_annex.h>

#ifndef MU8_ARITHMETIC_H
#define MU8_ARITHMETIC_H 1

MU0_BEGIN_CDECL

__mu0_static_inline__ const mu0_cfp128_t  __mu8_add_cfp128__ (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cadd_fp128 (__a, __b); }
__mu0_static_inline__ const mu0_cfp64_t   __mu8_add_cfp64__  (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cadd_fp64  (__a, __b); }
__mu0_static_inline__ const mu0_cfp32_t   __mu8_add_cfp32__  (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cadd_fp32  (__a, __b); }
__mu0_static_inline__ const mu0_cfp16_t   __mu8_add_cfp16__  (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cadd_fp16  (__a, __b); }

__mu0_static_inline__ const mu0_cfp128_t  __mu8_div_cfp128__ (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cdiv_fp128 (__a, __b); }
__mu0_static_inline__ const mu0_cfp64_t   __mu8_div_cfp64__  (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cdiv_fp64  (__a, __b); }
__mu0_static_inline__ const mu0_cfp32_t   __mu8_div_cfp32__  (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cdiv_fp32  (__a, __b); }
__mu0_static_inline__ const mu0_cfp16_t   __mu8_div_cfp16__  (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cdiv_fp16  (__a, __b); }

__mu0_static_inline__ const mu0_cfp128_t  __mu8_mul_cfp128__ (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_cmul_fp128 (__a, __b); }
__mu0_static_inline__ const mu0_cfp64_t   __mu8_mul_cfp64__  (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_cmul_fp64  (__a, __b); }
__mu0_static_inline__ const mu0_cfp32_t   __mu8_mul_cfp32__  (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_cmul_fp32  (__a, __b); }
__mu0_static_inline__ const mu0_cfp16_t   __mu8_mul_cfp16__  (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_cmul_fp16  (__a, __b); }

__mu0_static_inline__ const mu0_cfp128_t  __mu8_sub_cfp128__ (const mu0_cfp128_t __a, const mu0_cfp128_t __b)   { return mu8_csub_fp128 (__a, __b); }
__mu0_static_inline__ const mu0_cfp64_t   __mu8_sub_cfp64__  (const mu0_cfp64_t  __a, const mu0_cfp64_t  __b)   { return mu8_csub_fp64  (__a, __b); }
__mu0_static_inline__ const mu0_cfp32_t   __mu8_sub_cfp32__  (const mu0_cfp32_t  __a, const mu0_cfp32_t  __b)   { return mu8_csub_fp32  (__a, __b); }
__mu0_static_inline__ const mu0_cfp16_t   __mu8_sub_cfp16__  (const mu0_cfp16_t  __a, const mu0_cfp16_t  __b)   { return mu8_csub_fp16  (__a, __b); }

__mu0_static_inline__ const mu0_fp128_t   __mu8_add_fp128__  (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a + __b;                 }
__mu0_static_inline__ const mu0_fp64_t    __mu8_add_fp64__   (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a + __b;                 }
__mu0_static_inline__ const mu0_fp32_t    __mu8_add_fp32__   (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a + __b;                 }
__mu0_static_inline__ const mu0_fp16_t    __mu8_add_fp16__   (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a + __b;                 }

__mu0_static_inline__ const mu0_fp128_t   __mu8_div_fp128__  (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a / __b;                 }
__mu0_static_inline__ const mu0_fp64_t    __mu8_div_fp64__   (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a / __b;                 }
__mu0_static_inline__ const mu0_fp32_t    __mu8_div_fp32__   (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a / __b;                 }
__mu0_static_inline__ const mu0_fp16_t    __mu8_div_fp16__   (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a / __b;                 }

__mu0_static_inline__ const mu0_fp128_t   __mu8_mul_fp128__  (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a * __b;                 }
__mu0_static_inline__ const mu0_fp64_t    __mu8_mul_fp64__   (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a * __b;                 }
__mu0_static_inline__ const mu0_fp32_t    __mu8_mul_fp32__   (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a * __b;                 }
__mu0_static_inline__ const mu0_fp16_t    __mu8_mul_fp16__   (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a * __b;                 }

__mu0_static_inline__ const mu0_fp128_t   __mu8_sub_fp128__  (const mu0_fp128_t __a, const mu0_fp128_t __b)     { return __a - __b;                 }
__mu0_static_inline__ const mu0_fp64_t    __mu8_sub_fp64__   (const mu0_fp64_t  __a, const mu0_fp64_t  __b)     { return __a - __b;                 }
__mu0_static_inline__ const mu0_fp32_t    __mu8_sub_fp32__   (const mu0_fp32_t  __a, const mu0_fp32_t  __b)     { return __a - __b;                 }
__mu0_static_inline__ const mu0_fp16_t    __mu8_sub_fp16__   (const mu0_fp16_t  __a, const mu0_fp16_t  __b)     { return __a - __b;                 }

__mu0_static_inline__ const mu0_sint128_t __mu8_add_i128__   (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a + __b;                 }
__mu0_static_inline__ const mu0_sint64_t  __mu8_add_i64__    (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a + __b;                 }
__mu0_static_inline__ const mu0_sint32_t  __mu8_add_i32__    (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a + __b;                 }
__mu0_static_inline__ const mu0_sint16_t  __mu8_add_i16__    (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a + __b;                 }

__mu0_static_inline__ const mu0_sint128_t __mu8_div_i128__   (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a / __b;                 }
__mu0_static_inline__ const mu0_sint64_t  __mu8_div_i64__    (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a / __b;                 }
__mu0_static_inline__ const mu0_sint32_t  __mu8_div_i32__    (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a / __b;                 }
__mu0_static_inline__ const mu0_sint16_t  __mu8_div_i16__    (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a / __b;                 }

__mu0_static_inline__ const mu0_sint128_t __mu8_mul_i128__   (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a * __b;                 }
__mu0_static_inline__ const mu0_sint64_t  __mu8_mul_i64__    (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a * __b;                 }
__mu0_static_inline__ const mu0_sint32_t  __mu8_mul_i32__    (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a * __b;                 }
__mu0_static_inline__ const mu0_sint16_t  __mu8_mul_i16__    (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a * __b;                 }

__mu0_static_inline__ const mu0_sint128_t __mu8_sub_i128__   (const mu0_sint128_t __a, const mu0_sint128_t __b) { return __a - __b;                 }
__mu0_static_inline__ const mu0_sint64_t  __mu8_sub_i64__    (const mu0_sint64_t  __a, const mu0_sint64_t  __b) { return __a - __b;                 }
__mu0_static_inline__ const mu0_sint32_t  __mu8_sub_i32__    (const mu0_sint32_t  __a, const mu0_sint32_t  __b) { return __a - __b;                 }
__mu0_static_inline__ const mu0_sint16_t  __mu8_sub_i16__    (const mu0_sint16_t  __a, const mu0_sint16_t  __b) { return __a - __b;                 }

__mu0_static_inline__ const mu0_uint128_t __mu8_add_u128__   (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a + __b;                 }
__mu0_static_inline__ const mu0_uint64_t  __mu8_add_u64__    (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a + __b;                 }
__mu0_static_inline__ const mu0_uint32_t  __mu8_add_u32__    (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a + __b;                 }
__mu0_static_inline__ const mu0_uint16_t  __mu8_add_u16__    (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a + __b;                 }

__mu0_static_inline__ const mu0_uint128_t __mu8_div_u128__   (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a / __b;                 }
__mu0_static_inline__ const mu0_uint64_t  __mu8_div_u64__    (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a / __b;                 }
__mu0_static_inline__ const mu0_uint32_t  __mu8_div_u32__    (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a / __b;                 }
__mu0_static_inline__ const mu0_uint16_t  __mu8_div_u16__    (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a / __b;                 }

__mu0_static_inline__ const mu0_uint128_t __mu8_mul_u128__   (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a * __b;                 }
__mu0_static_inline__ const mu0_uint64_t  __mu8_mul_u64__    (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a * __b;                 }
__mu0_static_inline__ const mu0_uint32_t  __mu8_mul_u32__    (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a * __b;                 }
__mu0_static_inline__ const mu0_uint16_t  __mu8_mul_u16__    (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a * __b;                 }

__mu0_static_inline__ const mu0_uint128_t __mu8_sub_u128__   (const mu0_uint128_t __a, const mu0_uint128_t __b) { return __a - __b;                 }
__mu0_static_inline__ const mu0_uint64_t  __mu8_sub_u64__    (const mu0_uint64_t  __a, const mu0_uint64_t  __b) { return __a - __b;                 }
__mu0_static_inline__ const mu0_uint32_t  __mu8_sub_u32__    (const mu0_uint32_t  __a, const mu0_uint32_t  __b) { return __a - __b;                 }
__mu0_static_inline__ const mu0_uint16_t  __mu8_sub_u16__    (const mu0_uint16_t  __a, const mu0_uint16_t  __b) { return __a - __b;                 }

__mu8_alias02__(mu0_cfp128_t , mu8_alias_add , __mu8_add_cfp128__);
__mu8_alias02__(mu0_cfp64_t  , mu8_alias_add , __mu8_add_cfp64__ );
__mu8_alias02__(mu0_cfp32_t  , mu8_alias_add , __mu8_add_cfp32__ );
__mu8_alias02__(mu0_cfp16_t  , mu8_alias_add , __mu8_add_cfp16__ );

__mu8_alias02__(mu0_cfp128_t , mu8_alias_div , __mu8_div_cfp128__);
__mu8_alias02__(mu0_cfp64_t  , mu8_alias_div , __mu8_div_cfp64__ );
__mu8_alias02__(mu0_cfp32_t  , mu8_alias_div , __mu8_div_cfp32__ );
__mu8_alias02__(mu0_cfp16_t  , mu8_alias_div , __mu8_div_cfp16__ );

__mu8_alias02__(mu0_cfp128_t , mu8_alias_mul , __mu8_mul_cfp128__);
__mu8_alias02__(mu0_cfp64_t  , mu8_alias_mul , __mu8_mul_cfp64__ );
__mu8_alias02__(mu0_cfp32_t  , mu8_alias_mul , __mu8_mul_cfp32__ );
__mu8_alias02__(mu0_cfp16_t  , mu8_alias_mul , __mu8_mul_cfp16__ );

__mu8_alias02__(mu0_cfp128_t , mu8_alias_sub , __mu8_sub_cfp128__);
__mu8_alias02__(mu0_cfp64_t  , mu8_alias_sub , __mu8_sub_cfp64__ );
__mu8_alias02__(mu0_cfp32_t  , mu8_alias_sub , __mu8_sub_cfp32__ );
__mu8_alias02__(mu0_cfp16_t  , mu8_alias_sub , __mu8_sub_cfp16__ );

__mu8_alias02__(mu0_fp128_t  , mu8_alias_add , __mu8_add_fp128__);
__mu8_alias02__(mu0_fp64_t   , mu8_alias_add , __mu8_add_fp64__ );
__mu8_alias02__(mu0_fp32_t   , mu8_alias_add , __mu8_add_fp32__ );
__mu8_alias02__(mu0_fp16_t   , mu8_alias_add , __mu8_add_fp16__ );

__mu8_alias02__(mu0_fp128_t  , mu8_alias_div , __mu8_div_fp128__);
__mu8_alias02__(mu0_fp64_t   , mu8_alias_div , __mu8_div_fp64__ );
__mu8_alias02__(mu0_fp32_t   , mu8_alias_div , __mu8_div_fp32__ );
__mu8_alias02__(mu0_fp16_t   , mu8_alias_div , __mu8_div_fp16__ );

__mu8_alias02__(mu0_fp128_t  , mu8_alias_mul , __mu8_mul_fp128__);
__mu8_alias02__(mu0_fp64_t   , mu8_alias_mul , __mu8_mul_fp64__ );
__mu8_alias02__(mu0_fp32_t   , mu8_alias_mul , __mu8_mul_fp32__ );
__mu8_alias02__(mu0_fp16_t   , mu8_alias_mul , __mu8_mul_fp16__ );

__mu8_alias02__(mu0_fp128_t  , mu8_alias_sub , __mu8_sub_fp128__);
__mu8_alias02__(mu0_fp64_t   , mu8_alias_sub , __mu8_sub_fp64__ );
__mu8_alias02__(mu0_fp32_t   , mu8_alias_sub , __mu8_sub_fp32__ );
__mu8_alias02__(mu0_fp16_t   , mu8_alias_sub , __mu8_sub_fp16__ );

__mu8_alias02__(mu0_sint128_t, mu8_alias_add , __mu8_add_i128__);
__mu8_alias02__(mu0_sint64_t , mu8_alias_add , __mu8_add_i64__ );
__mu8_alias02__(mu0_sint32_t , mu8_alias_add , __mu8_add_i32__ );
__mu8_alias02__(mu0_sint16_t , mu8_alias_add , __mu8_add_i16__ );

__mu8_alias02__(mu0_sint128_t, mu8_alias_div , __mu8_div_i128__);
__mu8_alias02__(mu0_sint64_t , mu8_alias_div , __mu8_div_i64__ );
__mu8_alias02__(mu0_sint32_t , mu8_alias_div , __mu8_div_i32__ );
__mu8_alias02__(mu0_sint16_t , mu8_alias_div , __mu8_div_i16__ );

__mu8_alias02__(mu0_sint128_t, mu8_alias_mul , __mu8_mul_i128__);
__mu8_alias02__(mu0_sint64_t , mu8_alias_mul , __mu8_mul_i64__ );
__mu8_alias02__(mu0_sint32_t , mu8_alias_mul , __mu8_mul_i32__ );
__mu8_alias02__(mu0_sint16_t , mu8_alias_mul , __mu8_mul_i16__ );

__mu8_alias02__(mu0_sint128_t, mu8_alias_sub , __mu8_sub_i128__);
__mu8_alias02__(mu0_sint64_t , mu8_alias_sub , __mu8_sub_i64__ );
__mu8_alias02__(mu0_sint32_t , mu8_alias_sub , __mu8_sub_i32__ );
__mu8_alias02__(mu0_sint16_t , mu8_alias_sub , __mu8_sub_i16__ );

__mu8_alias02__(mu0_uint128_t, mu8_alias_add , __mu8_add_u128__);
__mu8_alias02__(mu0_uint64_t , mu8_alias_add , __mu8_add_u64__ );
__mu8_alias02__(mu0_uint32_t , mu8_alias_add , __mu8_add_u32__ );
__mu8_alias02__(mu0_uint16_t , mu8_alias_add , __mu8_add_u16__ );

__mu8_alias02__(mu0_uint128_t, mu8_alias_div , __mu8_div_u128__);
__mu8_alias02__(mu0_uint64_t , mu8_alias_div , __mu8_div_u64__ );
__mu8_alias02__(mu0_uint32_t , mu8_alias_div , __mu8_div_u32__ );
__mu8_alias02__(mu0_uint16_t , mu8_alias_div , __mu8_div_u16__ );

__mu8_alias02__(mu0_uint128_t, mu8_alias_mul , __mu8_mul_u128__);
__mu8_alias02__(mu0_uint64_t , mu8_alias_mul , __mu8_mul_u64__ );
__mu8_alias02__(mu0_uint32_t , mu8_alias_mul , __mu8_mul_u32__ );
__mu8_alias02__(mu0_uint16_t , mu8_alias_mul , __mu8_mul_u16__ );

__mu8_alias02__(mu0_uint128_t, mu8_alias_sub , __mu8_sub_u128__);
__mu8_alias02__(mu0_uint64_t , mu8_alias_sub , __mu8_sub_u64__ );
__mu8_alias02__(mu0_uint32_t , mu8_alias_sub , __mu8_sub_u32__ );
__mu8_alias02__(mu0_uint16_t , mu8_alias_sub , __mu8_sub_u16__ );

#	define mu8_alias_add(_Tp, __a, __b) \
	__mu8_aliasing__(_Tp, mu8_alias_add)(__a, __b)

#	define mu8_alias_div(_Tp, __a, __b) \
	__mu8_aliasing__(_Tp, mu8_alias_div)(__a, __b)

#	define mu8_alias_mul(_Tp, __a, __b) \
	__mu8_aliasing__(_Tp, mu8_alias_mul)(__a, __b)

#	define mu8_alias_sub(_Tp, __a, __b) \
	__mu8_aliasing__(_Tp, mu8_alias_sub)(__a, __b)

#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_GNUCC || MU0_HAVE_CC_MSVCL

//#!
//#! macro<_Tp>(_Tp __x) : _Tp
//#!
#	define mu8_ini(_Tp, __x)                      \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu0_cfp16(__x, 0)                        \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu0_cfp32(__x, 0)                     \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu0_cfp64(__x, 0)                  \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu0_cfp128(__x, 0)              \
					: (_Tp) { __x }                   \
		)))

//#!
//#! macro<_Tp>(_Tp & __a, _Tp & __b) : _Tp
//#!
#	define mu8_add(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_cadd_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_cadd_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_cadd_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_cadd_fp128(__a, __b)        \
					: mu8_alias_add(_Tp, __a, __b)    \
		)))

#	define mu8_div(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_cdiv_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_cdiv_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_cdiv_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_cdiv_fp128(__a, __b)        \
					: mu8_alias_div(_Tp, __a, __b)    \
		)))

#	define mu8_mul(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_cmul_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_cmul_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_cmul_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_cmul_fp128(__a, __b)        \
					: mu8_alias_mul(_Tp, __a, __b)    \
		)))

#	define mu8_sub(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_csub_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_csub_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_csub_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_csub_fp128(__a, __b)        \
					: mu8_alias_sub(_Tp, __a, __b)    \
		)))

#	else

#	define mu8_ini(_Tp, __x)      (_Tp) { __x }
#	define mu8_add(_Tp, __a, __b) mu8_alias_add(_Tp, __a, __b)
#	define mu8_div(_Tp, __a, __b) mu8_alias_div(_Tp, __a, __b)
#	define mu8_mul(_Tp, __a, __b) mu8_alias_mul(_Tp, __a, __b)
#	define mu8_sub(_Tp, __a, __b) mu8_alias_sub(_Tp, __a, __b)

#	endif

MU0_END_CDECL

#endif /* !MU8_ARITHMETIC_H */

/* EOF */