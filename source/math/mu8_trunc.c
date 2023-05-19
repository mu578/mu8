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

// mu8_trunc.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_trunc_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_truncf128))
				return __builtin_truncf128(x);
#			elif (__has_builtin(__builtin_truncl))
				return mu0_const_fp128(__builtin_truncl(x));
#			else
				return mu0_const_fp128(truncl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_truncl))
				return __builtin_truncl(x);
#			else
				return truncl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_truncl(x);
#	else
	return truncl(x);
#	endif
}

mu0_fp64_t  mu8_trunc_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_trunc))
			return __builtin_trunc(x);
#		else
		return trunc(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_trunc(x);
#	else
		return trunc(x);
#	endif
}

mu0_fp32_t  mu8_trunc_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_truncf))
			return __builtin_truncf(x);
#		else
		return truncf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_truncf(x);
#	else
		return truncf(x);
#	endif
}

mu0_fp16_t  mu8_trunc_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_truncf16))
				return __builtin_truncf16(x);
#			elif (__has_builtin(__builtin_truncf))
				return mu0_const_fp16(__builtin_truncf(x));
#			else
				return mu0_const_fp16(truncf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_truncf))
				return __builtin_truncf(x);
#			else
				return truncf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_truncf(x);
#	else
	return truncf(x);
#	endif
}

/* EOF */