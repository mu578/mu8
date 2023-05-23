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

// mu8_logb.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_logb_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_logbf128))
				return __builtin_logbf128(x);
#			elif (__has_builtin(__builtin_logbl))
				return mu0_const_fp128(__builtin_logbl(x));
#			else
				return mu0_const_fp128(logbl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_logbl))
				return __builtin_logbl(x);
#			else
				return logbl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_logbl(x);
#	else
	return logbl(x);
#	endif
}

mu0_fp64_t  mu8_logb_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_logb))
			return __builtin_logb(x);
#		else
		return logb(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_logb(x);
#	else
		return logb(x);
#	endif
}

mu0_fp32_t  mu8_logb_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_logbf))
			return __builtin_logbf(x);
#		else
		return logbf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_logbf(x);
#	else
		return logbf(x);
#	endif
}

mu0_fp16_t  mu8_logb_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_logbf16))
				return __builtin_logbf16(x);
#			elif (__has_builtin(__builtin_logbf))
				return mu0_const_fp16(__builtin_logbf(x));
#			else
				return mu0_const_fp16(logbf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_logbf))
				return __builtin_logbf(x);
#			else
				return logbf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_logbf(x);
#	else
	return logbf(x);
#	endif
}

/* EOF */