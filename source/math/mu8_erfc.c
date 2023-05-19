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

// mu8_erfc.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_erfc_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_erfcf128))
				return __builtin_erfcf128(x);
#			elif (__has_builtin(__builtin_erfcl))
				return mu0_const_fp128(__builtin_erfcl(x));
#			else
				return mu0_const_fp128(erfcl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_erfcl))
				return __builtin_erfcl(x);
#			else
				return erfcl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erfcl(x);
#	else
	return erfcl(x);
#	endif
}

mu0_fp64_t  mu8_erfc_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_erfc))
			return __builtin_erfc(x);
#		else
		return erfc(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erfc(x);
#	else
		return erfc(x);
#	endif
}

mu0_fp32_t  mu8_erfc_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_erfcf))
			return __builtin_erfcf(x);
#		else
		return erfcf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erfcf(x);
#	else
		return erfcf(x);
#	endif
}

mu0_fp16_t  mu8_erfc_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_erfcf16))
				return __builtin_erfcf16(x);
#			elif (__has_builtin(__builtin_erfcf))
				return mu0_const_fp16(__builtin_erfcf(x));
#			else
				return mu0_const_fp16(erfcf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_erfcf))
				return __builtin_erfcf(x);
#			else
				return erfcf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_erfcf(x);
#	else
	return erfcf(x);
#	endif
}

/* EOF */