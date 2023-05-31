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

// mu8_ctanh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_ctanh_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_ctanhf128))
				return __builtin_ctanhf128(z);
#			elif (__has_builtin(__builtin_ctanhl))
				return mu0_const_fp128(__builtin_ctanhl(z));
#			else
				return mu0_const_fp128(ctanhl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_ctanhl))
				return __builtin_ctanhl(z);
#			else
				return ctanhl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctanhl(z);
#	else
	return ctanhl(z);
#	endif
#	else
	mu0_cfp128_t  c = { 0 };
	mu8_ztanh_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_ctanh_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_ctanh))
			return __builtin_ctanh(z);
#		else
			return ctanh(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctanh(z);
#	else
		return ctanh(z);
#	endif
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_ztanh_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_ctanh_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_ctanhf))
			return __builtin_ctanhf(z);
#		else
			return ctanhf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctanhf(z);
#	else
		return ctanhf(z);
#	endif
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_ztanh_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_ctanh_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_ctanhf16))
				return __builtin_ctanhf16(z);
#			elif (__has_builtin(__builtin_ctanhf))
				return mu0_const_fp16(__builtin_ctanhf(z));
#			else
				return mu0_const_fp16(ctanhf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_ctanhf))
				return __builtin_ctanhf(z);
#			else
				return ctanhf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctanhf(z);
#	else
	return ctanhf(z);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_ztanh_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

/* EOF */