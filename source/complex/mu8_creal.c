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

// mu8_creal.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_fp128_t mu8_creal_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_crealf128))
				return __builtin_crealf128(z);
#			elif (__has_builtin(__builtin_creall))
				return mu0_const_fp128(__builtin_creall(z));
#			else
				return mu0_const_fp128(creall(z));
#			endif
#		else
#			if (__has_builtin(__builtin_creall))
				return __builtin_creall(z);
#			else
				return creall(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_creall(z);
#	else
	return creall(z);
#	endif
#	else
	return z.u_re;
#	endif
}

mu0_fp64_t  mu8_creal_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_creal))
			return __builtin_creal(z);
#		else
			return creal(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_creal(z);
#	else
		return creal(z);
#	endif
#	else
	return z.u_re;
#	endif
}

mu0_fp32_t  mu8_creal_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_crealf))
			return __builtin_crealf(z);
#		else
			return crealf(z);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_crealf(z);
#	else
		return crealf(z);
#	endif
#	else
	return z.u_re;
#	endif
}

mu0_fp16_t  mu8_creal_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_crealf16))
				return __builtin_crealf16(z);
#			elif (__has_builtin(__builtin_crealf))
				return mu0_const_fp16(__builtin_crealf(z));
#			else
				return mu0_const_fp16(crealf(z));
#			endif
#		else
#			if (__has_builtin(__builtin_crealf))
				return __builtin_crealf(z);
#			else
				return crealf(z);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_crealf(z);
#	else
	return crealf(z);
#	endif
#	else
	return z.u_re;
#	endif
}

/* EOF */