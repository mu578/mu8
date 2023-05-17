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

// mu8_floating.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu0/mu0_floating.h>
#include <mu0/mu0_integer.h>

#ifndef MU8_FLOATING_H
#define MU8_FLOATING_H 1

MU0_BEGIN_CDECL

#	undef  ___mu8_fp_ilogb0___
#	undef  ___mu8_fp_ilogbnan___
#	undef  ___mu8_fp_infinite___
#	undef  ___mu8_fp_nan___
#	undef  ___mu8_fp_normal___
#	undef  ___mu8_fp_subnormal___
#	undef  ___mu8_fp_zero___

#	define ___mu8_fp_ilogb0___                FP_ILOGB0
#	define ___mu8_fp_ilogbnan___              FP_ILOGBNAN
#	define ___mu8_fp_infinite___              FP_INFINITE
#	define ___mu8_fp_nan___                   FP_NAN
#	define ___mu8_fp_normal___                FP_NORMAL
#	define ___mu8_fp_subnormal___             FP_SUBNORMAL
#	define ___mu8_fp_zero___                  FP_ZERO

#	undef  ___mu8_fpclassify___
#	undef  ___mu8_isfinite___
#	undef  ___mu8_isgreater___
#	undef  ___mu8_isgreaterequal___
#	undef  ___mu8_isinf___
#	undef  ___mu8_isless___
#	undef  ___mu8_islessequal___
#	undef  ___mu8_islessgreater___
#	undef  ___mu8_isnan___
#	undef  ___mu8_isnormal___
#	undef  ___mu8_isunordered___
#	undef  ___mu8_signbit___

#	define ___mu8_fpclassify___(__x)          fpclassify(__x)
#	define ___mu8_isfinite___(__x)            isfinite(__x)
#	define ___mu8_isgreater___(__x, __y)      isgreater(__x, __y)
#	define ___mu8_isgreaterequal___(__x, __y) isgreaterequal(__x, __y)
#	define ___mu8_isinf___(__x)               isinf(__x)
#	define ___mu8_isless___(__x, __y)         isless(__x, __y)
#	define ___mu8_islessequal___(__x, __y)    islessequal(__x, __y)
#	define ___mu8_islessgreater___(__x, __y)  islessgreater(__x, __y)
#	define ___mu8_isnan___(__x)               isnan(__x)
#	define ___mu8_isnormal___(__x)            isnormal(__x)
#	define ___mu8_isunordered___(___x, __y)  isunordered(__x, __y)
#	define ___mu8_signbit___(__x)             signbit(__x)

enum mu8_classify
{
	  mu8_classify_infinite  = ___mu8_fp_infinite___
	, mu8_classify_nan       = ___mu8_fp_nan___
	, mu8_classify_normal    = ___mu8_fp_normal___
	, mu8_classify_subnormal = ___mu8_fp_subnormal___
	, mu8_classify_zero      = ___mu8_fp_zero___
};

__mu0_static_inline__ enum mu8_classify mu8_classify_fp128 (const mu0_fp128_t __x) { return ___mu8_fpclassify___ (__x);                             }
__mu0_static_inline__ enum mu8_classify mu8_classify_fp64  (const mu0_fp64_t  __x) { return ___mu8_fpclassify___ (__x);                             }
__mu0_static_inline__ enum mu8_classify mu8_classify_fp32  (const mu0_fp32_t  __x) { return ___mu8_fpclassify___ (__x);                             }
__mu0_static_inline__ enum mu8_classify mu8_classify_fp16  (const mu0_fp16_t  __x) { return ___mu8_fpclassify___ (__x);                             }

__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp128 (const mu0_fp128_t __x) { return ___mu8_isfinite___   (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp64  (const mu0_fp64_t  __x) { return ___mu8_isfinite___   (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp32  (const mu0_fp32_t  __x) { return ___mu8_isfinite___   (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp16  (const mu0_fp16_t  __x) { return ___mu8_isfinite___   (__x) == 0 ? mu0_false : mu0_true; }

__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp128    (const mu0_fp128_t __x) { return ___mu8_isinf___      (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp64     (const mu0_fp64_t  __x) { return ___mu8_isinf___      (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp32     (const mu0_fp32_t  __x) { return ___mu8_isinf___      (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp16     (const mu0_fp16_t  __x) { return ___mu8_isinf___      (__x) == 0 ? mu0_false : mu0_true; }

__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp128    (const mu0_fp128_t __x) { return ___mu8_isnan___      (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp64     (const mu0_fp64_t  __x) { return ___mu8_isnan___      (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp32     (const mu0_fp32_t  __x) { return ___mu8_isnan___      (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp16     (const mu0_fp16_t  __x) { return ___mu8_isnan___      (__x) == 0 ? mu0_false : mu0_true; }

__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp128 (const mu0_fp128_t __x) { return ___mu8_isnormal___   (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp64  (const mu0_fp64_t  __x) { return ___mu8_isnormal___   (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp32  (const mu0_fp32_t  __x) { return ___mu8_isnormal___   (__x) == 0 ? mu0_false : mu0_true; }
__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp16  (const mu0_fp16_t  __x) { return ___mu8_isnormal___   (__x) == 0 ? mu0_false : mu0_true; }

MU0_END_CDECL

#endif /* !MU8_FLOATING_H */

/* EOF */