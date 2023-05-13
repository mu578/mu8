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

// mu8_remquo.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_remquo_fp128 (const mu0_fp128_t x, const mu0_fp128_t y, mu0_sint64_t * q)
{
	mu0_fp128_t       r;
	___mu0_sint4_t___ e = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_remquof128))
				r = __builtin_remquof128(x, y, &e);
#			elif (__has_builtin(__builtin_remquol))
				r = mu0_fp128(__builtin_remquol(mu0_const_fpex(x), mu0_const_fpex(y), &e));
#			else
				r = mu0_fp128(remquol(mu0_const_fpex(x), mu0_const_fpex(y), &e));
#			endif
#		else
#			if (__has_builtin(__builtin_remquol))
				r = __builtin_remquol(x, y, &e);
#			else
				r = remquol(x, y, &e);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_remquol(x, y, &e);
#	else
	r = remquol(x, y, &e);
#	endif
	*q = mu0_const_sint64(e);
	return r;
}

mu0_fp64_t  mu8_remquo_fp64  (const mu0_fp64_t  x, const mu0_fp64_t  y, mu0_sint64_t * q)
{
	mu0_fp64_t        r;
	___mu0_sint4_t___ e = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_remquo))
			r = __builtin_remquo(x, y, &e);
#		else
		r = remquo(x, y, &e);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_remquo(x, y, &e);
#	else
		r = remquo(x, y, &e);
#	endif
	*q = mu0_const_sint64(e);
	return r;
}

mu0_fp32_t  mu8_remquo_fp32  (const mu0_fp32_t  x, const mu0_fp32_t  y, mu0_sint64_t * q)
{
	mu0_fp32_t        r;
	___mu0_sint4_t___ e = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_remquof))
			r = __builtin_remquof(x, y, &e);
#		else
		r = remquof(x, y, &e);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_remquof(x, y, &e);
#	else
		r = remquof(x, y, &e);
#	endif
	*q = mu0_const_sint64(e);
	return r;
}

mu0_fp16_t  mu8_remquo_fp16  (const mu0_fp16_t  x, const mu0_fp16_t  y, mu0_sint64_t * q)
{
	mu0_fp16_t        r;
	___mu0_sint4_t___ e = 0;
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_remquof16))
				r = __builtin_remquof16(x, y, &e);
#			elif (__has_builtin(__builtin_remquof))
				r = mu0_fp16(__builtin_remquof(mu0_const_fp32(x), mu0_const_fp32(y), &e));
#			else
				r = mu0_fp16(remquof(mu0_const_fp32(x), mu0_const_fp32(y), &e));
#			endif
#		else
#			if (__has_builtin(__builtin_remquof))
				r = __builtin_remquof(x, y, &e);
#			else
				r = remquof(x, y, &e);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		r = __builtin_remquof(x, y, &e);
#	else
	r = remquof(x, y, &e);
#	endif
	*q = mu0_const_sint64(e);
	return r;
}

/* EOF */