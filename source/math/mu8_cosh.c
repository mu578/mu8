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

// mu8_cosh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_cosh_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_coshf128))
				return __builtin_coshf128(x);
#			elif (__has_builtin(__builtin_coshl))
				return mu0_fp128(__builtin_coshl(mu0_const_fpex(x)));
#			else
				return mu0_fp128(coshl(mu0_const_fpex(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_coshl))
				return __builtin_coshl(x);
#			else
				return coshl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_coshl(x);
#	else
	return coshl(x);
#	endif
}

mu0_fp64_t  mu8_cosh_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cosh))
			return __builtin_cosh(x);
#		else
		return cosh(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cosh(x);
#	else
		return cosh(x);
#	endif
}

mu0_fp32_t  mu8_cosh_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_coshf))
			return __builtin_coshf(x);
#		else
		return coshf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_coshf(x);
#	else
		return coshf(x);
#	endif
}

mu0_fp16_t  mu8_cosh_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_coshf16))
				return __builtin_coshf16(x);
#			elif (__has_builtin(__builtin_coshf))
				return mu0_fp16(__builtin_coshf(mu0_const_fp32(x)));
#			else
				return mu0_fp16(coshf(mu0_const_fp32(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_coshf))
				return __builtin_coshf(x);
#			else
				return coshf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_coshf(x);
#	else
	return coshf(x);
#	endif
}

/* EOF */