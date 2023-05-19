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

// mu8_nexttoward.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_nexttoward_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_nexttowardf128))
				return __builtin_nexttowardf128(x, y);
#			elif (__has_builtin(__builtin_nexttowardl))
				return mu0_const_fp128(__builtin_nexttowardl(x, y));
#			else
				return mu0_const_fp128(nexttowardl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_nexttowardl))
				return __builtin_nexttowardl(x, y);
#			else
				return nexttowardl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nexttowardl(x, y);
#	else
	return nexttowardl(x, y);
#	endif
}

mu0_fp64_t  mu8_nexttoward_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_nexttoward))
			return __builtin_nexttoward(x, y);
#		else
		return nexttoward(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nexttoward(x, y);
#	else
		return nexttoward(x, y);
#	endif
}

mu0_fp32_t  mu8_nexttoward_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_nexttowardf))
			return __builtin_nexttowardf(x, y);
#		else
		return nexttowardf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nexttowardf(x, y);
#	else
		return nexttowardf(x, y);
#	endif
}

mu0_fp16_t  mu8_nexttoward_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_nexttowardf16))
				return __builtin_nexttowardf16(x, y);
#			elif (__has_builtin(__builtin_nexttowardf))
				return mu0_const_fp16(__builtin_nexttowardf(x, y));
#			else
				return mu0_const_fp16(nexttowardf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_nexttowardf))
				return __builtin_nexttowardf(x, y);
#			else
				return nexttowardf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nexttowardf(x, y);
#	else
	return nexttowardf(x, y);
#	endif
}

/* EOF */