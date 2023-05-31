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

// mu8_casinh.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_casinh_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_casinhf128))
				return __builtin_casinhf128(z);
#			elif (__has_builtin(__builtin_casinhl))
				return mu0_const_fp128(__builtin_casinhl(z));
#			else
				return mu0_const_fp128(casinhl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_casinhl))
				return __builtin_casinhl(z);
#			else
				return casinhl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_casinhl(z);
#	else
	return casinhl(z);
#	endif
#	else
	mu0_cfp128_t  c = { 0 };
	mu8_zasinh_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_casinh_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_casinh))
			return __builtin_casinh(z);
#		else
			return casinh(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_casinh(z);
#	else
		return casinh(z);
#	endif
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zasinh_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_casinh_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_casinhf))
			return __builtin_casinhf(z);
#		else
			return casinhf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_casinhf(z);
#	else
		return casinhf(z);
#	endif
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zasinh_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_casinh_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_casinhf16))
				return __builtin_casinhf16(z);
#			elif (__has_builtin(__builtin_casinhf))
				return mu0_const_fp16(__builtin_casinhf(z));
#			else
				return mu0_const_fp16(casinhf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_casinhf))
				return __builtin_casinhf(z);
#			else
				return casinhf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_casinhf(z);
#	else
	return casinhf(z);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zasinh_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

/* EOF */