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

// mu8_carg.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_fp128_t mu8_carg_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_cargf128))
				return __builtin_cargf128(z);
#			elif (__has_builtin(__builtin_cargl))
				return mu0_const_fp128(__builtin_cargl(z));
#			else
				return mu0_const_fp128(cargl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cargl))
				return __builtin_cargl(z);
#			else
				return cargl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cargl(z);
#	else
	return cargl(z);
#	endif
#	else
	return mu8_zarg_fp128 (z.u_re, z.u_im);
#	endif
}

mu0_fp64_t  mu8_carg_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_carg))
			return __builtin_carg(z);
#		else
			return carg(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_carg(z);
#	else
		return carg(z);
#	endif
#	else
	return mu8_zarg_fp64  (z.u_re, z.u_im);
#	endif
}

mu0_fp32_t  mu8_carg_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cargf))
			return __builtin_cargf(z);
#		else
			return cargf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cargf(z);
#	else
		return cargf(z);
#	endif
#	else
	return mu8_zarg_fp32  (z.u_re, z.u_im);
#	endif
}

mu0_fp16_t  mu8_carg_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_cargf16))
				return __builtin_cargf16(z);
#			elif (__has_builtin(__builtin_cargf))
				return mu0_const_fp16(__builtin_cargf(z));
#			else
				return mu0_const_fp16(cargf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cargf))
				return __builtin_cargf(z);
#			else
				return cargf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cargf(z);
#	else
	return cargf(z);
#	endif
#	else
	return mu8_zarg_fp16  (z.u_re, z.u_im);
#	endif
}

/* EOF */