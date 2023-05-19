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

// mu8_cbrt.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_cbrt_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_cbrtf128))
				return __builtin_cbrtf128(x);
#			elif (__has_builtin(__builtin_cbrtl))
				return mu0_const_fp128(__builtin_cbrtl(x));
#			else
				return mu0_const_fp128(cbrtl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_cbrtl))
				return __builtin_cbrtl(x);
#			else
				return cbrtl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cbrtl(x);
#	else
	return cbrtl(x);
#	endif
}

mu0_fp64_t  mu8_cbrt_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cbrt))
			return __builtin_cbrt(x);
#		else
		return cbrt(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cbrt(x);
#	else
		return cbrt(x);
#	endif
}

mu0_fp32_t  mu8_cbrt_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cbrtf))
			return __builtin_cbrtf(x);
#		else
		return cbrtf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cbrtf(x);
#	else
		return cbrtf(x);
#	endif
}

mu0_fp16_t  mu8_cbrt_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_cbrtf16))
				return __builtin_cbrtf16(x);
#			elif (__has_builtin(__builtin_cbrtf))
				return mu0_const_fp16(__builtin_cbrtf(x));
#			else
				return mu0_const_fp16(cbrtf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_cbrtf))
				return __builtin_cbrtf(x);
#			else
				return cbrtf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cbrtf(x);
#	else
	return cbrtf(x);
#	endif
}

/* EOF */