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

enum mu8_classify
{
	  mu8_classify_infinite  = mu0_fp_classify_infinite
	, mu8_classify_nan       = mu0_fp_classify_nan
	, mu8_classify_normal    = mu0_fp_classify_normal
	, mu8_classify_subnormal = mu0_fp_classify_subnormal
	, mu8_classify_zero      = mu0_fp_classify_zero
};

__mu0_static_inline__ enum mu8_classify mu8_classify_fp128 (const mu0_fp128_t __x) { return mu0_fp_classify (__x);                                       }
__mu0_static_inline__ enum mu8_classify mu8_classify_fp64  (const mu0_fp64_t  __x) { return mu0_fp_classify (__x);                                       }
__mu0_static_inline__ enum mu8_classify mu8_classify_fp32  (const mu0_fp32_t  __x) { return mu0_fp_classify (__x);                                       }
__mu0_static_inline__ enum mu8_classify mu8_classify_fp16  (const mu0_fp16_t  __x) { return mu0_fp_classify (__x);                                       }

__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp128 (const mu0_fp128_t __x) { return mu0_fp_isfinite (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp64  (const mu0_fp64_t  __x) { return mu0_fp_isfinite (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp32  (const mu0_fp32_t  __x) { return mu0_fp_isfinite (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isfinite_fp16  (const mu0_fp16_t  __x) { return mu0_fp_isfinite (__x) == 0 ? mu0_false     : mu0_true;       }

__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp128    (const mu0_fp128_t __x) { return mu0_fp_isinf    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fpex     (const mu0_fpex_t  __x) { return mu0_fp_isinf    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp64     (const mu0_fp64_t  __x) { return mu0_fp_isinf    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp32     (const mu0_fp32_t  __x) { return mu0_fp_isinf    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isinf_fp16     (const mu0_fp16_t  __x) { return mu0_fp_isinf    (__x) == 0 ? mu0_false     : mu0_true;       }

__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp128    (const mu0_fp128_t __x) { return mu0_fp_isnan    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fpex     (const mu0_fpex_t  __x) { return mu0_fp_isnan    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp64     (const mu0_fp64_t  __x) { return mu0_fp_isnan    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp32     (const mu0_fp32_t  __x) { return mu0_fp_isnan    (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isnan_fp16     (const mu0_fp16_t  __x) { return mu0_fp_isnan    (__x) == 0 ? mu0_false     : mu0_true;       }

__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp128 (const mu0_fp128_t __x) { return mu0_fp_isnormal (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp64  (const mu0_fp64_t  __x) { return mu0_fp_isnormal (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp32  (const mu0_fp32_t  __x) { return mu0_fp_isnormal (__x) == 0 ? mu0_false     : mu0_true;       }
__mu0_static_inline__ const mu0_bool_t  mu8_isnormal_fp16  (const mu0_fp16_t  __x) { return mu0_fp_isnormal (__x) == 0 ? mu0_false     : mu0_true;       }

__mu0_static_inline__ const mu0_fp128_t mu8_signbit_fp128  (const mu0_fp128_t __x) { return mu0_fp_signbit  (__x) == 0 ? mu0_fp128_one : -mu0_fp128_one; }
__mu0_static_inline__ const mu0_fp64_t  mu8_signbit_fp64   (const mu0_fp64_t  __x) { return mu0_fp_signbit  (__x) == 0 ? mu0_fp64_one  : -mu0_fp64_one;  }
__mu0_static_inline__ const mu0_fp32_t  mu8_signbit_fp32   (const mu0_fp32_t  __x) { return mu0_fp_signbit  (__x) == 0 ? mu0_fp32_one  : -mu0_fp32_one;  }
__mu0_static_inline__ const mu0_fp16_t  mu8_signbit_fp16   (const mu0_fp16_t  __x) { return mu0_fp_signbit  (__x) == 0 ? mu0_fp16_one  : -mu0_fp16_one;  }

MU0_END_CDECL

#endif /* !MU8_FLOATING_H */

/* EOF */