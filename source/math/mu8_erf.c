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

// mu8_erf.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_erf_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_erff128))
				return __builtin_erff128(x);
#			elif (__has_builtin(__builtin_erfl))
				return mu0_const_fp128(__builtin_erfl(x));
#			else
				return mu0_const_fp128(erfl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_erfl))
				return __builtin_erfl(x);
#			else
				return erfl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erfl(x);
#	else
	return erfl(x);
#	endif
}

mu0_fp64_t  mu8_erf_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_erf))
			return __builtin_erf(x);
#		else
		return erf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erf(x);
#	else
		return erf(x);
#	endif
}

mu0_fp32_t  mu8_erf_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_erff))
			return __builtin_erff(x);
#		else
		return erff(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erff(x);
#	else
		return erff(x);
#	endif
}

mu0_fp16_t  mu8_erf_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_erff16))
				return __builtin_erff16(x);
#			elif (__has_builtin(__builtin_erff))
				return mu0_const_fp16(__builtin_erff(x));
#			else
				return mu0_const_fp16(erff(x));
#			endif
#		else
#			if (__has_builtin(__builtin_erff))
				return __builtin_erff(x);
#			else
				return erff(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erff(x);
#	else
	return erff(x);
#	endif
}

/* EOF */