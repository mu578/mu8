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

// mu8_floor.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_floor_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_floorf128))
				return __builtin_floorf128(x);
#			elif (__has_builtin(__builtin_floorl))
				return mu0_const_fp128(__builtin_floorl(x));
#			else
				return mu0_const_fp128(floorl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_floorl))
				return __builtin_floorl(x);
#			else
				return floorl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_floorl(x);
#	else
	return floorl(x);
#	endif
}

mu0_fp64_t  mu8_floor_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_floor))
			return __builtin_floor(x);
#		else
		return floor(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_floor(x);
#	else
		return floor(x);
#	endif
}

mu0_fp32_t  mu8_floor_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_floorf))
			return __builtin_floorf(x);
#		else
		return floorf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_floorf(x);
#	else
		return floorf(x);
#	endif
}

mu0_fp16_t  mu8_floor_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_floorf16))
				return __builtin_floorf16(x);
#			elif (__has_builtin(__builtin_floorf))
				return mu0_const_fp16(__builtin_floorf(x));
#			else
				return mu0_const_fp16(floorf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_floorf))
				return __builtin_floorf(x);
#			else
				return floorf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_floorf(x);
#	else
	return floorf(x);
#	endif
}

/* EOF */