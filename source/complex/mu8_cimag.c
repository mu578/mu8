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

// mu8_cimag.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_fp128_t mu8_cimag_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_cimagf128))
				return __builtin_cimagf128(z);
#			elif (__has_builtin(__builtin_cimagl))
				return mu0_const_fp128(__builtin_cimagl(z));
#			else
				return mu0_const_fp128(cimagl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cimagl))
				return __builtin_cimagl(z);
#			else
				return cimagl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cimagl(z);
#	else
	return cimagl(z);
#	endif
#	else
	return z.u_im;
#	endif
}

mu0_fp64_t  mu8_cimag_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_cimag))
			return __builtin_cimag(z);
#		else
		return cimag(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cimag(z);
#	else
		return cimag(z);
#	endif
#	else
	return z.u_im;
#	endif
}

mu0_fp32_t  mu8_cimag_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_cimagf))
			return __builtin_cimagf(z);
#		else
		return cimagf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cimagf(z);
#	else
		return cimagf(z);
#	endif
#	else
	return z.u_im;
#	endif
}

mu0_fp16_t  mu8_cimag_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_cimagf16))
				return __builtin_cimagf16(z);
#			elif (__has_builtin(__builtin_cimagf))
				return mu0_const_fp16(__builtin_cimagf(z));
#			else
				return mu0_const_fp16(cimagf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cimagf))
				return __builtin_cimagf(z);
#			else
				return cimagf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cimagf(z);
#	else
	return cimagf(z);
#	endif
#	else
	return z.u_im;
#	endif
}

/* EOF */