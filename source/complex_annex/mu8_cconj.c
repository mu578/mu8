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

// mu8_cconj.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_cconj_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_conjf128))
				return __builtin_conjf128(z);
#			elif (__has_builtin(__builtin_conjl))
				return mu0_const_fp128(__builtin_conjl(z));
#			else
				return mu0_const_fp128(conjl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_conjl))
				return __builtin_conjl(z);
#			else
				return conjl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_conjl(z);
#	else
	return conjl(z);
#	endif
#	else
	mu0_cfp128_t  c = { 0 };
	mu8_zconj_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfpex_t  mu8_cconj_fpex  (const mu0_cfpex_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_conjl))
			return __builtin_conjl(z);
#		else
			return conjl(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_conjl(z);
#	else
		return conjl(z);
#	endif
#	else
	mu0_cfpex_t  c = { 0 };
	mu8_zconj_fpex  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_cconj_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_conj))
			return __builtin_conj(z);
#		else
			return conj(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_conj(z);
#	else
		return conj(z);
#	endif
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zconj_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_cconj_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_conjf))
			return __builtin_conjf(z);
#		else
			return conjf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_conjf(z);
#	else
		return conjf(z);
#	endif
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zconj_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_cconj_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_conjf16))
				return __builtin_conjf16(z);
#			elif (__has_builtin(__builtin_conjf))
				return mu0_const_fp16(__builtin_conjf(z));
#			else
				return mu0_const_fp16(conjf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_conjf))
				return __builtin_conjf(z);
#			else
				return conjf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_conjf(z);
#	else
	return conjf(z);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zconj_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

/* EOF */