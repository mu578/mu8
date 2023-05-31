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

// mu8_log.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_log_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_logf128))
				return __builtin_logf128(x);
#			elif (__has_builtin(__builtin_logl))
				return mu0_const_fp128(__builtin_logl(x));
#			else
				return mu0_const_fp128(logl(x));
#			endif
#		else
#			if (__has_builtin(__builtin_logl))
				return __builtin_logl(x);
#			else
				return logl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_logl(x);
#	else
	return logl(x);
#	endif
}

mu0_fp64_t  mu8_log_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_log))
			return __builtin_log(x);
#		else
			return log(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_log(x);
#	else
		return log(x);
#	endif
}

mu0_fp32_t  mu8_log_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_logf))
			return __builtin_logf(x);
#		else
			return logf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_logf(x);
#	else
		return logf(x);
#	endif
}

mu0_fp16_t  mu8_log_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_logf16))
				return __builtin_logf16(x);
#			elif (__has_builtin(__builtin_logf))
				return mu0_const_fp16(__builtin_logf(x));
#			else
				return mu0_const_fp16(logf(x));
#			endif
#		else
#			if (__has_builtin(__builtin_logf))
				return __builtin_logf(x);
#			else
				return logf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_logf(x);
#	else
	return logf(x);
#	endif
}

/* EOF */