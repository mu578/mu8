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

// mu8_hypot.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_hypot_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_hypotf128))
				return __builtin_hypotf128(x, y);
#			elif (__has_builtin(__builtin_hypotl))
				return mu0_const_fp128(__builtin_hypotl(x, y));
#			else
				return mu0_const_fp128(hypotl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_hypotl))
				return __builtin_hypotl(x, y);
#			else
				return hypotl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_hypotl(x, y);
#	else
	return hypotl(x, y);
#	endif
}

mu0_fp64_t  mu8_hypot_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_hypot))
			return __builtin_hypot(x, y);
#		else
		return hypot(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_hypot(x, y);
#	else
		return hypot(x, y);
#	endif
}

mu0_fp32_t  mu8_hypot_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_hypotf))
			return __builtin_hypotf(x, y);
#		else
		return hypotf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_hypotf(x, y);
#	else
		return hypotf(x, y);
#	endif
}

mu0_fp16_t  mu8_hypot_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_hypotf16))
				return __builtin_hypotf16(x, y);
#			elif (__has_builtin(__builtin_hypotf))
				return mu0_const_fp16(__builtin_hypotf(x, y));
#			else
				return mu0_const_fp16(hypotf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_hypotf))
				return __builtin_hypotf(x, y);
#			else
				return hypotf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_hypotf(x, y);
#	else
	return hypotf(x, y);
#	endif
}

/* EOF */