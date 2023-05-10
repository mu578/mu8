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

// mu8_copysign.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_copysign_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_copysignf128))
				return __builtin_copysignf128(x, y);
#			elif (__has_builtin(__builtin_copysignl))
				return mu0_fp128(__builtin_copysignl(mu0_const_fpex(x), mu0_const_fpex(y)));
#			else
				return mu0_fp128(copysignl(mu0_const_fpex(x), mu0_const_fpex(y)));
#			endif
#		else
#			if (__has_builtin(__builtin_copysignl))
				return __builtin_copysignl(x, y);
#			else
				return copysignl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_copysignl(x, y);
#	else
	return copysignl(x, y);
#	endif
}

mu0_fp64_t  mu8_copysign_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_copysign))
			return __builtin_copysign(x, y);
#		else
		return copysign(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_copysign(x, y);
#	else
		return copysign(x, y);
#	endif
}

mu0_fp32_t  mu8_copysign_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_copysignf))
			return __builtin_copysignf(x, y);
#		else
		return copysignf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_copysignf(x, y);
#	else
		return copysignf(x, y);
#	endif
}

mu0_fp16_t  mu8_copysign_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_copysignf16))
				return __builtin_copysignf16(x, y);
#			elif (__has_builtin(__builtin_copysignf))
				return mu0_fp16(__builtin_copysignf(mu0_const_fp32(x), mu0_const_fp32(y)));
#			else
				return mu0_fp16(copysignf(mu0_const_fp32(x), mu0_const_fp32(y)));
#			endif
#		else
#			if (__has_builtin(__builtin_copysignf))
				return __builtin_copysignf(x, y);
#			else
				return copysignf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_copysignf(x, y);
#	else
	return copysignf(x, y);
#	endif
}

/* EOF */