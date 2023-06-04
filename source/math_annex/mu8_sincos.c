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

// mu8_sincos.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

void mu8_sincos_fp128 (const mu0_fp128_t x, mu0_fp128_t * s, mu0_fp128_t * c)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_sincosf128))
				__builtin_sincosf128(x, s, c);
#			elif (__has_builtin(__builtin_sincosl))
				mu8_sincos_fpex ss, cc;
				__builtin_sincosl(x, &ss, &cc);
				*s = mu0_const_fp128(ss);
				*c = mu0_const_fp128(cc);
#			else
				*s = mu8_sin_fp128(x);
				*c = mu8_cos_fp128(x);
#			endif
#		else
#			if (__has_builtin(__builtin_sincosl))
				__builtin_sincosl(x, &s, &c);
#			else
				*s = mu8_sin_fp128(x);
				*c = mu8_cos_fp128(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
	mu8_sincos_fpex ss, cc;
	__builtin_sincosl(x, &ss, &cc);
	*s = mu0_const_fp128(ss);
	*c = mu0_const_fp128(cc);
#	else
	*s = mu8_sin_fp128(x);
	*c = mu8_cos_fp128(x);
#	endif
}

void mu8_sincos_fp64  (const mu0_fp64_t  x, mu0_fp64_t  * s, mu0_fp64_t  * c)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_sincos))
			__builtin_sincos(x, s, c);
#		else
			*s = mu8_sin_fp64(x);
			*c = mu8_cos_fp64(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		__builtin_sincos(x, s, c);
#	else
	*s = mu8_sin_fp64(x);
	*c = mu8_cos_fp64(x);
#	endif
}

void mu8_sincos_fp32  (const mu0_fp32_t  x, mu0_fp32_t  * s, mu0_fp32_t  * c)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_sincosf))
			__builtin_sincosf(x, s, c);
#		else
			*s = mu8_sin_fp32(x);
			*c = mu8_cos_fp32(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		__builtin_sincosf(x, s, c);
#	else
	*s = mu8_sin_fp32(x);
	*c = mu8_cos_fp32(x);
#	endif
}

void mu8_sincos_fp16  (const mu0_fp16_t  x, mu0_fp16_t  * s, mu0_fp16_t  * c)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_sincosf16))
				__builtin_sincosf16(x, s, c);
#			elif (__has_builtin(__builtin_sincosf))
				mu8_sincos_fp32 ss, cc;
				__builtin_sincosf(x, &ss, &cc);
				*s = mu0_const_fp16(ss);
				*c = mu0_const_fp16(cc);
#			else
				*s = mu8_sin_fp16(x);
				*c = mu8_cos_fp16(x);
#			endif
#		else
#			if (__has_builtin(__builtin_sincosf))
				__builtin_sincosf(x, &ss, &cc);
#			else
				*s = mu8_sin_fp16(x);
				*c = mu8_cos_fp16(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
	mu8_sincos_fp32 ss, cc;
	__builtin_sincosf(x, &ss, &cc);
	*s = mu0_const_fp16(ss);
	*c = mu0_const_fp16(cc);
#	else
	*s = mu8_sin_fp16(x);
	*c = mu8_cos_fp16(x);
#	endif
}

/* EOF */