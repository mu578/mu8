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

// mu8_ceil.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_ceil_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_ceilf128))
				return __builtin_ceilf128(x);
#			elif (__has_builtin(__builtin_ceill))
				return mu0_const_fp128(__builtin_ceill(x));
#			else
				return mu0_const_fp128(ceill(x));
#			endif
#		else
#			if (__has_builtin(__builtin_ceill))
				return __builtin_ceill(x);
#			else
				return ceill(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ceill(x);
#	else
	return ceill(x);
#	endif
}

mu0_fp64_t  mu8_ceil_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_ceil))
			return __builtin_ceil(x);
#		else
		return ceil(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ceil(x);
#	else
		return ceil(x);
#	endif
}

mu0_fp32_t  mu8_ceil_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_ceilf))
			return __builtin_ceilf(x);
#		else
		return ceilf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ceilf(x);
#	else
		return ceilf(x);
#	endif
}

mu0_fp16_t  mu8_ceil_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_ceilf16))
				return __builtin_ceilf16(x);
#			elif (__has_builtin(__builtin_ceilf))
				return mu0_const_fp16(__builtin_ceilf(x));
#			else
				return mu0_const_fp16(ceilf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_ceilf))
				return __builtin_ceilf(x);
#			else
				return ceilf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ceilf(x);
#	else
	return ceilf(x);
#	endif
}

/* EOF */