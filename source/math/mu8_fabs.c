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

// mu8_fabs.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_fabs_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_fabsf128))
				return __builtin_fabsf128(x);
#			elif (__has_builtin(__builtin_fabsl))
				return mu0_const_fp128(__builtin_fabsl(x));
#			else
				return mu0_const_fp128(fabsl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_fabsl))
				return __builtin_fabsl(x);
#			else
				return fabsl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fabsl(x);
#	else
	return fabsl(x);
#	endif
}

mu0_fp64_t  mu8_fabs_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fabs))
			return __builtin_fabs(x);
#		else
			return fabs(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fabs(x);
#	else
		return fabs(x);
#	endif
}

mu0_fp32_t  mu8_fabs_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fabsf))
			return __builtin_fabsf(x);
#		else
			return fabsf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fabsf(x);
#	else
		return fabsf(x);
#	endif
}

mu0_fp16_t  mu8_fabs_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_fabsf16))
				return __builtin_fabsf16(x);
#			elif (__has_builtin(__builtin_fabsf))
				return mu0_const_fp16(__builtin_fabsf(x));
#			else
				return mu0_const_fp16(fabsf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_fabsf))
				return __builtin_fabsf(x);
#			else
				return fabsf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fabsf(x);
#	else
	return fabsf(x);
#	endif
}

/* EOF */