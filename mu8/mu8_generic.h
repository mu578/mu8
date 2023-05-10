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

// mu8_generic.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

#ifndef MU8_GENERIC_H
#define MU8_GENERIC_H 1

MU0_BEGIN_CDECL

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_acos (const mu0_fp128_t __x) { return mu8_acos_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_acos (const mu0_fp64_t  __x) { return mu8_acos_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_acos (const mu0_fp32_t  __x) { return mu8_acos_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_acos (const mu0_fp16_t  __x) { return mu8_acos_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_acos(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_acos_fp128           \
	, mu0_fp64_t  : mu8_acos_fp64            \
	, mu0_fp32_t  : mu8_acos_fp32            \
	, mu0_fp16_t  : mu8_acos_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_acos(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_acos_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_acos_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_acos_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_acos_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_acos(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_acos_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_acos_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_acos_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_acos_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_acosh (const mu0_fp128_t __x) { return mu8_acosh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_acosh (const mu0_fp64_t  __x) { return mu8_acosh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_acosh (const mu0_fp32_t  __x) { return mu8_acosh_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_acosh (const mu0_fp16_t  __x) { return mu8_acosh_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_acosh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_acosh_fp128           \
	, mu0_fp64_t  : mu8_acosh_fp64            \
	, mu0_fp32_t  : mu8_acosh_fp32            \
	, mu0_fp16_t  : mu8_acosh_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_acosh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_acosh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_acosh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_acosh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_acosh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_acosh(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_acosh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_acosh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_acosh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_acosh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_asin (const mu0_fp128_t __x) { return mu8_asin_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_asin (const mu0_fp64_t  __x) { return mu8_asin_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_asin (const mu0_fp32_t  __x) { return mu8_asin_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_asin (const mu0_fp16_t  __x) { return mu8_asin_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_asin(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_asin_fp128           \
	, mu0_fp64_t  : mu8_asin_fp64            \
	, mu0_fp32_t  : mu8_asin_fp32            \
	, mu0_fp16_t  : mu8_asin_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_asin(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_asin_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_asin_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_asin_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_asin_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_asin(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_asin_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_asin_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_asin_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_asin_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_asinh (const mu0_fp128_t __x) { return mu8_asinh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_asinh (const mu0_fp64_t  __x) { return mu8_asinh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_asinh (const mu0_fp32_t  __x) { return mu8_asinh_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_asinh (const mu0_fp16_t  __x) { return mu8_asinh_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_asinh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_asinh_fp128           \
	, mu0_fp64_t  : mu8_asinh_fp64            \
	, mu0_fp32_t  : mu8_asinh_fp32            \
	, mu0_fp16_t  : mu8_asinh_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_asinh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_asinh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_asinh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_asinh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_asinh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_asinh(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_asinh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_asinh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_asinh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_asinh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_atan (const mu0_fp128_t __x) { return mu8_atan_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_atan (const mu0_fp64_t  __x) { return mu8_atan_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_atan (const mu0_fp32_t  __x) { return mu8_atan_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_atan (const mu0_fp16_t  __x) { return mu8_atan_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_atan(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_atan_fp128           \
	, mu0_fp64_t  : mu8_atan_fp64            \
	, mu0_fp32_t  : mu8_atan_fp32            \
	, mu0_fp16_t  : mu8_atan_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_atan(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_atan_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_atan_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_atan_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_atan_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_atan(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_atan_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_atan_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_atan_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_atan_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_atan2 (const mu0_fp128_t __y, const mu0_fp128_t __x) { return mu8_atan2_fp128 (__y, __x); }
__mu0_overload__ mu0_fp64_t  mu8_atan2 (const mu0_fp64_t  __y, const mu0_fp64_t  __x) { return mu8_atan2_fp64  (__y, __x); }
__mu0_overload__ mu0_fp32_t  mu8_atan2 (const mu0_fp32_t  __y, const mu0_fp32_t  __x) { return mu8_atan2_fp32  (__y, __x); }
__mu0_overload__ mu0_fp16_t  mu8_atan2 (const mu0_fp16_t  __y, const mu0_fp16_t  __x) { return mu8_atan2_fp16  (__y, __x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_atan2(__y, __x) __mu0_generic__((__y)+(__x) \
	, mu0_fp128_t : mu8_atan2_fp128                        \
	, mu0_fp64_t  : mu8_atan2_fp64                         \
	, mu0_fp32_t  : mu8_atan2_fp32                         \
	, mu0_fp16_t  : mu8_atan2_fp16                         \
) (__y, __x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_atan2(__y, __x) mu8_cast(__mu0_kindof__(__y),                                                                                   \
	(                                                                                                                                          \
		  __mu0_isofkind__(mu0_fp128_t, ((__y)+(__x))) ? mu8_atan2_fp128 (mu8_const_fp128(mu0_fp128_t, __y), mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__y)+(__x))) ? mu8_atan2_fp64  (mu8_const_fp64(mu0_fp64_t  , __y), mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__y)+(__x))) ? mu8_atan2_fp32  (mu8_const_fp32(mu0_fp32_t  , __y), mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__y)+(__x))) ? mu8_atan2_fp16  (mu8_const_fp16(mu0_fp16_t  , __y), mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                                                     \
	))
#	else
#	define mu8_atan2(__y, __x)                                                                                                                 \
	(                                                                                                                                          \
		  __mu0_isofsize__(mu0_fp128_t, ((__y)+(__x))) ? mu8_atan2_fp128 (mu8_const_fp128(mu0_fp128_t, __y), mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__y)+(__x))) ? mu8_atan2_fp64  (mu8_const_fp64(mu0_fp64_t  , __y), mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__y)+(__x))) ? mu8_atan2_fp32  (mu8_const_fp32(mu0_fp32_t  , __y), mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__y)+(__x))) ? mu8_atan2_fp16  (mu8_const_fp16(mu0_fp16_t  , __y), mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                                                     \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_atanh (const mu0_fp128_t __x) { return mu8_atanh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_atanh (const mu0_fp64_t  __x) { return mu8_atanh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_atanh (const mu0_fp32_t  __x) { return mu8_atanh_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_atanh (const mu0_fp16_t  __x) { return mu8_atanh_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_atanh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_atanh_fp128           \
	, mu0_fp64_t  : mu8_atanh_fp64            \
	, mu0_fp32_t  : mu8_atanh_fp32            \
	, mu0_fp16_t  : mu8_atanh_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_atanh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_atanh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_atanh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_atanh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_atanh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_atanh(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_atanh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_atanh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_atanh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_atanh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_cbrt (const mu0_fp128_t __x) { return mu8_cbrt_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_cbrt (const mu0_fp64_t  __x) { return mu8_cbrt_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_cbrt (const mu0_fp32_t  __x) { return mu8_cbrt_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_cbrt (const mu0_fp16_t  __x) { return mu8_cbrt_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_cbrt(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cbrt_fp128           \
	, mu0_fp64_t  : mu8_cbrt_fp64            \
	, mu0_fp32_t  : mu8_cbrt_fp32            \
	, mu0_fp16_t  : mu8_cbrt_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_cbrt(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_cbrt_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_cbrt_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_cbrt_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_cbrt_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_cbrt(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_cbrt_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_cbrt_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_cbrt_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_cbrt_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_ceil (const mu0_fp128_t __x) { return mu8_ceil_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_ceil (const mu0_fp64_t  __x) { return mu8_ceil_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_ceil (const mu0_fp32_t  __x) { return mu8_ceil_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_ceil (const mu0_fp16_t  __x) { return mu8_ceil_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_ceil(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_ceil_fp128           \
	, mu0_fp64_t  : mu8_ceil_fp64            \
	, mu0_fp32_t  : mu8_ceil_fp32            \
	, mu0_fp16_t  : mu8_ceil_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_ceil(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_ceil_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_ceil_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_ceil_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_ceil_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_ceil(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_ceil_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_ceil_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_ceil_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_ceil_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_copysign (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_copysign_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_copysign (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_copysign_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_copysign (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_copysign_fp32  (__x, __y); }
__mu0_overload__ mu0_fp16_t  mu8_copysign (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_copysign_fp16  (__x, __y); }
#	elif MU0_HAVE_GENERIC
#	define mu8_copysign(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_copysign_fp128                        \
	, mu0_fp64_t  : mu8_copysign_fp64                         \
	, mu0_fp32_t  : mu8_copysign_fp32                         \
	, mu0_fp16_t  : mu8_copysign_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_copysign(__x, __y) mu8_cast(__mu0_kindof__(__x),                                                                                   \
	(                                                                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_copysign_fp128 (mu8_const_fp128(mu0_fp128_t, __x), mu8_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_copysign_fp64  (mu8_const_fp64(mu0_fp64_t  , __x), mu8_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_copysign_fp32  (mu8_const_fp32(mu0_fp32_t  , __x), mu8_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_copysign_fp16  (mu8_const_fp16(mu0_fp16_t  , __x), mu8_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                        \
	))
#	else
#	define mu8_copysign(__x, __y)                                                                                                                 \
	(                                                                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_copysign_fp128 (mu8_const_fp128(mu0_fp128_t, __x), mu8_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_copysign_fp64  (mu8_const_fp64(mu0_fp64_t  , __x), mu8_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_copysign_fp32  (mu8_const_fp32(mu0_fp32_t  , __x), mu8_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_copysign_fp16  (mu8_const_fp16(mu0_fp16_t  , __x), mu8_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_cos (const mu0_fp128_t __x) { return mu8_cos_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_cos (const mu0_fp64_t  __x) { return mu8_cos_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_cos (const mu0_fp32_t  __x) { return mu8_cos_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_cos (const mu0_fp16_t  __x) { return mu8_cos_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_cos(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cos_fp128           \
	, mu0_fp64_t  : mu8_cos_fp64            \
	, mu0_fp32_t  : mu8_cos_fp32            \
	, mu0_fp16_t  : mu8_cos_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_cos(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_cos_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_cos_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_cos_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_cos_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_cos(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_cos_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_cos_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_cos_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_cos_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_cosh (const mu0_fp128_t __x) { return mu8_cosh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_cosh (const mu0_fp64_t  __x) { return mu8_cosh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_cosh (const mu0_fp32_t  __x) { return mu8_cosh_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_cosh (const mu0_fp16_t  __x) { return mu8_cosh_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_cosh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cosh_fp128           \
	, mu0_fp64_t  : mu8_cosh_fp64            \
	, mu0_fp32_t  : mu8_cosh_fp32            \
	, mu0_fp16_t  : mu8_cosh_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_cosh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_cosh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_cosh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_cosh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_cosh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_cosh(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_cosh_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_cosh_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_cosh_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_cosh_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_erf (const mu0_fp128_t __x) { return mu8_erf_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_erf (const mu0_fp64_t  __x) { return mu8_erf_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_erf (const mu0_fp32_t  __x) { return mu8_erf_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_erf (const mu0_fp16_t  __x) { return mu8_erf_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_erf(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_erf_fp128           \
	, mu0_fp64_t  : mu8_erf_fp64            \
	, mu0_fp32_t  : mu8_erf_fp32            \
	, mu0_fp16_t  : mu8_erf_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_erf(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_erf_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_erf_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_erf_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_erf_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_erf(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_erf_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_erf_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_erf_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_erf_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_erfc (const mu0_fp128_t __x) { return mu8_erfc_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_erfc (const mu0_fp64_t  __x) { return mu8_erfc_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_erfc (const mu0_fp32_t  __x) { return mu8_erfc_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_erfc (const mu0_fp16_t  __x) { return mu8_erfc_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_erfc(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_erfc_fp128           \
	, mu0_fp64_t  : mu8_erfc_fp64            \
	, mu0_fp32_t  : mu8_erfc_fp32            \
	, mu0_fp16_t  : mu8_erfc_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_erfc(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_erfc_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_erfc_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_erfc_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_erfc_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_erfc(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_erfc_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_erfc_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_erfc_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_erfc_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_exp (const mu0_fp128_t __x) { return mu8_exp_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_exp (const mu0_fp64_t  __x) { return mu8_exp_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_exp (const mu0_fp32_t  __x) { return mu8_exp_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_exp (const mu0_fp16_t  __x) { return mu8_exp_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_exp(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_exp_fp128           \
	, mu0_fp64_t  : mu8_exp_fp64            \
	, mu0_fp32_t  : mu8_exp_fp32            \
	, mu0_fp16_t  : mu8_exp_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_exp(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_exp_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_exp_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_exp_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_exp_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_exp(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_exp_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_exp_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_exp_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_exp_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_exp2 (const mu0_fp128_t __x) { return mu8_exp2_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_exp2 (const mu0_fp64_t  __x) { return mu8_exp2_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_exp2 (const mu0_fp32_t  __x) { return mu8_exp2_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_exp2 (const mu0_fp16_t  __x) { return mu8_exp2_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_exp2(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_exp2_fp128           \
	, mu0_fp64_t  : mu8_exp2_fp64            \
	, mu0_fp32_t  : mu8_exp2_fp32            \
	, mu0_fp16_t  : mu8_exp2_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_exp2(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_exp2_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_exp2_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_exp2_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_exp2_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_exp2(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_exp2_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_exp2_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_exp2_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_exp2_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_expm1 (const mu0_fp128_t __x) { return mu8_expm1_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_expm1 (const mu0_fp64_t  __x) { return mu8_expm1_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_expm1 (const mu0_fp32_t  __x) { return mu8_expm1_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_expm1 (const mu0_fp16_t  __x) { return mu8_expm1_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_expm1(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_expm1_fp128           \
	, mu0_fp64_t  : mu8_expm1_fp64            \
	, mu0_fp32_t  : mu8_expm1_fp32            \
	, mu0_fp16_t  : mu8_expm1_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_expm1(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_expm1_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_expm1_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_expm1_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_expm1_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_expm1(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_expm1_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_expm1_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_expm1_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_expm1_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fabs (const mu0_fp128_t __x) { return mu8_fabs_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_fabs (const mu0_fp64_t  __x) { return mu8_fabs_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_fabs (const mu0_fp32_t  __x) { return mu8_fabs_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_fabs (const mu0_fp16_t  __x) { return mu8_fabs_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_fabs(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_fabs_fp128           \
	, mu0_fp64_t  : mu8_fabs_fp64            \
	, mu0_fp32_t  : mu8_fabs_fp32            \
	, mu0_fp16_t  : mu8_fabs_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fabs(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_fabs_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_fabs_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_fabs_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_fabs_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_fabs(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_fabs_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_fabs_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_fabs_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_fabs_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fdim (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_fdim_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_fdim (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_fdim_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_fdim (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_fdim_fp32  (__x, __y); }
__mu0_overload__ mu0_fp16_t  mu8_fdim (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_fdim_fp16  (__x, __y); }
#	elif MU0_HAVE_GENERIC
#	define mu8_fdim(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fdim_fp128                        \
	, mu0_fp64_t  : mu8_fdim_fp64                         \
	, mu0_fp32_t  : mu8_fdim_fp32                         \
	, mu0_fp16_t  : mu8_fdim_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fdim(__x, __y) mu8_cast(__mu0_kindof__(__x),                                                                                   \
	(                                                                                                                                         \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fdim_fp128 (mu8_const_fp128(mu0_fp128_t, __x), mu8_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fdim_fp64  (mu8_const_fp64(mu0_fp64_t  , __x), mu8_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fdim_fp32  (mu8_const_fp32(mu0_fp32_t  , __x), mu8_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fdim_fp16  (mu8_const_fp16(mu0_fp16_t  , __x), mu8_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	))
#	else
#	define mu8_fdim(__x, __y)                                                                                                                 \
	(                                                                                                                                         \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fdim_fp128 (mu8_const_fp128(mu0_fp128_t, __x), mu8_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fdim_fp64  (mu8_const_fp64(mu0_fp64_t  , __x), mu8_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fdim_fp32  (mu8_const_fp32(mu0_fp32_t  , __x), mu8_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fdim_fp16  (mu8_const_fp16(mu0_fp16_t  , __x), mu8_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_floor (const mu0_fp128_t __x) { return mu8_floor_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_floor (const mu0_fp64_t  __x) { return mu8_floor_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_floor (const mu0_fp32_t  __x) { return mu8_floor_fp32  (__x); }
__mu0_overload__ mu0_fp16_t  mu8_floor (const mu0_fp16_t  __x) { return mu8_floor_fp16  (__x); }
#	elif MU0_HAVE_GENERIC
#	define mu8_floor(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_floor_fp128           \
	, mu0_fp64_t  : mu8_floor_fp64            \
	, mu0_fp32_t  : mu8_floor_fp32            \
	, mu0_fp16_t  : mu8_floor_fp16            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_floor(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_floor_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_floor_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_floor_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_floor_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_floor(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_floor_fp128 (mu8_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_floor_fp64  (mu8_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_floor_fp32  (mu8_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_floor_fp16  (mu8_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fma (const mu0_fp128_t __x, const mu0_fp128_t __y, const mu0_fp128_t __z) { return mu8_fma_fp128 (__x, __y, __z); }
__mu0_overload__ mu0_fp64_t  mu8_fma (const mu0_fp64_t  __x, const mu0_fp64_t  __y, const mu0_fp64_t  __z) { return mu8_fma_fp64  (__x, __y, __z); }
__mu0_overload__ mu0_fp32_t  mu8_fma (const mu0_fp32_t  __x, const mu0_fp32_t  __y, const mu0_fp32_t  __z) { return mu8_fma_fp32  (__x, __y, __z); }
__mu0_overload__ mu0_fp16_t  mu8_fma (const mu0_fp16_t  __x, const mu0_fp16_t  __y, const mu0_fp16_t  __z) { return mu8_fma_fp16  (__x, __y, __z); }
#	elif MU0_HAVE_GENERIC
#	define mu8_fma(__x, __y, __z) __mu0_generic__((__x)+(__y)+(__z) \
	, mu0_fp128_t : mu8_fma_fp128                                   \
	, mu0_fp64_t  : mu8_fma_fp64                                    \
	, mu0_fp32_t  : mu8_fma_fp32                                    \
	, mu0_fp16_t  : mu8_fma_fp16                                    \
) (__x, __y, __z)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fma(__x, __y, __z) mu8_cast(__mu0_kindof__(__x),                                                                                                                       \
	(                                                                                                                                                                                 \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y)+(__z))) ? mu8_fma_fp128 (mu8_const_fp128(mu0_fp128_t, __x), mu8_const_fp128(mu0_fp128_t, __y), mu8_const_fp128(mu0_fp128_t, __z)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp64  (mu8_const_fp64(mu0_fp64_t  , __x), mu8_const_fp64(mu0_fp64_t  , __y), mu8_const_fp64(mu0_fp64_t  , __z)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp32  (mu8_const_fp32(mu0_fp32_t  , __x), mu8_const_fp32(mu0_fp32_t  , __y), mu8_const_fp32(mu0_fp32_t  , __z)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp16  (mu8_const_fp16(mu0_fp16_t  , __x), mu8_const_fp16(mu0_fp16_t  , __y), mu8_const_fp16(mu0_fp16_t  , __z)) \
		: 0                                                                                                                                                                            \
	))
#	else
#	define mu8_fma(__x, __y, __z)                                                                                                                                                     \
	(                                                                                                                                                                                 \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y)+(__z))) ? mu8_fma_fp128 (mu8_const_fp128(mu0_fp128_t, __x), mu8_const_fp128(mu0_fp128_t, __y), mu8_const_fp128(mu0_fp128_t, __z)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp64  (mu8_const_fp64(mu0_fp64_t  , __x), mu8_const_fp64(mu0_fp64_t  , __y), mu8_const_fp64(mu0_fp64_t  , __z)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp32  (mu8_const_fp32(mu0_fp32_t  , __x), mu8_const_fp32(mu0_fp32_t  , __y), mu8_const_fp32(mu0_fp32_t  , __z)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp16  (mu8_const_fp16(mu0_fp16_t  , __x), mu8_const_fp16(mu0_fp16_t  , __y), mu8_const_fp16(mu0_fp16_t  , __z)) \
		: 0                                                                                                                                                                            \
	)
#	endif

MU0_END_CDECL

#endif /* !MU8_GENERIC_H */

/* EOF */