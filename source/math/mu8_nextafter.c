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

// mu8_nextafter.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_nextafter_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_nextafterf128))
				return __builtin_nextafterf128(x, y);
#			elif (__has_builtin(__builtin_nextafterl))
				return mu0_const_fp128(__builtin_nextafterl(x, y));
#			else
				return mu0_const_fp128(nextafterl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_nextafterl))
				return __builtin_nextafterl(x, y);
#			else
				return nextafterl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nextafterl(x, y);
#	else
	return nextafterl(x, y);
#	endif
}

mu0_fp64_t  mu8_nextafter_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_nextafter))
			return __builtin_nextafter(x, y);
#		else
			return nextafter(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nextafter(x, y);
#	else
		return nextafter(x, y);
#	endif
}

mu0_fp32_t  mu8_nextafter_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_nextafterf))
			return __builtin_nextafterf(x, y);
#		else
			return nextafterf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nextafterf(x, y);
#	else
		return nextafterf(x, y);
#	endif
}

mu0_fp16_t  mu8_nextafter_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_nextafterf16))
				return __builtin_nextafterf16(x, y);
#			elif (__has_builtin(__builtin_nextafterf))
				return mu0_const_fp16(__builtin_nextafterf(x, y));
#			else
				return mu0_const_fp16(nextafterf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_nextafterf))
				return __builtin_nextafterf(x, y);
#			else
				return nextafterf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nextafterf(x, y);
#	else
	return nextafterf(x, y);
#	endif
}

/* EOF */