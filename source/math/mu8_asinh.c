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

// mu8_asinh.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_asinh_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_asinhf128))
				return __builtin_asinhf128(x);
#			elif (__has_builtin(__builtin_asinhl))
				return mu0_fp128(__builtin_asinhl(mu0_const_fpex(x)));
#			else
				return mu0_fp128(asinhl(mu0_const_fpex(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_asinhl))
				return __builtin_asinhl(x);
#			else
				return asinhl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asinhl(x);
#	else
	return asinhl(x);
#	endif
}

mu0_fp64_t  mu8_asinh_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_asinh))
			return __builtin_asinh(x);
#		else
		return asinh(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asinh(x);
#	else
		return asinh(x);
#	endif
}

mu0_fp32_t  mu8_asinh_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_asinhf))
			return __builtin_asinhf(x);
#		else
		return asinhf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asinhf(x);
#	else
		return asinhf(x);
#	endif
}

mu0_fp16_t  mu8_asinh_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_asinhf16))
				return __builtin_asinhf16(x);
#			elif (__has_builtin(__builtin_asinhf))
				return mu0_fp16(__builtin_asinhf(mu0_const_fp32(x)));
#			else
				return mu0_fp16(asinhf(mu0_const_fp32(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_asinhf))
				return __builtin_asinhf(x);
#			else
				return asinhf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_asinhf(x);
#	else
	return asinhf(x);
#	endif
}

/* EOF */