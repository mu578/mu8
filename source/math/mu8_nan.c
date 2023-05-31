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

// mu8_nan.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_nan_fp128 (const mu0_tchar8_t * s)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_nanf128))
				return __builtin_nanf128(s);
#			elif (__has_builtin(__builtin_nanl))
				return mu0_const_fp128(__builtin_nanl(s));
#			else
				return mu0_const_fp128(nanl(s));
#			endif
#		else
#			if (__has_builtin(__builtin_nanl))
				return __builtin_nanl(s);
#			else
				return nanl(s);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nanl(s);
#	else
	return nanl(s);
#	endif
}

mu0_fp64_t  mu8_nan_fp64  (const mu0_tchar8_t * s)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_nan))
			return __builtin_nan(s);
#		else
			return nan(s);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nan(s);
#	else
		return nan(s);
#	endif
}

mu0_fp32_t  mu8_nan_fp32  (const mu0_tchar8_t * s)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_nanf))
			return __builtin_nanf(s);
#		else
			return nanf(s);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nanf(s);
#	else
		return nanf(s);
#	endif
}

mu0_fp16_t  mu8_nan_fp16  (const mu0_tchar8_t * s)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_nanf16_BUG)) /* @TODO: broken */
				return __builtin_nanf16(s);
#			elif (__has_builtin(__builtin_nanf))
				return mu0_const_fp16(__builtin_nanf(s));
#			else
				return mu0_const_fp16(nanf(s));
#			endif
#		else
#			if (__has_builtin(__builtin_nanf))
				return __builtin_nanf(s);
#			else
				return nanf(s);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nanf(s);
#	else
	return nanf(s);
#	endif
}

/* EOF */