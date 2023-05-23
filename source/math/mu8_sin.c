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

// mu8_sin.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_sin_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_sinf128))
				return __builtin_sinf128(x);
#			elif (__has_builtin(__builtin_sinl))
				return mu0_const_fp128(__builtin_sinl(x));
#			else
				return mu0_const_fp128(sinl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_sinl))
				return __builtin_sinl(x);
#			else
				return sinl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sinl(x);
#	else
	return sinl(x);
#	endif
}

mu0_fp64_t  mu8_sin_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_sin))
			return __builtin_sin(x);
#		else
		return sin(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sin(x);
#	else
		return sin(x);
#	endif
}

mu0_fp32_t  mu8_sin_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_sinf))
			return __builtin_sinf(x);
#		else
		return sinf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sinf(x);
#	else
		return sinf(x);
#	endif
}

mu0_fp16_t  mu8_sin_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_sinf16))
				return __builtin_sinf16(x);
#			elif (__has_builtin(__builtin_sinf))
				return mu0_const_fp16(__builtin_sinf(x));
#			else
				return mu0_const_fp16(sinf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_sinf))
				return __builtin_sinf(x);
#			else
				return sinf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sinf(x);
#	else
	return sinf(x);
#	endif
}

/* EOF */