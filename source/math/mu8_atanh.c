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

// mu8_atanh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_atanh_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_atanhf128))
				return __builtin_atanhf128(x);
#			elif (__has_builtin(__builtin_atanhl))
				return mu0_const_fp128(__builtin_atanhl(x));
#			else
				return mu0_const_fp128(atanhl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_atanhl))
				return __builtin_atanhl(x);
#			else
				return atanhl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atanhl(x);
#	else
	return atanhl(x);
#	endif
}

mu0_fp64_t  mu8_atanh_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_atanh))
			return __builtin_atanh(x);
#		else
		return atanh(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atanh(x);
#	else
		return atanh(x);
#	endif
}

mu0_fp32_t  mu8_atanh_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_atanhf))
			return __builtin_atanhf(x);
#		else
		return atanhf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atanhf(x);
#	else
		return atanhf(x);
#	endif
}

mu0_fp16_t  mu8_atanh_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_atanhf16))
				return __builtin_atanhf16(x);
#			elif (__has_builtin(__builtin_atanhf))
				return mu0_const_fp16(__builtin_atanhf(x));
#			else
				return mu0_const_fp16(atanhf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_atanhf))
				return __builtin_atanhf(x);
#			else
				return atanhf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atanhf(x);
#	else
	return atanhf(x);
#	endif
}

/* EOF */