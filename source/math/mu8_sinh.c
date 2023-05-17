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

// mu8_sinh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_sinh_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_sinhf128))
				return __builtin_sinhf128(x);
#			elif (__has_builtin(__builtin_sinhl))
				return mu0_fp128(__builtin_sinhl(mu0_const_fpex(x)));
#			else
				return mu0_fp128(sinhl(mu0_const_fpex(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_sinhl))
				return __builtin_sinhl(x);
#			else
				return sinhl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sinhl(x);
#	else
	return sinhl(x);
#	endif
}

mu0_fp64_t  mu8_sinh_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_sinh))
			return __builtin_sinh(x);
#		else
		return sinh(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sinh(x);
#	else
		return sinh(x);
#	endif
}

mu0_fp32_t  mu8_sinh_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_sinhf))
			return __builtin_sinhf(x);
#		else
		return sinhf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sinhf(x);
#	else
		return sinhf(x);
#	endif
}

mu0_fp16_t  mu8_sinh_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_sinhf16))
				return __builtin_sinhf16(x);
#			elif (__has_builtin(__builtin_sinhf))
				return mu0_fp16(__builtin_sinhf(mu0_const_fp32(x)));
#			else
				return mu0_fp16(sinhf(mu0_const_fp32(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_sinhf))
				return __builtin_sinhf(x);
#			else
				return sinhf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_sinhf(x);
#	else
	return sinhf(x);
#	endif
}

/* EOF */