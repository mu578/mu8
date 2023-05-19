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

// mu8_tanh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_tanh_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_tanhf128))
				return __builtin_tanhf128(x);
#			elif (__has_builtin(__builtin_tanhl))
				return mu0_const_fp128(__builtin_tanhl(x));
#			else
				return mu0_const_fp128(tanhl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_tanhl))
				return __builtin_tanhl(x);
#			else
				return tanhl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tanhl(x);
#	else
	return tanhl(x);
#	endif
}

mu0_fp64_t  mu8_tanh_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_tanh))
			return __builtin_tanh(x);
#		else
		return tanh(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tanh(x);
#	else
		return tanh(x);
#	endif
}

mu0_fp32_t  mu8_tanh_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_tanhf))
			return __builtin_tanhf(x);
#		else
		return tanhf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tanhf(x);
#	else
		return tanhf(x);
#	endif
}

mu0_fp16_t  mu8_tanh_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_tanhf16))
				return __builtin_tanhf16(x);
#			elif (__has_builtin(__builtin_tanhf))
				return mu0_const_fp16(__builtin_tanhf(x));
#			else
				return mu0_const_fp16(tanhf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_tanhf))
				return __builtin_tanhf(x);
#			else
				return tanhf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tanhf(x);
#	else
	return tanhf(x);
#	endif
}

/* EOF */