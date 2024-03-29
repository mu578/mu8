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

// mu8_math_generic.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

#ifndef MU8_MATH_GENERIC_H
#define MU8_MATH_GENERIC_H 1

MU0_BEGIN_CDECL

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_acos (const mu0_fp128_t __x) { return mu8_acos_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_acos (const mu0_fp64_t  __x) { return mu8_acos_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_acos (const mu0_fp32_t  __x) { return mu8_acos_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_acos (const mu0_fp16_t  __x) { return mu8_acos_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_acos(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_acos_fp128           \
	, mu0_fp64_t  : mu8_acos_fp64            \
	, mu0_fp32_t  : mu8_acos_fp32            \
	, mu0_fp16_t  : mu8_acos_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_acos(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_acos_fp128           \
	, mu0_fp64_t  : mu8_acos_fp64            \
	, mu0_fp32_t  : mu8_acos_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_acos(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_acos_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_acos_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_acos_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_acos_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_acos(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_acos_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_acos_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_acos_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_acos_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_acosh (const mu0_fp128_t __x) { return mu8_acosh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_acosh (const mu0_fp64_t  __x) { return mu8_acosh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_acosh (const mu0_fp32_t  __x) { return mu8_acosh_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_acosh (const mu0_fp16_t  __x) { return mu8_acosh_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_acosh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_acosh_fp128           \
	, mu0_fp64_t  : mu8_acosh_fp64            \
	, mu0_fp32_t  : mu8_acosh_fp32            \
	, mu0_fp16_t  : mu8_acosh_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_acosh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_acosh_fp128           \
	, mu0_fp64_t  : mu8_acosh_fp64            \
	, mu0_fp32_t  : mu8_acosh_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_acosh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_acosh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_acosh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_acosh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_acosh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_acosh(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_acosh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_acosh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_acosh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_acosh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_asin (const mu0_fp128_t __x) { return mu8_asin_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_asin (const mu0_fp64_t  __x) { return mu8_asin_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_asin (const mu0_fp32_t  __x) { return mu8_asin_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_asin (const mu0_fp16_t  __x) { return mu8_asin_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_asin(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_asin_fp128           \
	, mu0_fp64_t  : mu8_asin_fp64            \
	, mu0_fp32_t  : mu8_asin_fp32            \
	, mu0_fp16_t  : mu8_asin_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_asin(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_asin_fp128           \
	, mu0_fp64_t  : mu8_asin_fp64            \
	, mu0_fp32_t  : mu8_asin_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_asin(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_asin_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_asin_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_asin_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_asin_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_asin(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_asin_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_asin_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_asin_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_asin_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_asinh (const mu0_fp128_t __x) { return mu8_asinh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_asinh (const mu0_fp64_t  __x) { return mu8_asinh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_asinh (const mu0_fp32_t  __x) { return mu8_asinh_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_asinh (const mu0_fp16_t  __x) { return mu8_asinh_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_asinh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_asinh_fp128           \
	, mu0_fp64_t  : mu8_asinh_fp64            \
	, mu0_fp32_t  : mu8_asinh_fp32            \
	, mu0_fp16_t  : mu8_asinh_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_asinh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_asinh_fp128           \
	, mu0_fp64_t  : mu8_asinh_fp64            \
	, mu0_fp32_t  : mu8_asinh_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_asinh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_asinh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_asinh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_asinh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_asinh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_asinh(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_asinh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_asinh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_asinh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_asinh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_atan (const mu0_fp128_t __x) { return mu8_atan_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_atan (const mu0_fp64_t  __x) { return mu8_atan_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_atan (const mu0_fp32_t  __x) { return mu8_atan_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_atan (const mu0_fp16_t  __x) { return mu8_atan_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_atan(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_atan_fp128           \
	, mu0_fp64_t  : mu8_atan_fp64            \
	, mu0_fp32_t  : mu8_atan_fp32            \
	, mu0_fp16_t  : mu8_atan_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_atan(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_atan_fp128           \
	, mu0_fp64_t  : mu8_atan_fp64            \
	, mu0_fp32_t  : mu8_atan_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_atan(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_atan_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_atan_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_atan_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_atan_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_atan(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_atan_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_atan_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_atan_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_atan_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_atan2 (const mu0_fp128_t __y, const mu0_fp128_t __x) { return mu8_atan2_fp128 (__y, __x); }
__mu0_overload__ mu0_fp64_t  mu8_atan2 (const mu0_fp64_t  __y, const mu0_fp64_t  __x) { return mu8_atan2_fp64  (__y, __x); }
__mu0_overload__ mu0_fp32_t  mu8_atan2 (const mu0_fp32_t  __y, const mu0_fp32_t  __x) { return mu8_atan2_fp32  (__y, __x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_atan2 (const mu0_fp16_t  __y, const mu0_fp16_t  __x) { return mu8_atan2_fp16  (__y, __x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_atan2(__y, __x) __mu0_generic__((__y)+(__x) \
	, mu0_fp128_t : mu8_atan2_fp128                        \
	, mu0_fp64_t  : mu8_atan2_fp64                         \
	, mu0_fp32_t  : mu8_atan2_fp32                         \
	, mu0_fp16_t  : mu8_atan2_fp16                         \
) (__y, __x)
#	elif MU0_HAVE_GENERIC
#	define mu8_atan2(__y, __x) __mu0_generic__((__y)+(__x) \
	, mu0_fp128_t : mu8_atan2_fp128                        \
	, mu0_fp64_t  : mu8_atan2_fp64                         \
	, mu0_fp32_t  : mu8_atan2_fp32                         \
) (__y, __x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_atan2(__y, __x) mu8_cast(__mu0_kindof__((__y)+(__x)),                                                                           \
	(                                                                                                                                          \
		  __mu0_isofkind__(mu0_fp128_t, ((__y)+(__x))) ? mu8_atan2_fp128 (mu0_const_fp128(mu0_fp128_t, __y), mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__y)+(__x))) ? mu8_atan2_fp64  (mu0_const_fp64(mu0_fp64_t  , __y), mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__y)+(__x))) ? mu8_atan2_fp32  (mu0_const_fp32(mu0_fp32_t  , __y), mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__y)+(__x))) ? mu8_atan2_fp16  (mu0_const_fp16(mu0_fp16_t  , __y), mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                                                     \
	))
#	else
#	define mu8_atan2(__y, __x)                                                                                                                 \
	(                                                                                                                                          \
		  __mu0_isofsize__(mu0_fp128_t, ((__y)+(__x))) ? mu8_atan2_fp128 (mu0_const_fp128(mu0_fp128_t, __y), mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__y)+(__x))) ? mu8_atan2_fp64  (mu0_const_fp64(mu0_fp64_t  , __y), mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__y)+(__x))) ? mu8_atan2_fp32  (mu0_const_fp32(mu0_fp32_t  , __y), mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__y)+(__x))) ? mu8_atan2_fp16  (mu0_const_fp16(mu0_fp16_t  , __y), mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                                                     \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_atanh (const mu0_fp128_t __x) { return mu8_atanh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_atanh (const mu0_fp64_t  __x) { return mu8_atanh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_atanh (const mu0_fp32_t  __x) { return mu8_atanh_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_atanh (const mu0_fp16_t  __x) { return mu8_atanh_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_atanh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_atanh_fp128           \
	, mu0_fp64_t  : mu8_atanh_fp64            \
	, mu0_fp32_t  : mu8_atanh_fp32            \
	, mu0_fp16_t  : mu8_atanh_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_atanh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_atanh_fp128           \
	, mu0_fp64_t  : mu8_atanh_fp64            \
	, mu0_fp32_t  : mu8_atanh_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_atanh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_atanh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_atanh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_atanh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_atanh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_atanh(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_atanh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_atanh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_atanh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_atanh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_cbrt (const mu0_fp128_t __x) { return mu8_cbrt_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_cbrt (const mu0_fp64_t  __x) { return mu8_cbrt_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_cbrt (const mu0_fp32_t  __x) { return mu8_cbrt_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_cbrt (const mu0_fp16_t  __x) { return mu8_cbrt_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_cbrt(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cbrt_fp128           \
	, mu0_fp64_t  : mu8_cbrt_fp64            \
	, mu0_fp32_t  : mu8_cbrt_fp32            \
	, mu0_fp16_t  : mu8_cbrt_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_cbrt(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cbrt_fp128           \
	, mu0_fp64_t  : mu8_cbrt_fp64            \
	, mu0_fp32_t  : mu8_cbrt_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_cbrt(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_cbrt_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_cbrt_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_cbrt_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_cbrt_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_cbrt(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_cbrt_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_cbrt_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_cbrt_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_cbrt_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_ceil (const mu0_fp128_t __x) { return mu8_ceil_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_ceil (const mu0_fp64_t  __x) { return mu8_ceil_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_ceil (const mu0_fp32_t  __x) { return mu8_ceil_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_ceil (const mu0_fp16_t  __x) { return mu8_ceil_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_ceil(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_ceil_fp128           \
	, mu0_fp64_t  : mu8_ceil_fp64            \
	, mu0_fp32_t  : mu8_ceil_fp32            \
	, mu0_fp16_t  : mu8_ceil_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_ceil(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_ceil_fp128           \
	, mu0_fp64_t  : mu8_ceil_fp64            \
	, mu0_fp32_t  : mu8_ceil_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_ceil(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_ceil_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_ceil_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_ceil_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_ceil_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_ceil(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_ceil_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_ceil_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_ceil_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_ceil_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_copysign (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_copysign_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_copysign (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_copysign_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_copysign (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_copysign_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_copysign (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_copysign_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_copysign(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_copysign_fp128                        \
	, mu0_fp64_t  : mu8_copysign_fp64                         \
	, mu0_fp32_t  : mu8_copysign_fp32                         \
	, mu0_fp16_t  : mu8_copysign_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_copysign(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_copysign_fp128                        \
	, mu0_fp64_t  : mu8_copysign_fp64                         \
	, mu0_fp32_t  : mu8_copysign_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_copysign(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_copysign_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_copysign_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_copysign_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_copysign_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                        \
	))
#	else
#	define mu8_copysign(__x, __y)                                                                                                                 \
	(                                                                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_copysign_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_copysign_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_copysign_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_copysign_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_cos (const mu0_fp128_t __x) { return mu8_cos_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_cos (const mu0_fp64_t  __x) { return mu8_cos_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_cos (const mu0_fp32_t  __x) { return mu8_cos_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_cos (const mu0_fp16_t  __x) { return mu8_cos_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_cos(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cos_fp128           \
	, mu0_fp64_t  : mu8_cos_fp64            \
	, mu0_fp32_t  : mu8_cos_fp32            \
	, mu0_fp16_t  : mu8_cos_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_cos(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cos_fp128           \
	, mu0_fp64_t  : mu8_cos_fp64            \
	, mu0_fp32_t  : mu8_cos_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_cos(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_cos_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_cos_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_cos_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_cos_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_cos(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_cos_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_cos_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_cos_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_cos_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_cosh (const mu0_fp128_t __x) { return mu8_cosh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_cosh (const mu0_fp64_t  __x) { return mu8_cosh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_cosh (const mu0_fp32_t  __x) { return mu8_cosh_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_cosh (const mu0_fp16_t  __x) { return mu8_cosh_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_cosh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cosh_fp128           \
	, mu0_fp64_t  : mu8_cosh_fp64            \
	, mu0_fp32_t  : mu8_cosh_fp32            \
	, mu0_fp16_t  : mu8_cosh_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_cosh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_cosh_fp128           \
	, mu0_fp64_t  : mu8_cosh_fp64            \
	, mu0_fp32_t  : mu8_cosh_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_cosh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_cosh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_cosh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_cosh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_cosh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_cosh(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_cosh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_cosh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_cosh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_cosh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_erf (const mu0_fp128_t __x) { return mu8_erf_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_erf (const mu0_fp64_t  __x) { return mu8_erf_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_erf (const mu0_fp32_t  __x) { return mu8_erf_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_erf (const mu0_fp16_t  __x) { return mu8_erf_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_erf(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_erf_fp128           \
	, mu0_fp64_t  : mu8_erf_fp64            \
	, mu0_fp32_t  : mu8_erf_fp32            \
	, mu0_fp16_t  : mu8_erf_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_erf(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_erf_fp128           \
	, mu0_fp64_t  : mu8_erf_fp64            \
	, mu0_fp32_t  : mu8_erf_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_erf(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_erf_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_erf_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_erf_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_erf_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_erf(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_erf_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_erf_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_erf_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_erf_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_erfc (const mu0_fp128_t __x) { return mu8_erfc_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_erfc (const mu0_fp64_t  __x) { return mu8_erfc_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_erfc (const mu0_fp32_t  __x) { return mu8_erfc_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_erfc (const mu0_fp16_t  __x) { return mu8_erfc_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_erfc(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_erfc_fp128           \
	, mu0_fp64_t  : mu8_erfc_fp64            \
	, mu0_fp32_t  : mu8_erfc_fp32            \
	, mu0_fp16_t  : mu8_erfc_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_erfc(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_erfc_fp128           \
	, mu0_fp64_t  : mu8_erfc_fp64            \
	, mu0_fp32_t  : mu8_erfc_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_erfc(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_erfc_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_erfc_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_erfc_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_erfc_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_erfc(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_erfc_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_erfc_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_erfc_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_erfc_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_exp (const mu0_fp128_t __x) { return mu8_exp_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_exp (const mu0_fp64_t  __x) { return mu8_exp_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_exp (const mu0_fp32_t  __x) { return mu8_exp_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_exp (const mu0_fp16_t  __x) { return mu8_exp_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_exp(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_exp_fp128           \
	, mu0_fp64_t  : mu8_exp_fp64            \
	, mu0_fp32_t  : mu8_exp_fp32            \
	, mu0_fp16_t  : mu8_exp_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_exp(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_exp_fp128           \
	, mu0_fp64_t  : mu8_exp_fp64            \
	, mu0_fp32_t  : mu8_exp_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_exp(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_exp_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_exp_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_exp_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_exp_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_exp(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_exp_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_exp_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_exp_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_exp_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_exp2 (const mu0_fp128_t __x) { return mu8_exp2_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_exp2 (const mu0_fp64_t  __x) { return mu8_exp2_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_exp2 (const mu0_fp32_t  __x) { return mu8_exp2_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_exp2 (const mu0_fp16_t  __x) { return mu8_exp2_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_exp2(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_exp2_fp128           \
	, mu0_fp64_t  : mu8_exp2_fp64            \
	, mu0_fp32_t  : mu8_exp2_fp32            \
	, mu0_fp16_t  : mu8_exp2_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_exp2(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_exp2_fp128           \
	, mu0_fp64_t  : mu8_exp2_fp64            \
	, mu0_fp32_t  : mu8_exp2_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_exp2(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_exp2_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_exp2_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_exp2_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_exp2_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_exp2(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_exp2_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_exp2_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_exp2_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_exp2_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_expm1 (const mu0_fp128_t __x) { return mu8_expm1_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_expm1 (const mu0_fp64_t  __x) { return mu8_expm1_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_expm1 (const mu0_fp32_t  __x) { return mu8_expm1_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_expm1 (const mu0_fp16_t  __x) { return mu8_expm1_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_expm1(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_expm1_fp128           \
	, mu0_fp64_t  : mu8_expm1_fp64            \
	, mu0_fp32_t  : mu8_expm1_fp32            \
	, mu0_fp16_t  : mu8_expm1_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_expm1(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_expm1_fp128           \
	, mu0_fp64_t  : mu8_expm1_fp64            \
	, mu0_fp32_t  : mu8_expm1_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_expm1(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_expm1_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_expm1_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_expm1_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_expm1_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_expm1(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_expm1_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_expm1_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_expm1_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_expm1_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fabs (const mu0_fp128_t __x) { return mu8_fabs_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_fabs (const mu0_fp64_t  __x) { return mu8_fabs_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_fabs (const mu0_fp32_t  __x) { return mu8_fabs_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_fabs (const mu0_fp16_t  __x) { return mu8_fabs_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_fabs(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_fabs_fp128           \
	, mu0_fp64_t  : mu8_fabs_fp64            \
	, mu0_fp32_t  : mu8_fabs_fp32            \
	, mu0_fp16_t  : mu8_fabs_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_fabs(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_fabs_fp128           \
	, mu0_fp64_t  : mu8_fabs_fp64            \
	, mu0_fp32_t  : mu8_fabs_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fabs(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_fabs_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_fabs_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_fabs_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_fabs_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_fabs(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_fabs_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_fabs_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_fabs_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_fabs_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fdim (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_fdim_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_fdim (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_fdim_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_fdim (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_fdim_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_fdim (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_fdim_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_fdim(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fdim_fp128                        \
	, mu0_fp64_t  : mu8_fdim_fp64                         \
	, mu0_fp32_t  : mu8_fdim_fp32                         \
	, mu0_fp16_t  : mu8_fdim_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_fdim(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fdim_fp128                        \
	, mu0_fp64_t  : mu8_fdim_fp64                         \
	, mu0_fp32_t  : mu8_fdim_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fdim(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                         \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fdim_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fdim_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fdim_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fdim_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	))
#	else
#	define mu8_fdim(__x, __y)                                                                                                                 \
	(                                                                                                                                         \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fdim_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fdim_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fdim_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fdim_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_floor (const mu0_fp128_t __x) { return mu8_floor_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_floor (const mu0_fp64_t  __x) { return mu8_floor_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_floor (const mu0_fp32_t  __x) { return mu8_floor_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_floor (const mu0_fp16_t  __x) { return mu8_floor_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_floor(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_floor_fp128           \
	, mu0_fp64_t  : mu8_floor_fp64            \
	, mu0_fp32_t  : mu8_floor_fp32            \
	, mu0_fp16_t  : mu8_floor_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_floor(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_floor_fp128           \
	, mu0_fp64_t  : mu8_floor_fp64            \
	, mu0_fp32_t  : mu8_floor_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_floor(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_floor_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_floor_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_floor_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_floor_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_floor(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_floor_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_floor_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_floor_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_floor_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fma (const mu0_fp128_t __x, const mu0_fp128_t __y, const mu0_fp128_t __z) { return mu8_fma_fp128 (__x, __y, __z); }
__mu0_overload__ mu0_fp64_t  mu8_fma (const mu0_fp64_t  __x, const mu0_fp64_t  __y, const mu0_fp64_t  __z) { return mu8_fma_fp64  (__x, __y, __z); }
__mu0_overload__ mu0_fp32_t  mu8_fma (const mu0_fp32_t  __x, const mu0_fp32_t  __y, const mu0_fp32_t  __z) { return mu8_fma_fp32  (__x, __y, __z); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_fma (const mu0_fp16_t  __x, const mu0_fp16_t  __y, const mu0_fp16_t  __z) { return mu8_fma_fp16  (__x, __y, __z); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_fma(__x, __y, __z) __mu0_generic__((__x)+(__y)+(__z) \
	, mu0_fp128_t : mu8_fma_fp128                                   \
	, mu0_fp64_t  : mu8_fma_fp64                                    \
	, mu0_fp32_t  : mu8_fma_fp32                                    \
	, mu0_fp16_t  : mu8_fma_fp16                                    \
) (__x, __y, __z)
#	elif MU0_HAVE_GENERIC
#	define mu8_fma(__x, __y, __z) __mu0_generic__((__x)+(__y)+(__z) \
	, mu0_fp128_t : mu8_fma_fp128                                   \
	, mu0_fp64_t  : mu8_fma_fp64                                    \
	, mu0_fp32_t  : mu8_fma_fp32                                    \
) (__x, __y, __z)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fma(__x, __y, __z) mu8_cast(__mu0_kindof__((__x)+(__y)+(__z)),                                                                                                         \
	(                                                                                                                                                                                 \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y)+(__z))) ? mu8_fma_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y), mu0_const_fp128(mu0_fp128_t, __z)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y), mu0_const_fp64(mu0_fp64_t  , __z)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y), mu0_const_fp32(mu0_fp32_t  , __z)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y), mu0_const_fp16(mu0_fp16_t  , __z)) \
		: 0                                                                                                                                                                            \
	))
#	else
#	define mu8_fma(__x, __y, __z)                                                                                                                                                     \
	(                                                                                                                                                                                 \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y)+(__z))) ? mu8_fma_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y), mu0_const_fp128(mu0_fp128_t, __z)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y), mu0_const_fp64(mu0_fp64_t  , __z)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y), mu0_const_fp32(mu0_fp32_t  , __z)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y)+(__z))) ? mu8_fma_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y), mu0_const_fp16(mu0_fp16_t  , __z)) \
		: 0                                                                                                                                                                            \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fmax (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_fmax_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_fmax (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_fmax_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_fmax (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_fmax_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_fmax (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_fmax_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_fmax(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fmax_fp128                        \
	, mu0_fp64_t  : mu8_fmax_fp64                         \
	, mu0_fp32_t  : mu8_fmax_fp32                         \
	, mu0_fp16_t  : mu8_fmax_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_fmax(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fmax_fp128                        \
	, mu0_fp64_t  : mu8_fmax_fp64                         \
	, mu0_fp32_t  : mu8_fmax_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fmax(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                         \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fmax_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fmax_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fmax_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fmax_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	))
#	else
#	define mu8_fmax(__x, __y)                                                                                                                 \
	(                                                                                                                                         \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fmax_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fmax_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fmax_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fmax_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fmin (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_fmin_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_fmin (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_fmin_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_fmin (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_fmin_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_fmin (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_fmin_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_fmin(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fmin_fp128                        \
	, mu0_fp64_t  : mu8_fmin_fp64                         \
	, mu0_fp32_t  : mu8_fmin_fp32                         \
	, mu0_fp16_t  : mu8_fmin_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_fmin(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fmin_fp128                        \
	, mu0_fp64_t  : mu8_fmin_fp64                         \
	, mu0_fp32_t  : mu8_fmin_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fmin(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                         \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fmin_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fmin_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fmin_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fmin_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	))
#	else
#	define mu8_fmin(__x, __y)                                                                                                                 \
	(                                                                                                                                         \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fmin_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fmin_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fmin_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fmin_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_fmod (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_fmod_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_fmod (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_fmod_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_fmod (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_fmod_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_fmod (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_fmod_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_fmod(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fmod_fp128                        \
	, mu0_fp64_t  : mu8_fmod_fp64                         \
	, mu0_fp32_t  : mu8_fmod_fp32                         \
	, mu0_fp16_t  : mu8_fmod_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_fmod(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_fmod_fp128                        \
	, mu0_fp64_t  : mu8_fmod_fp64                         \
	, mu0_fp32_t  : mu8_fmod_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_fmod(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                         \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fmod_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fmod_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fmod_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fmod_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	))
#	else
#	define mu8_fmod(__x, __y)                                                                                                                 \
	(                                                                                                                                         \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_fmod_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_fmod_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_fmod_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_fmod_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                    \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_frexp (const mu0_fp128_t __x, mu0_sint64_t * __e) { return mu8_frexp_fp128 (__x, __e); }
__mu0_overload__ mu0_fp64_t  mu8_frexp (const mu0_fp64_t  __x, mu0_sint64_t * __e) { return mu8_frexp_fp64  (__x, __e); }
__mu0_overload__ mu0_fp32_t  mu8_frexp (const mu0_fp32_t  __x, mu0_sint64_t * __e) { return mu8_frexp_fp32  (__x, __e); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_frexp (const mu0_fp16_t  __x, mu0_sint64_t * __e) { return mu8_frexp_fp16  (__x, __e); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_frexp(__x, __e) __mu0_generic__((__x) \
	, mu0_fp128_t : mu8_frexp_fp128                  \
	, mu0_fp64_t  : mu8_frexp_fp64                   \
	, mu0_fp32_t  : mu8_frexp_fp32                   \
	, mu0_fp16_t  : mu8_frexp_fp16                   \
) (__x, __e)
#	elif MU0_HAVE_GENERIC
#	define mu8_frexp(__x, __e) __mu0_generic__((__x) \
	, mu0_fp128_t : mu8_frexp_fp128                  \
	, mu0_fp64_t  : mu8_frexp_fp64                   \
	, mu0_fp32_t  : mu8_frexp_fp32                   \
) (__x, __e)
#	elif MU0_HAVE_TYPEOF
#	define mu8_frexp(__x, __e) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                                  \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_frexp_fp128 (mu0_const_fp128(mu0_fp128_t, __x), __e) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_frexp_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), __e) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_frexp_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), __e) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_frexp_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), __e) \
		: 0                                                                                             \
	))
#	else
#	define mu8_frexp(__x, __e)                                                                         \
	(                                                                                                  \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_frexp_fp128 (mu0_const_fp128(mu0_fp128_t, __x), __e) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_frexp_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), __e) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_frexp_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), __e) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_frexp_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), __e) \
		: 0                                                                                             \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_hypot (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_hypot_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_hypot (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_hypot_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_hypot (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_hypot_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_hypot (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_hypot_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_hypot(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_hypot_fp128                        \
	, mu0_fp64_t  : mu8_hypot_fp64                         \
	, mu0_fp32_t  : mu8_hypot_fp32                         \
	, mu0_fp16_t  : mu8_hypot_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_hypot(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_hypot_fp128                        \
	, mu0_fp64_t  : mu8_hypot_fp64                         \
	, mu0_fp32_t  : mu8_hypot_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_hypot(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                          \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_hypot_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_hypot_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_hypot_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_hypot_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                     \
	))
#	else
#	define mu8_hypot(__x, __y)                                                                                                                 \
	(                                                                                                                                          \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_hypot_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_hypot_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_hypot_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_hypot_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                     \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_sint64_t mu8_ilogb (const mu0_fp128_t __x) { return mu8_ilogb_fp128 (__x); }
__mu0_overload__ mu0_sint64_t mu8_ilogb (const mu0_fp64_t  __x) { return mu8_ilogb_fp64  (__x); }
__mu0_overload__ mu0_sint64_t mu8_ilogb (const mu0_fp32_t  __x) { return mu8_ilogb_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_sint64_t mu8_ilogb (const mu0_fp16_t  __x) { return mu8_ilogb_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_ilogb(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_ilogb_fp128           \
	, mu0_fp64_t  : mu8_ilogb_fp64            \
	, mu0_fp32_t  : mu8_ilogb_fp32            \
	, mu0_fp16_t  : mu8_ilogb_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_ilogb(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_ilogb_fp128           \
	, mu0_fp64_t  : mu8_ilogb_fp64            \
	, mu0_fp32_t  : mu8_ilogb_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_ilogb(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_ilogb_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_ilogb_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_ilogb_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_ilogb_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	else
#	define mu8_ilogb(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_ilogb_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_ilogb_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_ilogb_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_ilogb_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_sint64_t mu8_irint (const mu0_fp128_t __x) { return mu8_irint_fp128 (__x); }
__mu0_overload__ mu0_sint64_t mu8_irint (const mu0_fp64_t  __x) { return mu8_irint_fp64  (__x); }
__mu0_overload__ mu0_sint64_t mu8_irint (const mu0_fp32_t  __x) { return mu8_irint_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_sint64_t mu8_irint (const mu0_fp16_t  __x) { return mu8_irint_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_irint(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_irint_fp128           \
	, mu0_fp64_t  : mu8_irint_fp64            \
	, mu0_fp32_t  : mu8_irint_fp32            \
	, mu0_fp16_t  : mu8_irint_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_irint(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_irint_fp128           \
	, mu0_fp64_t  : mu8_irint_fp64            \
	, mu0_fp32_t  : mu8_irint_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_irint(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_irint_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_irint_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_irint_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_irint_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	else
#	define mu8_irint(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_irint_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_irint_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_irint_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_irint_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_sint64_t mu8_iround (const mu0_fp128_t __x) { return mu8_iround_fp128 (__x); }
__mu0_overload__ mu0_sint64_t mu8_iround (const mu0_fp64_t  __x) { return mu8_iround_fp64  (__x); }
__mu0_overload__ mu0_sint64_t mu8_iround (const mu0_fp32_t  __x) { return mu8_iround_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_sint64_t mu8_iround (const mu0_fp16_t  __x) { return mu8_iround_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_iround(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_iround_fp128           \
	, mu0_fp64_t  : mu8_iround_fp64            \
	, mu0_fp32_t  : mu8_iround_fp32            \
	, mu0_fp16_t  : mu8_iround_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_iround(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_iround_fp128           \
	, mu0_fp64_t  : mu8_iround_fp64            \
	, mu0_fp32_t  : mu8_iround_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_iround(__x)                                                                         \
	(                                                                                              \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_iround_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_iround_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_iround_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_iround_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                         \
	)
#	else
#	define mu8_iround(__x)                                                                         \
	(                                                                                              \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_iround_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_iround_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_iround_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_iround_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                         \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_j0 (const mu0_fp128_t __x) { return mu8_j0_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_j0 (const mu0_fp64_t  __x) { return mu8_j0_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_j0 (const mu0_fp32_t  __x) { return mu8_j0_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_j0 (const mu0_fp16_t  __x) { return mu8_j0_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_j0(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_j0_fp128           \
	, mu0_fp64_t  : mu8_j0_fp64            \
	, mu0_fp32_t  : mu8_j0_fp32            \
	, mu0_fp16_t  : mu8_j0_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_j0(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_j0_fp128           \
	, mu0_fp64_t  : mu8_j0_fp64            \
	, mu0_fp32_t  : mu8_j0_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_j0(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                          \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_j0_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_j0_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_j0_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_j0_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	))
#	else
#	define mu8_j0(__x)                                                                         \
	(                                                                                          \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_j0_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_j0_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_j0_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_j0_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_j1 (const mu0_fp128_t __x) { return mu8_j1_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_j1 (const mu0_fp64_t  __x) { return mu8_j1_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_j1 (const mu0_fp32_t  __x) { return mu8_j1_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_j1 (const mu0_fp16_t  __x) { return mu8_j1_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_j1(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_j1_fp128           \
	, mu0_fp64_t  : mu8_j1_fp64            \
	, mu0_fp32_t  : mu8_j1_fp32            \
	, mu0_fp16_t  : mu8_j1_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_j1(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_j1_fp128           \
	, mu0_fp64_t  : mu8_j1_fp64            \
	, mu0_fp32_t  : mu8_j1_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_j1(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                          \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_j1_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_j1_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_j1_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_j1_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	))
#	else
#	define mu8_j1(__x)                                                                         \
	(                                                                                          \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_j1_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_j1_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_j1_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_j1_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_jn (const mu0_sint64_t __n, const mu0_fp128_t __x) { return mu8_jn_fp128 (__n, __x); }
__mu0_overload__ mu0_fp64_t  mu8_jn (const mu0_sint64_t __n, const mu0_fp64_t  __x) { return mu8_jn_fp64  (__n, __x); }
__mu0_overload__ mu0_fp32_t  mu8_jn (const mu0_sint64_t __n, const mu0_fp32_t  __x) { return mu8_jn_fp32  (__n, __x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_jn (const mu0_sint64_t __n, const mu0_fp16_t  __x) { return mu8_jn_fp16  (__n, __x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_jn(__n, __x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_jn_fp128                \
	, mu0_fp64_t  : mu8_jn_fp64                 \
	, mu0_fp32_t  : mu8_jn_fp32                 \
	, mu0_fp16_t  : mu8_jn_fp16                 \
) (__n, __x)
#	elif MU0_HAVE_GENERIC
#	define mu8_jn(__n, __x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_jn_fp128                \
	, mu0_fp64_t  : mu8_jn_fp64                 \
	, mu0_fp32_t  : mu8_jn_fp32                 \
) (__n, __x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_jn(__n, __x) mu8_cast(__mu0_kindof__(__x),                                                             \
	(                                                                                                                 \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_jn_fp128 (mu8_const_sint64(__n), mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_jn_fp64  (mu8_const_sint64(__n), mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_jn_fp32  (mu8_const_sint64(__n), mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_jn_fp16  (mu8_const_sint64(__n), mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                            \
	))
#	else
#	define mu8_jn(__n, __x)                                                                                           \
	(                                                                                                                 \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_jn_fp128 (mu8_const_sint64(__n), mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_jn_fp64  (mu8_const_sint64(__n), mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_jn_fp32  (mu8_const_sint64(__n), mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_jn_fp16  (mu8_const_sint64(__n), mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                            \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_ldexp (const mu0_fp128_t __x, const mu0_sint64_t __n) { return mu8_ldexp_fp128 (__x, __n); }
__mu0_overload__ mu0_fp64_t  mu8_ldexp (const mu0_fp64_t  __x, const mu0_sint64_t __n) { return mu8_ldexp_fp64  (__x, __n); }
__mu0_overload__ mu0_fp32_t  mu8_ldexp (const mu0_fp32_t  __x, const mu0_sint64_t __n) { return mu8_ldexp_fp32  (__x, __n); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_ldexp (const mu0_fp16_t  __x, const mu0_sint64_t __n) { return mu8_ldexp_fp16  (__x, __n); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_ldexp(__x, __n) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_ldexp_fp128                \
	, mu0_fp64_t  : mu8_ldexp_fp64                 \
	, mu0_fp32_t  : mu8_ldexp_fp32                 \
	, mu0_fp16_t  : mu8_ldexp_fp16                 \
) (__x, __n)
#	elif MU0_HAVE_GENERIC
#	define mu8_ldexp(__x, __n) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_ldexp_fp128                \
	, mu0_fp64_t  : mu8_ldexp_fp64                 \
	, mu0_fp32_t  : mu8_ldexp_fp32                 \
) (__x, __n)
#	elif MU0_HAVE_TYPEOF
#	define mu8_ldexp(__x, __n) mu8_cast(__mu0_kindof__(__x),                                                             \
	(                                                                                                                    \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_ldexp_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu8_const_sint64(__n)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_ldexp_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_ldexp_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_ldexp_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu8_const_sint64(__n)) \
		: 0                                                                                                               \
	))
#	else
#	define mu8_ldexp(__x, __n)                                                                                           \
	(                                                                                                                    \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_ldexp_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu8_const_sint64(__n)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_ldexp_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_ldexp_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_ldexp_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu8_const_sint64(__n)) \
		: 0                                                                                                               \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_lgamma (const mu0_fp128_t __x) { return mu8_lgamma_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_lgamma (const mu0_fp64_t  __x) { return mu8_lgamma_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_lgamma (const mu0_fp32_t  __x) { return mu8_lgamma_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_lgamma (const mu0_fp16_t  __x) { return mu8_lgamma_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_lgamma(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_lgamma_fp128           \
	, mu0_fp64_t  : mu8_lgamma_fp64            \
	, mu0_fp32_t  : mu8_lgamma_fp32            \
	, mu0_fp16_t  : mu8_lgamma_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_lgamma(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_lgamma_fp128           \
	, mu0_fp64_t  : mu8_lgamma_fp64            \
	, mu0_fp32_t  : mu8_lgamma_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_lgamma(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                              \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_lgamma_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_lgamma_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_lgamma_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_lgamma_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                         \
	))
#	else
#	define mu8_lgamma(__x)                                                                         \
	(                                                                                              \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_lgamma_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_lgamma_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_lgamma_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_lgamma_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                         \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_log (const mu0_fp128_t __x) { return mu8_log_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_log (const mu0_fp64_t  __x) { return mu8_log_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_log (const mu0_fp32_t  __x) { return mu8_log_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_log (const mu0_fp16_t  __x) { return mu8_log_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_log(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log_fp128           \
	, mu0_fp64_t  : mu8_log_fp64            \
	, mu0_fp32_t  : mu8_log_fp32            \
	, mu0_fp16_t  : mu8_log_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_log(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log_fp128           \
	, mu0_fp64_t  : mu8_log_fp64            \
	, mu0_fp32_t  : mu8_log_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_log(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_log_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_log_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_log_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_log_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_log(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_log_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_log_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_log_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_log_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_log1p (const mu0_fp128_t __x) { return mu8_log1p_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_log1p (const mu0_fp64_t  __x) { return mu8_log1p_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_log1p (const mu0_fp32_t  __x) { return mu8_log1p_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_log1p (const mu0_fp16_t  __x) { return mu8_log1p_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_log1p(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log1p_fp128           \
	, mu0_fp64_t  : mu8_log1p_fp64            \
	, mu0_fp32_t  : mu8_log1p_fp32            \
	, mu0_fp16_t  : mu8_log1p_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_log1p(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log1p_fp128           \
	, mu0_fp64_t  : mu8_log1p_fp64            \
	, mu0_fp32_t  : mu8_log1p_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_log1p(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_log1p_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_log1p_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_log1p_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_log1p_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_log1p(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_log1p_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_log1p_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_log1p_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_log1p_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_log2 (const mu0_fp128_t __x) { return mu8_log2_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_log2 (const mu0_fp64_t  __x) { return mu8_log2_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_log2 (const mu0_fp32_t  __x) { return mu8_log2_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_log2 (const mu0_fp16_t  __x) { return mu8_log2_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_log2(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log2_fp128           \
	, mu0_fp64_t  : mu8_log2_fp64            \
	, mu0_fp32_t  : mu8_log2_fp32            \
	, mu0_fp16_t  : mu8_log2_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_log2(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log2_fp128           \
	, mu0_fp64_t  : mu8_log2_fp64            \
	, mu0_fp32_t  : mu8_log2_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_log2(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_log2_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_log2_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_log2_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_log2_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_log2(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_log2_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_log2_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_log2_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_log2_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_log10 (const mu0_fp128_t __x) { return mu8_log10_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_log10 (const mu0_fp64_t  __x) { return mu8_log10_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_log10 (const mu0_fp32_t  __x) { return mu8_log10_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_log10 (const mu0_fp16_t  __x) { return mu8_log10_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_log10(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log10_fp128           \
	, mu0_fp64_t  : mu8_log10_fp64            \
	, mu0_fp32_t  : mu8_log10_fp32            \
	, mu0_fp16_t  : mu8_log10_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_log10(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_log10_fp128           \
	, mu0_fp64_t  : mu8_log10_fp64            \
	, mu0_fp32_t  : mu8_log10_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_log10(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_log10_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_log10_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_log10_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_log10_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_log10(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_log10_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_log10_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_log10_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_log10_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_logb (const mu0_fp128_t __x) { return mu8_logb_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_logb (const mu0_fp64_t  __x) { return mu8_logb_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_logb (const mu0_fp32_t  __x) { return mu8_logb_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_logb (const mu0_fp16_t  __x) { return mu8_logb_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_logb(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_logb_fp128           \
	, mu0_fp64_t  : mu8_logb_fp64            \
	, mu0_fp32_t  : mu8_logb_fp32            \
	, mu0_fp16_t  : mu8_logb_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_logb(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_logb_fp128           \
	, mu0_fp64_t  : mu8_logb_fp64            \
	, mu0_fp32_t  : mu8_logb_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_logb(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_logb_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_logb_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_logb_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_logb_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_logb(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_logb_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_logb_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_logb_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_logb_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_modf (const mu0_fp128_t __x, mu0_fp128_t * __f) { return mu8_modf_fp128 (__x, __f); }
__mu0_overload__ mu0_fp64_t  mu8_modf (const mu0_fp64_t  __x, mu0_fp64_t  * __f) { return mu8_modf_fp64  (__x, __f); }
__mu0_overload__ mu0_fp32_t  mu8_modf (const mu0_fp32_t  __x, mu0_fp32_t  * __f) { return mu8_modf_fp32  (__x, __f); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_modf (const mu0_fp16_t  __x, mu0_fp16_t  * __f) { return mu8_modf_fp16  (__x, __f); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_modf(__x, __f) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_modf_fp128                \
	, mu0_fp64_t  : mu8_modf_fp64                 \
	, mu0_fp32_t  : mu8_modf_fp32                 \
	, mu0_fp16_t  : mu8_modf_fp16                 \
) (__x, __f)
#	elif MU0_HAVE_GENERIC
#	define mu8_modf(__x, __f) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_modf_fp128                \
	, mu0_fp64_t  : mu8_modf_fp64                 \
	, mu0_fp32_t  : mu8_modf_fp32                 \
) (__x, __f)
#	elif MU0_HAVE_TYPEOF
#	define mu8_modf(__x, __f) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                                 \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_modf_fp128 (mu0_const_fp128(mu0_fp128_t, __x), __f) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_modf_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), __f) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_modf_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), __f) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_modf_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), __f) \
		: 0                                                                                            \
	))
#	else
#	define mu8_modf(__x, __f)                                                                         \
	(                                                                                                 \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_modf_fp128 (mu0_const_fp128(mu0_fp128_t, __x), __f) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_modf_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), __f) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_modf_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), __f) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_modf_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), __f) \
		: 0                                                                                            \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_nearbyint (const mu0_fp128_t __x) { return mu8_nearbyint_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_nearbyint (const mu0_fp64_t  __x) { return mu8_nearbyint_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_nearbyint (const mu0_fp32_t  __x) { return mu8_nearbyint_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_nearbyint (const mu0_fp16_t  __x) { return mu8_nearbyint_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_nearbyint(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_nearbyint_fp128           \
	, mu0_fp64_t  : mu8_nearbyint_fp64            \
	, mu0_fp32_t  : mu8_nearbyint_fp32            \
	, mu0_fp16_t  : mu8_nearbyint_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_nearbyint(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_nearbyint_fp128           \
	, mu0_fp64_t  : mu8_nearbyint_fp64            \
	, mu0_fp32_t  : mu8_nearbyint_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_nearbyint(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                                 \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_nearbyint_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_nearbyint_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_nearbyint_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_nearbyint_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                            \
	))
#	else
#	define mu8_nearbyint(__x)                                                                         \
	(                                                                                                 \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_nearbyint_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_nearbyint_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_nearbyint_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_nearbyint_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                            \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_nextafter (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_nextafter_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_nextafter (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_nextafter_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_nextafter (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_nextafter_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_nextafter (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_nextafter_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_nextafter(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_nextafter_fp128                        \
	, mu0_fp64_t  : mu8_nextafter_fp64                         \
	, mu0_fp32_t  : mu8_nextafter_fp32                         \
	, mu0_fp16_t  : mu8_nextafter_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_nextafter(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_nextafter_fp128                        \
	, mu0_fp64_t  : mu8_nextafter_fp64                         \
	, mu0_fp32_t  : mu8_nextafter_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_nextafter(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                              \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_nextafter_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_nextafter_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_nextafter_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_nextafter_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                         \
	))
#	else
#	define mu8_nextafter(__x, __y)                                                                                                                 \
	(                                                                                                                                              \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_nextafter_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_nextafter_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_nextafter_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_nextafter_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                         \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_nexttoward (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_nexttoward_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_nexttoward (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_nexttoward_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_nexttoward (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_nexttoward_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_nexttoward (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_nexttoward_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_nexttoward(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_nexttoward_fp128                        \
	, mu0_fp64_t  : mu8_nexttoward_fp64                         \
	, mu0_fp32_t  : mu8_nexttoward_fp32                         \
	, mu0_fp16_t  : mu8_nexttoward_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_nexttoward(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_nexttoward_fp128                        \
	, mu0_fp64_t  : mu8_nexttoward_fp64                         \
	, mu0_fp32_t  : mu8_nexttoward_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_nexttoward(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                               \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_nexttoward_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_nexttoward_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_nexttoward_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_nexttoward_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                          \
	))
#	else
#	define mu8_nexttoward(__x, __y)                                                                                                                 \
	(                                                                                                                                               \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_nexttoward_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_nexttoward_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_nexttoward_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_nexttoward_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                          \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_pow (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_pow_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_pow (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_pow_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_pow (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_pow_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_pow (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_pow_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_pow(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_pow_fp128                        \
	, mu0_fp64_t  : mu8_pow_fp64                         \
	, mu0_fp32_t  : mu8_pow_fp32                         \
	, mu0_fp16_t  : mu8_pow_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_pow(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_pow_fp128                        \
	, mu0_fp64_t  : mu8_pow_fp64                         \
	, mu0_fp32_t  : mu8_pow_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_pow(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                        \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_pow_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_pow_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_pow_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_pow_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                   \
	))
#	else
#	define mu8_pow(__x, __y)                                                                                                                 \
	(                                                                                                                                        \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_pow_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_pow_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_pow_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_pow_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                   \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_remainder (const mu0_fp128_t __x, const mu0_fp128_t __y) { return mu8_remainder_fp128 (__x, __y); }
__mu0_overload__ mu0_fp64_t  mu8_remainder (const mu0_fp64_t  __x, const mu0_fp64_t  __y) { return mu8_remainder_fp64  (__x, __y); }
__mu0_overload__ mu0_fp32_t  mu8_remainder (const mu0_fp32_t  __x, const mu0_fp32_t  __y) { return mu8_remainder_fp32  (__x, __y); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_remainder (const mu0_fp16_t  __x, const mu0_fp16_t  __y) { return mu8_remainder_fp16  (__x, __y); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_remainder(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_remainder_fp128                        \
	, mu0_fp64_t  : mu8_remainder_fp64                         \
	, mu0_fp32_t  : mu8_remainder_fp32                         \
	, mu0_fp16_t  : mu8_remainder_fp16                         \
) (__x, __y)
#	elif MU0_HAVE_GENERIC
#	define mu8_remainder(__x, __y) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_remainder_fp128                        \
	, mu0_fp64_t  : mu8_remainder_fp64                         \
	, mu0_fp32_t  : mu8_remainder_fp32                         \
) (__x, __y)
#	elif MU0_HAVE_TYPEOF
#	define mu8_remainder(__x, __y) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                              \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_remainder_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_remainder_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_remainder_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_remainder_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                         \
	))
#	else
#	define mu8_remainder(__x, __y)                                                                                                                 \
	(                                                                                                                                              \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_remainder_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y)) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_remainder_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y)) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_remainder_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y)) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_remainder_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y)) \
		: 0                                                                                                                                         \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_remquo (const mu0_fp128_t __x, const mu0_fp128_t __y, mu0_sint64_t * __q) { return mu8_remquo_fp128 (__x, __y, __q); }
__mu0_overload__ mu0_fp64_t  mu8_remquo (const mu0_fp64_t  __x, const mu0_fp64_t  __y, mu0_sint64_t * __q) { return mu8_remquo_fp64  (__x, __y, __q); }
__mu0_overload__ mu0_fp32_t  mu8_remquo (const mu0_fp32_t  __x, const mu0_fp32_t  __y, mu0_sint64_t * __q) { return mu8_remquo_fp32  (__x, __y, __q); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_remquo (const mu0_fp16_t  __x, const mu0_fp16_t  __y, mu0_sint64_t * __q) { return mu8_remquo_fp16  (__x, __y, __q); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_remquo(__x, __y, __q) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_remquo_fp128                             \
	, mu0_fp64_t  : mu8_remquo_fp64                              \
	, mu0_fp32_t  : mu8_remquo_fp32                              \
	, mu0_fp16_t  : mu8_remquo_fp16                              \
) (__x, __y, __q)
#	elif MU0_HAVE_GENERIC
#	define mu8_remquo(__x, __y, __q) __mu0_generic__((__x)+(__y) \
	, mu0_fp128_t : mu8_remquo_fp128                             \
	, mu0_fp64_t  : mu8_remquo_fp64                              \
	, mu0_fp32_t  : mu8_remquo_fp32                              \
) (__x, __y, __q)
#	elif MU0_HAVE_TYPEOF
#	define mu8_remquo(__x, __y, __q) mu8_cast(__mu0_kindof__((__x)+(__y)),                                                                           \
	(                                                                                                                                                \
		  __mu0_isofkind__(mu0_fp128_t, ((__x)+(__y))) ? mu8_remquo_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y), __q) \
		: __mu0_isofkind__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_remquo_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y), __q) \
		: __mu0_isofkind__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_remquo_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y), __q) \
		: __mu0_isofkind__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_remquo_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y), __q) \
		: 0                                                                                                                                           \
	))
#	else
#	define mu8_remquo(__x, __y, __q)                                                                                                                 \
	(                                                                                                                                                \
		  __mu0_isofsize__(mu0_fp128_t, ((__x)+(__y))) ? mu8_remquo_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu0_const_fp128(mu0_fp128_t, __y), __q) \
		: __mu0_isofsize__(mu0_fp64_t,  ((__x)+(__y))) ? mu8_remquo_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu0_const_fp64(mu0_fp64_t  , __y), __q) \
		: __mu0_isofsize__(mu0_fp32_t,  ((__x)+(__y))) ? mu8_remquo_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu0_const_fp32(mu0_fp32_t  , __y), __q) \
		: __mu0_isofsize__(mu0_fp16_t,  ((__x)+(__y))) ? mu8_remquo_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu0_const_fp16(mu0_fp16_t  , __y), __q) \
		: 0                                                                                                                                           \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_rint (const mu0_fp128_t __x) { return mu8_rint_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_rint (const mu0_fp64_t  __x) { return mu8_rint_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_rint (const mu0_fp32_t  __x) { return mu8_rint_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_rint (const mu0_fp16_t  __x) { return mu8_rint_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_rint(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_rint_fp128           \
	, mu0_fp64_t  : mu8_rint_fp64            \
	, mu0_fp32_t  : mu8_rint_fp32            \
	, mu0_fp16_t  : mu8_rint_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_rint(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_rint_fp128           \
	, mu0_fp64_t  : mu8_rint_fp64            \
	, mu0_fp32_t  : mu8_rint_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_rint(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_rint_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_rint_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_rint_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_rint_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_rint(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_rint_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_rint_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_rint_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_rint_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_round (const mu0_fp128_t __x) { return mu8_round_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_round (const mu0_fp64_t  __x) { return mu8_round_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_round (const mu0_fp32_t  __x) { return mu8_round_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_round (const mu0_fp16_t  __x) { return mu8_round_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_round(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_round_fp128           \
	, mu0_fp64_t  : mu8_round_fp64            \
	, mu0_fp32_t  : mu8_round_fp32            \
	, mu0_fp16_t  : mu8_round_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_round(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_round_fp128           \
	, mu0_fp64_t  : mu8_round_fp64            \
	, mu0_fp32_t  : mu8_round_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_round(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_round_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_round_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_round_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_round_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_round(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_round_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_round_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_round_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_round_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_scalbn (const mu0_fp128_t __x, const mu0_sint64_t __n) { return mu8_scalbn_fp128 (__x, __n); }
__mu0_overload__ mu0_fp64_t  mu8_scalbn (const mu0_fp64_t  __x, const mu0_sint64_t __n) { return mu8_scalbn_fp64  (__x, __n); }
__mu0_overload__ mu0_fp32_t  mu8_scalbn (const mu0_fp32_t  __x, const mu0_sint64_t __n) { return mu8_scalbn_fp32  (__x, __n); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_scalbn (const mu0_fp16_t  __x, const mu0_sint64_t __n) { return mu8_scalbn_fp16  (__x, __n); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_scalbn(__x, __n) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_scalbn_fp128                \
	, mu0_fp64_t  : mu8_scalbn_fp64                 \
	, mu0_fp32_t  : mu8_scalbn_fp32                 \
	, mu0_fp16_t  : mu8_scalbn_fp16                 \
) (__x, __n)
#	elif MU0_HAVE_GENERIC
#	define mu8_scalbn(__x, __n) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_scalbn_fp128                \
	, mu0_fp64_t  : mu8_scalbn_fp64                 \
	, mu0_fp32_t  : mu8_scalbn_fp32                 \
) (__x, __n)
#	elif MU0_HAVE_TYPEOF
#	define mu8_scalbn(__x, __n) mu8_cast(__mu0_kindof__(__x),                                                             \
	(                                                                                                                     \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_scalbn_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu8_const_sint64(__n)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_scalbn_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_scalbn_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_scalbn_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu8_const_sint64(__n)) \
		: 0                                                                                                                \
	))
#	else
#	define mu8_scalbn(__x, __n)                                                                                           \
	(                                                                                                                     \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_scalbn_fp128 (mu0_const_fp128(mu0_fp128_t, __x), mu8_const_sint64(__n)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_scalbn_fp64  (mu0_const_fp64(mu0_fp64_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_scalbn_fp32  (mu0_const_fp32(mu0_fp32_t  , __x), mu8_const_sint64(__n)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_scalbn_fp16  (mu0_const_fp16(mu0_fp16_t  , __x), mu8_const_sint64(__n)) \
		: 0                                                                                                                \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_sin (const mu0_fp128_t __x) { return mu8_sin_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_sin (const mu0_fp64_t  __x) { return mu8_sin_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_sin (const mu0_fp32_t  __x) { return mu8_sin_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_sin (const mu0_fp16_t  __x) { return mu8_sin_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_sin(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_sin_fp128           \
	, mu0_fp64_t  : mu8_sin_fp64            \
	, mu0_fp32_t  : mu8_sin_fp32            \
	, mu0_fp16_t  : mu8_sin_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_sin(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_sin_fp128           \
	, mu0_fp64_t  : mu8_sin_fp64            \
	, mu0_fp32_t  : mu8_sin_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_sin(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_sin_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_sin_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_sin_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_sin_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_sin(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_sin_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_sin_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_sin_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_sin_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_sinh (const mu0_fp128_t __x) { return mu8_sinh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_sinh (const mu0_fp64_t  __x) { return mu8_sinh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_sinh (const mu0_fp32_t  __x) { return mu8_sinh_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_sinh (const mu0_fp16_t  __x) { return mu8_sinh_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_sinh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_sinh_fp128           \
	, mu0_fp64_t  : mu8_sinh_fp64            \
	, mu0_fp32_t  : mu8_sinh_fp32            \
	, mu0_fp16_t  : mu8_sinh_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_sinh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_sinh_fp128           \
	, mu0_fp64_t  : mu8_sinh_fp64            \
	, mu0_fp32_t  : mu8_sinh_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_sinh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_sinh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_sinh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_sinh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_sinh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_sinh(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_sinh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_sinh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_sinh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_sinh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_sqrt (const mu0_fp128_t __x) { return mu8_sqrt_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_sqrt (const mu0_fp64_t  __x) { return mu8_sqrt_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_sqrt (const mu0_fp32_t  __x) { return mu8_sqrt_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_sqrt (const mu0_fp16_t  __x) { return mu8_sqrt_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_sqrt(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_sqrt_fp128           \
	, mu0_fp64_t  : mu8_sqrt_fp64            \
	, mu0_fp32_t  : mu8_sqrt_fp32            \
	, mu0_fp16_t  : mu8_sqrt_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_sqrt(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_sqrt_fp128           \
	, mu0_fp64_t  : mu8_sqrt_fp64            \
	, mu0_fp32_t  : mu8_sqrt_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_sqrt(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_sqrt_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_sqrt_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_sqrt_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_sqrt_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_sqrt(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_sqrt_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_sqrt_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_sqrt_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_sqrt_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_tan (const mu0_fp128_t __x) { return mu8_tan_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_tan (const mu0_fp64_t  __x) { return mu8_tan_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_tan (const mu0_fp32_t  __x) { return mu8_tan_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_tan (const mu0_fp16_t  __x) { return mu8_tan_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_tan(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_tan_fp128           \
	, mu0_fp64_t  : mu8_tan_fp64            \
	, mu0_fp32_t  : mu8_tan_fp32            \
	, mu0_fp16_t  : mu8_tan_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_tan(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_tan_fp128           \
	, mu0_fp64_t  : mu8_tan_fp64            \
	, mu0_fp32_t  : mu8_tan_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_tan(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                           \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_tan_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_tan_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_tan_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_tan_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	))
#	else
#	define mu8_tan(__x)                                                                         \
	(                                                                                           \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_tan_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_tan_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_tan_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_tan_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                      \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_tanh (const mu0_fp128_t __x) { return mu8_tanh_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_tanh (const mu0_fp64_t  __x) { return mu8_tanh_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_tanh (const mu0_fp32_t  __x) { return mu8_tanh_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_tanh (const mu0_fp16_t  __x) { return mu8_tanh_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_tanh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_tanh_fp128           \
	, mu0_fp64_t  : mu8_tanh_fp64            \
	, mu0_fp32_t  : mu8_tanh_fp32            \
	, mu0_fp16_t  : mu8_tanh_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_tanh(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_tanh_fp128           \
	, mu0_fp64_t  : mu8_tanh_fp64            \
	, mu0_fp32_t  : mu8_tanh_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_tanh(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                            \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_tanh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_tanh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_tanh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_tanh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define mu8_tanh(__x)                                                                         \
	(                                                                                            \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_tanh_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_tanh_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_tanh_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_tanh_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_tgamma (const mu0_fp128_t __x) { return mu8_tgamma_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_tgamma (const mu0_fp64_t  __x) { return mu8_tgamma_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_tgamma (const mu0_fp32_t  __x) { return mu8_tgamma_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_tgamma (const mu0_fp16_t  __x) { return mu8_tgamma_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_tgamma(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_tgamma_fp128           \
	, mu0_fp64_t  : mu8_tgamma_fp64            \
	, mu0_fp32_t  : mu8_tgamma_fp32            \
	, mu0_fp16_t  : mu8_tgamma_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_tgamma(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_tgamma_fp128           \
	, mu0_fp64_t  : mu8_tgamma_fp64            \
	, mu0_fp32_t  : mu8_tgamma_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_tgamma(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                              \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_tgamma_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_tgamma_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_tgamma_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_tgamma_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                         \
	))
#	else
#	define mu8_tgamma(__x)                                                                         \
	(                                                                                              \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_tgamma_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_tgamma_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_tgamma_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_tgamma_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                          \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_trunc (const mu0_fp128_t __x) { return mu8_trunc_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_trunc (const mu0_fp64_t  __x) { return mu8_trunc_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_trunc (const mu0_fp32_t  __x) { return mu8_trunc_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_trunc (const mu0_fp16_t  __x) { return mu8_trunc_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_trunc(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_trunc_fp128           \
	, mu0_fp64_t  : mu8_trunc_fp64            \
	, mu0_fp32_t  : mu8_trunc_fp32            \
	, mu0_fp16_t  : mu8_trunc_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_trunc(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_trunc_fp128           \
	, mu0_fp64_t  : mu8_trunc_fp64            \
	, mu0_fp32_t  : mu8_trunc_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_trunc(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                             \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_trunc_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_trunc_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_trunc_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_trunc_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define mu8_trunc(__x)                                                                         \
	(                                                                                             \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_trunc_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_trunc_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_trunc_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_trunc_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_y0 (const mu0_fp128_t __x) { return mu8_y0_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_y0 (const mu0_fp64_t  __x) { return mu8_y0_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_y0 (const mu0_fp32_t  __x) { return mu8_y0_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_y0 (const mu0_fp16_t  __x) { return mu8_y0_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_y0(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_y0_fp128           \
	, mu0_fp64_t  : mu8_y0_fp64            \
	, mu0_fp32_t  : mu8_y0_fp32            \
	, mu0_fp16_t  : mu8_y0_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_y0(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_y0_fp128           \
	, mu0_fp64_t  : mu8_y0_fp64            \
	, mu0_fp32_t  : mu8_y0_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_y0(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                          \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_y0_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_y0_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_y0_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_y0_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	))
#	else
#	define mu8_y0(__x)                                                                         \
	(                                                                                          \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_y0_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_y0_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_y0_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_y0_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_y1 (const mu0_fp128_t __x) { return mu8_y1_fp128 (__x); }
__mu0_overload__ mu0_fp64_t  mu8_y1 (const mu0_fp64_t  __x) { return mu8_y1_fp64  (__x); }
__mu0_overload__ mu0_fp32_t  mu8_y1 (const mu0_fp32_t  __x) { return mu8_y1_fp32  (__x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_y1 (const mu0_fp16_t  __x) { return mu8_y1_fp16  (__x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_y1(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_y1_fp128           \
	, mu0_fp64_t  : mu8_y1_fp64            \
	, mu0_fp32_t  : mu8_y1_fp32            \
	, mu0_fp16_t  : mu8_y1_fp16            \
) (__x)
#	elif MU0_HAVE_GENERIC
#	define mu8_y1(__x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_y1_fp128           \
	, mu0_fp64_t  : mu8_y1_fp64            \
	, mu0_fp32_t  : mu8_y1_fp32            \
) (__x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_y1(__x) mu8_cast(__mu0_kindof__(__x),                                           \
	(                                                                                          \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_y1_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_y1_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_y1_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_y1_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	))
#	else
#	define mu8_y1(__x)                                                                         \
	(                                                                                          \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_y1_fp128 (mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_y1_fp64  (mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_y1_fp32  (mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_y1_fp16  (mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                     \
	)
#	endif

# if    MU0_HAVE_OVERLOAD
__mu0_overload__ mu0_fp128_t mu8_yn (const mu0_sint64_t __n, const mu0_fp128_t __x) { return mu8_yn_fp128 (__n, __x); }
__mu0_overload__ mu0_fp64_t  mu8_yn (const mu0_sint64_t __n, const mu0_fp64_t  __x) { return mu8_yn_fp64  (__n, __x); }
__mu0_overload__ mu0_fp32_t  mu8_yn (const mu0_sint64_t __n, const mu0_fp32_t  __x) { return mu8_yn_fp32  (__n, __x); }
#	if MU0_HAVE_FLOAT16
__mu0_overload__ mu0_fp16_t  mu8_yn (const mu0_sint64_t __n, const mu0_fp16_t  __x) { return mu8_yn_fp16  (__n, __x); }
#	endif
#	elif MU0_HAVE_GENERIC && (MU0_HAVE_FLOAT16 || MU0_HAVE_CC_GNUCC) 
#	define mu8_yn(__n, __x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_yn_fp128                \
	, mu0_fp64_t  : mu8_yn_fp64                 \
	, mu0_fp32_t  : mu8_yn_fp32                 \
	, mu0_fp16_t  : mu8_yn_fp16                 \
) (__n, __x)
#	elif MU0_HAVE_GENERIC
#	define mu8_yn(__n, __x) __mu0_generic__(__x \
	, mu0_fp128_t : mu8_yn_fp128                \
	, mu0_fp64_t  : mu8_yn_fp64                 \
	, mu0_fp32_t  : mu8_yn_fp32                 \
) (__n, __x)
#	elif MU0_HAVE_TYPEOF
#	define mu8_yn(__n, __x) mu8_cast(__mu0_kindof__(__x),                                                             \
	(                                                                                                                 \
		  __mu0_isofkind__(mu0_fp128_t, __x) ? mu8_yn_fp128 (mu8_const_sint64(__n), mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofkind__(mu0_fp64_t,  __x) ? mu8_yn_fp64  (mu8_const_sint64(__n), mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofkind__(mu0_fp32_t,  __x) ? mu8_yn_fp32  (mu8_const_sint64(__n), mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofkind__(mu0_fp16_t,  __x) ? mu8_yn_fp16  (mu8_const_sint64(__n), mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                            \
	))
#	else
#	define mu8_yn(__n, __x)                                                                                           \
	(                                                                                                                 \
		  __mu0_isofsize__(mu0_fp128_t, __x) ? mu8_yn_fp128 (mu8_const_sint64(__n), mu0_const_fp128(mu0_fp128_t, __x)) \
		: __mu0_isofsize__(mu0_fp64_t,  __x) ? mu8_yn_fp64  (mu8_const_sint64(__n), mu0_const_fp64(mu0_fp64_t  , __x)) \
		: __mu0_isofsize__(mu0_fp32_t,  __x) ? mu8_yn_fp32  (mu8_const_sint64(__n), mu0_const_fp32(mu0_fp32_t  , __x)) \
		: __mu0_isofsize__(mu0_fp16_t,  __x) ? mu8_yn_fp16  (mu8_const_sint64(__n), mu0_const_fp16(mu0_fp16_t  , __x)) \
		: 0                                                                                                            \
	)
#	endif

MU0_END_CDECL

#endif /* !MU8_MATH_GENERIC_H */

/* EOF */