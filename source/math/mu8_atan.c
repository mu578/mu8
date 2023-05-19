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

// mu8_atan.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_atan_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_atanf128))
				return __builtin_atanf128(x);
#			elif (__has_builtin(__builtin_atanl))
				return mu0_const_fp128(__builtin_atanl(x));
#			else
				return mu0_const_fp128(atanl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_atanl))
				return __builtin_atanl(x);
#			else
				return atanl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atanl(x);
#	else
	return atanl(x);
#	endif
}

mu0_fp64_t  mu8_atan_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_atan))
			return __builtin_atan(x);
#		else
		return atan(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atan(x);
#	else
		return atan(x);
#	endif
}

mu0_fp32_t  mu8_atan_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_atanf))
			return __builtin_atanf(x);
#		else
		return atanf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atanf(x);
#	else
		return atanf(x);
#	endif
}

mu0_fp16_t  mu8_atan_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_atanf16))
				return __builtin_atanf16(x);
#			elif (__has_builtin(__builtin_atanf))
				return mu0_const_fp16(__builtin_atanf(x));
#			else
				return mu0_const_fp16(atanf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_atanf))
				return __builtin_atanf(x);
#			else
				return atanf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_atanf(x);
#	else
	return atanf(x);
#	endif
}

/* EOF */