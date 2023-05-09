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

// mu8_acosh.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_acosh_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_acoshf128))
				return __builtin_acoshf128(x);
#			elif (__has_builtin(__builtin_acoshl))
				return mu0_fp128(__builtin_acoshl(mu0_const_fpex(x)));
#			else
				return mu0_fp128(acoshl(mu0_const_fpex(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_acoshl))
				return __builtin_acoshl(x);
#			else
				return acoshl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acoshl(x);
#	else
	return acoshl(x);
#	endif
}

mu0_fp64_t  mu8_acosh_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_acosh))
			return __builtin_acosh(x);
#		else
		return acosh(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acosh(x);
#	else
		return acosh(x);
#	endif
}

mu0_fp32_t  mu8_acosh_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_acoshf))
			return __builtin_acoshf(x);
#		else
		return acoshf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acoshf(x);
#	else
		return acoshf(x);
#	endif
}

mu0_fp16_t  mu8_acosh_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_acoshf16))
				return __builtin_acoshf16(x);
#			elif (__has_builtin(__builtin_acoshf))
				return mu0_fp16(__builtin_acoshf(mu0_const_fp32(x)));
#			else
				return mu0_fp16(acoshf(mu0_const_fp32(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_acoshf))
				return __builtin_acoshf(x);
#			else
				return acoshf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acoshf(x);
#	else
	return acoshf(x);
#	endif
}

/* EOF */