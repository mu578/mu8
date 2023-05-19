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

// mu8_exp.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_exp_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_expf128))
				return __builtin_expf128(x);
#			elif (__has_builtin(__builtin_expl))
				return mu0_const_fp128(__builtin_expl(x));
#			else
				return mu0_const_fp128(expl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_expl))
				return __builtin_expl(x);
#			else
				return expl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_expl(x);
#	else
	return expl(x);
#	endif
}

mu0_fp64_t  mu8_exp_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_exp))
			return __builtin_exp(x);
#		else
		return exp(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_exp(x);
#	else
		return exp(x);
#	endif
}

mu0_fp32_t  mu8_exp_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_expf))
			return __builtin_expf(x);
#		else
		return expf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_expf(x);
#	else
		return expf(x);
#	endif
}

mu0_fp16_t  mu8_exp_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_expf16))
				return __builtin_expf16(x);
#			elif (__has_builtin(__builtin_expf))
				return mu0_const_fp16(__builtin_expf(x));
#			else
				return mu0_const_fp16(expf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_expf))
				return __builtin_expf(x);
#			else
				return expf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_expf(x);
#	else
	return expf(x);
#	endif
}

/* EOF */