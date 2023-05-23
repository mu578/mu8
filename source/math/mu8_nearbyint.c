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

// mu8_nearbyint.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_nearbyint_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_nearbyintf128))
				return __builtin_nearbyintf128(x);
#			elif (__has_builtin(__builtin_nearbyintl))
				return mu0_const_fp128(__builtin_nearbyintl(x));
#			else
				return mu0_const_fp128(nearbyintl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_nearbyintl))
				return __builtin_nearbyintl(x);
#			else
				return nearbyintl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nearbyintl(x);
#	else
	return nearbyintl(x);
#	endif
}

mu0_fp64_t  mu8_nearbyint_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_nearbyint))
			return __builtin_nearbyint(x);
#		else
		return nearbyint(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nearbyint(x);
#	else
		return nearbyint(x);
#	endif
}

mu0_fp32_t  mu8_nearbyint_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_nearbyintf))
			return __builtin_nearbyintf(x);
#		else
		return nearbyintf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nearbyintf(x);
#	else
		return nearbyintf(x);
#	endif
}

mu0_fp16_t  mu8_nearbyint_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_nearbyintf16))
				return __builtin_nearbyintf16(x);
#			elif (__has_builtin(__builtin_nearbyintf))
				return mu0_const_fp16(__builtin_nearbyintf(x));
#			else
				return mu0_const_fp16(nearbyintf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_nearbyintf))
				return __builtin_nearbyintf(x);
#			else
				return nearbyintf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_nearbyintf(x);
#	else
	return nearbyintf(x);
#	endif
}

/* EOF */