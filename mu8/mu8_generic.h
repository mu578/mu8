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

MU8_BEGIN_CDECL

# if    MU8_HAVE_OVERLOAD
__mu8_overload__ mu8_fp128_t m8_acos (const mu8_fp128_t __x) { return mu8_acos_fp128 (__x); }
__mu8_overload__ mu8_fp64_t  m8_acos (const mu8_fp64_t  __x) { return mu8_acos_fp64  (__x); }
__mu8_overload__ mu8_fp32_t  m8_acos (const mu8_fp32_t  __x) { return mu8_acos_fp32  (__x); }
__mu8_overload__ mu8_fp16_t  m8_acos (const mu8_fp16_t  __x) { return mu8_acos_fp16  (__x); }
#	elif MU8_HAVE_C11
#	define m8_acos(__x) _Generic(__x \
	, mu8_fp128_t : mu8_acos_fp128   \
	, mu8_fp64_t  : mu8_acos_fp64    \
	, mu8_fp32_t  : mu8_acos_fp32    \
	, mu8_fp16_t  : mu8_acos_fp16    \
) (__x)
#	elif MU8_HAVE_TYPEOF
#	define m8_acos(__x) m8_cast(__mu8_typeof__(__x),                                             \
	(                                                                                            \
		  __mu8_istypeof__(mu8_fp128_t, __x) ? mu8_acos_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_istypeof__(mu8_fp64_t,  __x) ? mu8_acos_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_istypeof__(mu8_fp32_t,  __x) ? mu8_acos_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_istypeof__(mu8_fp16_t,  __x) ? mu8_acos_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define m8_acos(__x)                                                                          \
	(                                                                                            \
		  __mu8_issizeof__(mu8_fp128_t, __x) ? mu8_acos_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_issizeof__(mu8_fp64_t,  __x) ? mu8_acos_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_issizeof__(mu8_fp32_t,  __x) ? mu8_acos_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_issizeof__(mu8_fp16_t,  __x) ? mu8_acos_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

# if    MU8_HAVE_OVERLOAD
__mu8_overload__ mu8_fp128_t m8_acosh (const mu8_fp128_t __x) { return mu8_acosh_fp128 (__x); }
__mu8_overload__ mu8_fp64_t  m8_acosh (const mu8_fp64_t  __x) { return mu8_acosh_fp64  (__x); }
__mu8_overload__ mu8_fp32_t  m8_acosh (const mu8_fp32_t  __x) { return mu8_acosh_fp32  (__x); }
__mu8_overload__ mu8_fp16_t  m8_acosh (const mu8_fp16_t  __x) { return mu8_acosh_fp16  (__x); }
#	elif MU8_HAVE_C11
#	define m8_acosh(__x) _Generic(__x \
	, mu8_fp128_t : mu8_acosh_fp128   \
	, mu8_fp64_t  : mu8_acosh_fp64    \
	, mu8_fp32_t  : mu8_acosh_fp32    \
	, mu8_fp16_t  : mu8_acosh_fp16    \
) (__x)
#	elif MU8_HAVE_TYPEOF
#	define m8_acosh(__x) m8_cast(__mu8_typeof__(__x),                                             \
	(                                                                                             \
		  __mu8_istypeof__(mu8_fp128_t, __x) ? mu8_acosh_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_istypeof__(mu8_fp64_t,  __x) ? mu8_acosh_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_istypeof__(mu8_fp32_t,  __x) ? mu8_acosh_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_istypeof__(mu8_fp16_t,  __x) ? mu8_acosh_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define m8_acosh(__x)                                                                          \
	(                                                                                             \
		  __mu8_issizeof__(mu8_fp128_t, __x) ? mu8_acosh_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_issizeof__(mu8_fp64_t,  __x) ? mu8_acosh_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_issizeof__(mu8_fp32_t,  __x) ? mu8_acosh_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_issizeof__(mu8_fp16_t,  __x) ? mu8_acosh_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU8_HAVE_OVERLOAD
__mu8_overload__ mu8_fp128_t m8_asinh (const mu8_fp128_t __x) { return mu8_asinh_fp128 (__x); }
__mu8_overload__ mu8_fp64_t  m8_asinh (const mu8_fp64_t  __x) { return mu8_asinh_fp64  (__x); }
__mu8_overload__ mu8_fp32_t  m8_asinh (const mu8_fp32_t  __x) { return mu8_asinh_fp32  (__x); }
__mu8_overload__ mu8_fp16_t  m8_asinh (const mu8_fp16_t  __x) { return mu8_asinh_fp16  (__x); }
#	elif MU8_HAVE_C11
#	define m8_asinh(__x) _Generic(__x \
	, mu8_fp128_t : mu8_asinh_fp128   \
	, mu8_fp64_t  : mu8_asinh_fp64    \
	, mu8_fp32_t  : mu8_asinh_fp32    \
	, mu8_fp16_t  : mu8_asinh_fp16    \
) (__x)
#	elif MU8_HAVE_TYPEOF
#	define m8_asinh(__x) m8_cast(__mu8_typeof__(__x),                                             \
	(                                                                                             \
		  __mu8_istypeof__(mu8_fp128_t, __x) ? mu8_asinh_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_istypeof__(mu8_fp64_t,  __x) ? mu8_asinh_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_istypeof__(mu8_fp32_t,  __x) ? mu8_asinh_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_istypeof__(mu8_fp16_t,  __x) ? mu8_asinh_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                        \
	))
#	else
#	define m8_asinh(__x)                                                                          \
	(                                                                                             \
		  __mu8_issizeof__(mu8_fp128_t, __x) ? mu8_asinh_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_issizeof__(mu8_fp64_t,  __x) ? mu8_asinh_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_issizeof__(mu8_fp32_t,  __x) ? mu8_asinh_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_issizeof__(mu8_fp16_t,  __x) ? mu8_asinh_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                        \
	)
#	endif

# if    MU8_HAVE_OVERLOAD
__mu8_overload__ mu8_fp128_t m8_asin (const mu8_fp128_t __x) { return mu8_asin_fp128 (__x); }
__mu8_overload__ mu8_fp64_t  m8_asin (const mu8_fp64_t  __x) { return mu8_asin_fp64  (__x); }
__mu8_overload__ mu8_fp32_t  m8_asin (const mu8_fp32_t  __x) { return mu8_asin_fp32  (__x); }
__mu8_overload__ mu8_fp16_t  m8_asin (const mu8_fp16_t  __x) { return mu8_asin_fp16  (__x); }
#	elif MU8_HAVE_C11
#	define m8_asin(__x) _Generic(__x \
	, mu8_fp128_t : mu8_asin_fp128   \
	, mu8_fp64_t  : mu8_asin_fp64    \
	, mu8_fp32_t  : mu8_asin_fp32    \
	, mu8_fp16_t  : mu8_asin_fp16    \
) (__x)
#	elif MU8_HAVE_TYPEOF
#	define m8_asin(__x) m8_cast(__mu8_typeof__(__x),                                             \
	(                                                                                            \
		  __mu8_istypeof__(mu8_fp128_t, __x) ? mu8_asin_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_istypeof__(mu8_fp64_t,  __x) ? mu8_asin_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_istypeof__(mu8_fp32_t,  __x) ? mu8_asin_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_istypeof__(mu8_fp16_t,  __x) ? mu8_asin_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                       \
	))
#	else
#	define m8_asin(__x)                                                                          \
	(                                                                                            \
		  __mu8_issizeof__(mu8_fp128_t, __x) ? mu8_asin_fp128 (mu8_const_fp128(mu8_fp128_t, __x)) \
		: __mu8_issizeof__(mu8_fp64_t,  __x) ? mu8_asin_fp64  (mu8_const_fp64(mu8_fp64_t  , __x)) \
		: __mu8_issizeof__(mu8_fp32_t,  __x) ? mu8_asin_fp32  (mu8_const_fp32(mu8_fp32_t  , __x)) \
		: __mu8_issizeof__(mu8_fp16_t,  __x) ? mu8_asin_fp16  (mu8_const_fp16(mu8_fp16_t  , __x)) \
		: 0                                                                                       \
	)
#	endif

MU8_END_CDECL

#endif /* !MU8_GENERIC_H */

/* EOF */