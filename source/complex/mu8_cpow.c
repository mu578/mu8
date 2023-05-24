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

// mu8_cpow.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_cpow_fp128 (const mu0_cfp128_t x, const mu0_cfp128_t y)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_cpowf128))
				return __builtin_cpowf128(x, y);
#			elif (__has_builtin(__builtin_cpowl))
				return mu0_const_fp128(__builtin_cpowl(x, y));
#			else
				return mu0_const_fp128(cpowl(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_cpowl))
				return __builtin_cpowl(x, y);
#			else
				return cpowl(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cpowl(x, y);
#	else
	return cpowl(x, y);
#	endif
#	else
	mu0_cfp128_t  c = { 0 };
	mu8_zpow_fp128 (&c.u_re, &c.u_im, x.u_re, x.u_im, y.u_re, y.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_cpow_fp64  (const mu0_cfp64_t  x, const mu0_cfp64_t  y)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cpow))
			return __builtin_cpow(x, y);
#		else
		return cpow(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cpow(x, y);
#	else
		return cpow(x, y);
#	endif
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zpow_fp64  (&c.u_re, &c.u_im, x.u_re, x.u_im, y.u_re, y.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_cpow_fp32  (const mu0_cfp32_t  x, const mu0_cfp32_t  y)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cpowf))
			return __builtin_cpowf(x, y);
#		else
		return cpowf(x, y);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cpowf(x, y);
#	else
		return cpowf(x, y);
#	endif
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zpow_fp32  (&c.u_re, &c.u_im, x.u_re, x.u_im, y.u_re, y.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_cpow_fp16  (const mu0_cfp16_t  x, const mu0_cfp16_t  y)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_cpowf16))
				return __builtin_cpowf16(x, y);
#			elif (__has_builtin(__builtin_cpowf))
				return mu0_const_fp16(__builtin_cpowf(x, y));
#			else
				return mu0_const_fp16(cpowf(x, y));
#			endif
#		else
#			if (__has_builtin(__builtin_cpowf))
				return __builtin_cpowf(x, y);
#			else
				return cpowf(x, y);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cpowf(x, y);
#	else
	return cpowf(x, y);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zpow_fp16  (&c.u_re, &c.u_im, x.u_re, x.u_im, y.u_re, y.u_im);
	return c;
#	endif
}

/* EOF */