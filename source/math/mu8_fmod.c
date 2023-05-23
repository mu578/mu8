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

// mu8_fmod.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_fmod_fp128 (const mu0_fp128_t x, const mu0_fp128_t y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_fmodf128))
				return __builtin_fmodf128(x, y);
#			elif (__has_builtin(__builtin_fmodl))
				return mu0_const_fp128(__builtin_fmodl(x, y));
#			else
				return mu0_const_fp128(fmodl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_fmodl))
				return __builtin_fmodl(x, y);
#			else
				return fmodl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmodl(x, y);
#	else
	return fmodl(x, y);
#	endif
}

mu0_fp64_t  mu8_fmod_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fmod))
			return __builtin_fmod(x, y);
#		else
		return fmod(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmod(x, y);
#	else
		return fmod(x, y);
#	endif
}

mu0_fp32_t  mu8_fmod_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_fmodf))
			return __builtin_fmodf(x, y);
#		else
		return fmodf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmodf(x, y);
#	else
		return fmodf(x, y);
#	endif
}

mu0_fp16_t  mu8_fmod_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_fmodf16))
				return __builtin_fmodf16(x, y);
#			elif (__has_builtin(__builtin_fmodf))
				return mu0_const_fp16(__builtin_fmodf(x, y));
#			else
				return mu0_const_fp16(fmodf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_fmodf))
				return __builtin_fmodf(x, y);
#			else
				return fmodf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_fmodf(x, y);
#	else
	return fmodf(x, y);
#	endif
}

/* EOF */