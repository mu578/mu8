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

// mu8_cabs.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_fp128_t mu8_cabs_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_cabsf128))
				return __builtin_cabsf128(z);
#			elif (__has_builtin(__builtin_cabsl))
				return mu0_const_fp128(__builtin_cabsl(z));
#			else
				return mu0_const_fp128(cabsl(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cabsl))
				return __builtin_cabsl(z);
#			else
				return cabsl(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cabsl(z);
#	else
	return cabsl(z);
#	endif
#	else
	return mu8_zabs_fp128(z.u_re, z.u_im);
#	endif
}

mu0_fp64_t  mu8_cabs_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cabs))
			return __builtin_cabs(z);
#		else
		return cabs(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cabs(z);
#	else
		return cabs(z);
#	endif
#	else
	return mu8_zabs_fp64(z.u_re, z.u_im);
#	endif
}

mu0_fp32_t  mu8_cabs_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_cabsf))
			return __builtin_cabsf(z);
#		else
		return cabsf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cabsf(z);
#	else
		return cabsf(z);
#	endif
#	else
	return mu8_zabs_fp32(z.u_re, z.u_im);
#	endif
}

mu0_fp16_t  mu8_cabs_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_cabsf16))
				return __builtin_cabsf16(z);
#			elif (__has_builtin(__builtin_cabsf))
				return mu0_const_fp16(__builtin_cabsf(z));
#			else
				return mu0_const_fp16(cabsf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_cabsf))
				return __builtin_cabsf(z);
#			else
				return cabsf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_cabsf(z);
#	else
	return cabsf(z);
#	endif
#	else
	return mu8_zabs_fp16(z.u_re, z.u_im);
#	endif
}

/* EOF */