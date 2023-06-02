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

// mu8_cos.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_cos_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_cosf128))
				return __builtin_cosf128(x);
#			elif (__has_builtin(__builtin_cosl))
				return mu0_const_fp128(__builtin_cosl(x));
#			else
				return mu0_const_fp128(cosl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_cosl))
				return __builtin_cosl(x);
#			else
				return cosl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cosl(x);
#	else
	return cosl(x);
#	endif
}

mu0_fp64_t  mu8_cos_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_cos))
			return __builtin_cos(x);
#		else
			return cos(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cos(x);
#	else
		return cos(x);
#	endif
}

mu0_fp32_t  mu8_cos_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_cosf))
			return __builtin_cosf(x);
#		else
			return cosf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cosf(x);
#	else
		return cosf(x);
#	endif
}

mu0_fp16_t  mu8_cos_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_cosf16_BUG))
				return __builtin_cosf16(x);
#			elif (__has_builtin(__builtin_cosf))
				return mu0_const_fp16(__builtin_cosf(x));
#			else
				return mu0_const_fp16(cosf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_cosf))
				return __builtin_cosf(x);
#			else
				return cosf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cosf(x);
#	else
	return cosf(x);
#	endif
}

/* EOF */