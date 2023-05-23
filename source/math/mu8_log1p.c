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

// mu8_log1p.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_log1p_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_log1pf128))
				return __builtin_log1pf128(x);
#			elif (__has_builtin(__builtin_log1pl))
				return mu0_const_fp128(__builtin_log1pl(x));
#			else
				return mu0_const_fp128(log1pl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_log1pl))
				return __builtin_log1pl(x);
#			else
				return log1pl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log1pl(x);
#	else
	return log1pl(x);
#	endif
}

mu0_fp64_t  mu8_log1p_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_log1p))
			return __builtin_log1p(x);
#		else
		return log1p(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log1p(x);
#	else
		return log1p(x);
#	endif
}

mu0_fp32_t  mu8_log1p_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_log1pf))
			return __builtin_log1pf(x);
#		else
		return log1pf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log1pf(x);
#	else
		return log1pf(x);
#	endif
}

mu0_fp16_t  mu8_log1p_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_log1pf16))
				return __builtin_log1pf16(x);
#			elif (__has_builtin(__builtin_log1pf))
				return mu0_const_fp16(__builtin_log1pf(x));
#			else
				return mu0_const_fp16(log1pf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_log1pf))
				return __builtin_log1pf(x);
#			else
				return log1pf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log1pf(x);
#	else
	return log1pf(x);
#	endif
}

/* EOF */