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

// mu8_cproj.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_cproj_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_cprojf128))
				return __builtin_cprojf128(z);
#			elif (__has_builtin(__builtin_cprojl))
				return mu0_const_fp128(__builtin_cprojl(z));
#			else
				return mu0_const_fp128(cprojl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cprojl))
				return __builtin_cprojl(z);
#			else
				return cprojl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cprojl(z);
#	else
	return cprojl(z);
#	endif
#	else
	mu0_cfp128_t  c = { 0 };
	mu8_zproj_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_cproj_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cproj))
			return __builtin_cproj(z);
#		else
			return cproj(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cproj(z);
#	else
		return cproj(z);
#	endif
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zproj_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_cproj_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cprojf))
			return __builtin_cprojf(z);
#		else
			return cprojf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cprojf(z);
#	else
		return cprojf(z);
#	endif
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zproj_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_cproj_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_cprojf16))
				return __builtin_cprojf16(z);
#			elif (__has_builtin(__builtin_cprojf))
				return mu0_const_fp16(__builtin_cprojf(z));
#			else
				return mu0_const_fp16(cprojf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cprojf))
				return __builtin_cprojf(z);
#			else
				return cprojf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cprojf(z);
#	else
	return cprojf(z);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zproj_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

/* EOF */