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

// mu8_modf.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_modf_fp128 (const mu0_fp128_t x, mu0_fp128_t * f)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_modff128))
				return __builtin_modff128(x, f);
#			elif (__has_builtin(__builtin_modfl))
				mu0_fp128_t r;
				mu0_fpex_t  q;
				 r = mu0_fp128(__builtin_modfl(x, &q));
				*f = mu0_const_fp128(q);
				return r;
#			else
				mu0_fp128_t r;
				mu0_fpex_t  q;
				 r = mu0_fp128(modfl(x, &q));
				*f = mu0_const_fp128(q);
				return r;
#			endif
#		else
#			if (__has_builtin(__builtin_modfl))
				return __builtin_modfl(x, f);
#			else
				return modfl(x, f);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
	mu0_fp128_t r;
	mu0_fpex_t  q;
	 r = mu0_fp128(__builtin_modfl(x, &q));
	*f = mu0_const_fp128(q);
	return r;
#	else
	return modfl(x, f);
#	endif
}

mu0_fp64_t  mu8_modf_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * f)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_modf))
			return __builtin_modf(x, f);
#		else
			return modf(x, f);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_modf(x, f);
#	else
		return modf(x, f);
#	endif
}

mu0_fp32_t  mu8_modf_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * f)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_modff))
			return __builtin_modff(x, f);
#		else
			return modff(x, f);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_modff(x, f);
#	else
		return modff(x, f);
#	endif
}

mu0_fp16_t  mu8_modf_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * f)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_modff16))
				return __builtin_modff16(x, f);
#			elif (__has_builtin(__builtin_modff))
				mu0_fp16_t r;
				mu0_fp32_t q;
				 r = mu0_fp16(__builtin_modff(x, &q));
				*f = mu0_const_fp16(q);
				return r;
#			else
				mu0_fp16_t r;
				mu0_fp32_t q;
				 r = mu0_fp16(modff(x, &q));
				*f = mu0_const_fp16(q);
				return r;
#			endif
#		else
#			if (__has_builtin(__builtin_modff))
				return __builtin_modff(x, f);
#			else
				return modff(x, f);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
	mu0_fp16_t r;
	mu0_fp32_t q;
	 r = mu0_fp16(__builtin_modff(x, &q));
	*f = mu0_const_fp16(q);
	return r;
#	else
	return modff(x, f);
#	endif
}

/* EOF */