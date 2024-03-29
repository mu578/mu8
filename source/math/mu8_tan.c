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

// mu8_tan.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_tan_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_tanf128))
				return __builtin_tanf128(x);
#			elif (__has_builtin(__builtin_tanl))
				return mu0_const_fp128(__builtin_tanl(x));
#			else
				return mu0_const_fp128(tanl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_tanl))
				return __builtin_tanl(x);
#			else
				return tanl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tanl(x);
#	else
	return tanl(x);
#	endif
}

mu0_fp64_t  mu8_tan_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_tan))
			return __builtin_tan(x);
#		else
			return tan(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tan(x);
#	else
		return tan(x);
#	endif
}

mu0_fp32_t  mu8_tan_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_tanf))
			return __builtin_tanf(x);
#		else
			return tanf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tanf(x);
#	else
		return tanf(x);
#	endif
}

mu0_fp16_t  mu8_tan_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_tanf16))
				return __builtin_tanf16(x);
#			elif (__has_builtin(__builtin_tanf))
				return mu0_const_fp16(__builtin_tanf(x));
#			else
				return mu0_const_fp16(tanf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_tanf))
				return __builtin_tanf(x);
#			else
				return tanf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_tanf(x);
#	else
	return tanf(x);
#	endif
}

/* EOF */