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

// mu8_iround.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_sint64_t mu8_iround_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_llroundf128))
				return __builtin_llroundf128(x);
#			elif (__has_builtin(__builtin_llroundl))
				return mu0_fp128(__builtin_llroundl(mu0_const_fpex(x)));
#			else
				return mu0_fp128(llroundl(mu0_const_fpex(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_llroundl))
				return __builtin_llroundl(x);
#			else
				return llroundl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llroundl(x);
#	else
	return llroundl(x);
#	endif
}

mu0_sint64_t mu8_iround_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_llround))
			return __builtin_llround(x);
#		else
		return llround(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llround(x);
#	else
		return llround(x);
#	endif
}

mu0_sint64_t mu8_iround_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_llroundf))
			return __builtin_llroundf(x);
#		else
		return llroundf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llroundf(x);
#	else
		return llroundf(x);
#	endif
}

mu0_sint64_t mu8_iround_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_llroundf16))
				return __builtin_llroundf16(x);
#			elif (__has_builtin(__builtin_llroundf))
				return mu0_fp16(__builtin_llroundf(mu0_const_fp32(x)));
#			else
				return mu0_fp16(llroundf(mu0_const_fp32(x)));
#			endif
#		else
#			if (__has_builtin(__builtin_llroundf))
				return __builtin_llroundf(x);
#			else
				return llroundf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llroundf(x);
#	else
	return llroundf(x);
#	endif
}

/* EOF */