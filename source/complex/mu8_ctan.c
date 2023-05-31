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

// mu8_ctan.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_ctan_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_ctanf128))
				return __builtin_ctanf128(z);
#			elif (__has_builtin(__builtin_ctanl))
				return mu0_const_fp128(__builtin_ctanl(z));
#			else
				return mu0_const_fp128(ctanl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_ctanl))
				return __builtin_ctanl(z);
#			else
				return ctanl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctanl(z);
#	else
	return ctanl(z);
#	endif
#	else
	mu0_cfp128_t  c = { 0 };
	mu8_ztan_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_ctan_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_ctan))
			return __builtin_ctan(z);
#		else
			return ctan(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctan(z);
#	else
		return ctan(z);
#	endif
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_ztan_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_ctan_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_ctanf))
			return __builtin_ctanf(z);
#		else
			return ctanf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctanf(z);
#	else
		return ctanf(z);
#	endif
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_ztan_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_ctan_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_ctanf16))
				return __builtin_ctanf16(z);
#			elif (__has_builtin(__builtin_ctanf))
				return mu0_const_fp16(__builtin_ctanf(z));
#			else
				return mu0_const_fp16(ctanf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_ctanf))
				return __builtin_ctanf(z);
#			else
				return ctanf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ctanf(z);
#	else
	return ctanf(z);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_ztan_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

/* EOF */