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

// mu8_catan.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_catan_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_catanf128))
				return __builtin_catanf128(z);
#			elif (__has_builtin(__builtin_catanl))
				return mu0_const_fp128(__builtin_catanl(z));
#			else
				return mu0_const_fp128(catanl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_catanl))
				return __builtin_catanl(z);
#			else
				return catanl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_catanl(z);
#	else
	return catanl(z);
#	endif
#	else
	mu0_cfp128_t  c = { 0 };
	mu8_zatan_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_catan_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_catan))
			return __builtin_catan(z);
#		else
		return catan(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_catan(z);
#	else
		return catan(z);
#	endif
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zatan_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_catan_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_catanf))
			return __builtin_catanf(z);
#		else
		return catanf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_catanf(z);
#	else
		return catanf(z);
#	endif
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zatan_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_catan_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_catanf16))
				return __builtin_catanf16(z);
#			elif (__has_builtin(__builtin_catanf))
				return mu0_const_fp16(__builtin_catanf(z));
#			else
				return mu0_const_fp16(catanf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_catanf))
				return __builtin_catanf(z);
#			else
				return catanf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_catanf(z);
#	else
	return catanf(z);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zatan_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

/* EOF */