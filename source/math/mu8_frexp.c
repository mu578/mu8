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

// mu8_frexp.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_frexp_fp128 (const mu0_fp128_t x, mu0_sint64_t * e)
{
	mu0_fp128_t       r;
	___mu0_sint4_t___ q = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_frexpf128))
				r = __builtin_frexpf128(x, &q);
#			elif (__has_builtin(__builtin_frexpl))
				r = mu0_fp128(__builtin_frexpl(x, &q));
#			else
				r = mu0_fp128(frexpl(x, &q));
#			endif
#		else
#			if (__has_builtin(__builtin_frexpl))
				r = __builtin_frexpl(x, &q);
#			else
				r = frexpl(x, &q);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_frexpl(x, &q);
#	else
	r = frexpl(x, &q);
#	endif
	*e = mu0_const_sint64(q);
	return  r;
}

mu0_fp64_t  mu8_frexp_fp64  (const mu0_fp64_t  x, mu0_sint64_t * e)
{
	mu0_fp64_t        r;
	___mu0_sint4_t___ q = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_frexp))
			r = __builtin_frexp(x, &q);
#		else
		r = frexp(x, &q);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_frexp(x, &q);
#	else
		r = frexp(x, &q);
#	endif
	*e = mu0_const_sint64(q);
	return  r;
}

mu0_fp32_t  mu8_frexp_fp32  (const mu0_fp32_t  x, mu0_sint64_t * e)
{
	mu0_fp32_t        r;
	___mu0_sint4_t___ q = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_frexpf))
			r = __builtin_frexpf(x, &q);
#		else
		r = frexpf(x, &q);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_frexpf(x, &q);
#	else
		r = frexpf(x, &q);
#	endif
	*e = mu0_const_sint64(q);
	return  r;
}

mu0_fp16_t  mu8_frexp_fp16  (const mu0_fp16_t  x, mu0_sint64_t * e)
{
	mu0_fp16_t        r;
	___mu0_sint4_t___ q = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_frexpf16))
				r = __builtin_frexpf16(x, &q);
#			elif (__has_builtin(__builtin_frexpf))
				r = mu0_fp16(__builtin_frexpf(x, &q));
#			else
				r = mu0_fp16(frexpf(x, &q));
#			endif
#		else
#			if (__has_builtin(__builtin_frexpf))
				r = __builtin_frexpf(x, &q);
#			else
				r = frexpf(x, &q);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_frexpf(x, &q);
#	else
	r = frexpf(x, &q);
#	endif
	*e = mu0_const_sint64(q);
	return  r;
}

/* EOF */