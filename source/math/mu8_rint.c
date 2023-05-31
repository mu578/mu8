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

// mu8_rint.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_rint_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_rintf128))
				return __builtin_rintf128(x);
#			elif (__has_builtin(__builtin_rintl))
				return mu0_const_fp128(__builtin_rintl(x));
#			else
				return mu0_const_fp128(rintl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_rintl))
				return __builtin_rintl(x);
#			else
				return rintl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_rintl(x);
#	else
	return rintl(x);
#	endif
}

mu0_fp64_t  mu8_rint_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_rint))
			return __builtin_rint(x);
#		else
			return rint(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_rint(x);
#	else
		return rint(x);
#	endif
}

mu0_fp32_t  mu8_rint_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_rintf))
			return __builtin_rintf(x);
#		else
			return rintf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_rintf(x);
#	else
		return rintf(x);
#	endif
}

mu0_fp16_t  mu8_rint_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_rintf16))
				return __builtin_rintf16(x);
#			elif (__has_builtin(__builtin_rintf))
				return mu0_const_fp16(__builtin_rintf(x));
#			else
				return mu0_const_fp16(rintf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_rintf))
				return __builtin_rintf(x);
#			else
				return rintf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_rintf(x);
#	else
	return rintf(x);
#	endif
}

/* EOF */