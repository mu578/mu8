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

// mu8_fmin.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_fmin_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_fminf128))
				return __builtin_fminf128(x, y);
#			elif (__has_builtin(__builtin_fminl))
				return mu0_const_fp128(__builtin_fminl(x, y));
#			else
				return mu0_const_fp128(fminl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_fminl))
				return __builtin_fminl(x, y);
#			else
				return fminl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fminl(x, y);
#	else
	return fminl(x, y);
#	endif
}

mu0_fp64_t  mu8_fmin_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fmin))
			return __builtin_fmin(x, y);
#		else
			return fmin(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmin(x, y);
#	else
		return fmin(x, y);
#	endif
}

mu0_fp32_t  mu8_fmin_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fminf))
			return __builtin_fminf(x, y);
#		else
			return fminf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fminf(x, y);
#	else
		return fminf(x, y);
#	endif
}

mu0_fp16_t  mu8_fmin_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_fminf16))
				return __builtin_fminf16(x, y);
#			elif (__has_builtin(__builtin_fminf))
				return mu0_const_fp16(__builtin_fminf(x, y));
#			else
				return mu0_const_fp16(fminf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_fminf))
				return __builtin_fminf(x, y);
#			else
				return fminf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fminf(x, y);
#	else
	return fminf(x, y);
#	endif
}

/* EOF */