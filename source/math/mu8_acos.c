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

// mu8_acos.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_acos_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_acosf128))
				return __builtin_acosf128(x);
#			elif (__has_builtin(__builtin_acosl))
				return mu0_const_fp128(__builtin_acosl(x));
#			else
				return mu0_const_fp128(acosl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_acosl))
				return __builtin_acosl(x);
#			else
				return acosl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acosl(x);
#	else
	return acosl(x);
#	endif
}

mu0_fp64_t  mu8_acos_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_acos))
			return __builtin_acos(x);
#		else
		return acos(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acos(x);
#	else
		return acos(x);
#	endif
}

mu0_fp32_t  mu8_acos_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_acosf))
			return __builtin_acosf(x);
#		else
		return acosf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acosf(x);
#	else
		return acosf(x);
#	endif
}

mu0_fp16_t  mu8_acos_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_acosf16))
				return __builtin_acosf16(x);
#			elif (__has_builtin(__builtin_acosf))
				return mu0_const_fp16(__builtin_acosf(x));
#			else
				return mu0_const_fp16(acosf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_acosf))
				return __builtin_acosf(x);
#			else
				return acosf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_acosf(x);
#	else
	return acosf(x);
#	endif
}

/* EOF */