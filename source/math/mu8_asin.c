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

// mu8_asin.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_asin_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_asinf128))
				return __builtin_asinf128(x);
#			elif (__has_builtin(__builtin_asinl))
				return mu0_fp128(__builtin_asinl(mu0_const_fpex(x)));
#			else
				return mu0_fp128(asinl(mu0_const_fpex(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_asinl))
				return __builtin_asinl(x);
#			else
				return asinl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asinl(x);
#	else
	return asinl(x);
#	endif
}

mu0_fp64_t  mu8_asin_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_asin))
			return __builtin_asin(x);
#		else
		return asin(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asin(x);
#	else
		return asin(x);
#	endif
}

mu0_fp32_t  mu8_asin_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_asinf))
			return __builtin_asinf(x);
#		else
		return asinf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asinf(x);
#	else
		return asinf(x);
#	endif
}

mu0_fp16_t  mu8_asin_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_asinf16))
				return __builtin_asinf16(x);
#			elif (__has_builtin(__builtin_asinf))
				return mu0_fp16(__builtin_asinf(mu0_const_fp32(x)));
#			else
				return mu0_fp16(asinf(mu0_const_fp32(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_asinf))
				return __builtin_asinf(x);
#			else
				return asinf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asinf(x);
#	else
	return asinf(x);
#	endif
}

/* EOF */