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

// mu8_ilogb.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_sint64_t mu8_ilogb_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_ilogbf128))
				return __builtin_ilogbf128(x);
#			elif (__has_builtin(__builtin_ilogbl))
				return __builtin_ilogbl(x);
#			else
				return ilogbl(x);
#			endif
#		else
#			if (__has_builtin(__builtin_ilogbl))
				return __builtin_ilogbl(x);
#			else
				return ilogbl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ilogbl(x);
#	else
	return ilogbl(x);
#	endif
}

mu0_sint64_t mu8_ilogb_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_ilogb))
			return __builtin_ilogb(x);
#		else
			return ilogb(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ilogb(x);
#	else
		return ilogb(x);
#	endif
}

mu0_sint64_t mu8_ilogb_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_ilogbf))
			return __builtin_ilogbf(x);
#		else
			return ilogbf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ilogbf(x);
#	else
		return ilogbf(x);
#	endif
}

mu0_sint64_t mu8_ilogb_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_ilogbf16))
				return __builtin_ilogbf16(x);
#			elif (__has_builtin(__builtin_ilogbf))
				return __builtin_ilogbf(x);
#			else
				return ilogbf(x);
#			endif
#		else
#			if (__has_builtin(__builtin_ilogbf))
				return __builtin_ilogbf(x);
#			else
				return ilogbf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ilogbf(x);
#	else
	return ilogbf(x);
#	endif
}

/* EOF */