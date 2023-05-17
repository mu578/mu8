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

// mu8_irint.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_sint64_t mu8_irint_fp128 (const mu0_fp128_t x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_llrintf128))
				return __builtin_llrintf128(x);
#			elif (__has_builtin(__builtin_llrintl))
				return __builtin_llrintl(mu0_const_fpex(x));
#			else
				return llrintl(mu0_const_fpex(x));
#			endif
#		else
#			if (__has_builtin(__builtin_llrintl))
				return __builtin_llrintl(x);
#			else
				return llrintl(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llrintl(x);
#	else
	return llrintl(x);
#	endif
}

mu0_sint64_t mu8_irint_fp64  (const mu0_fp64_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_llrint))
			return __builtin_llrint(x);
#		else
		return llrint(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llrint(x);
#	else
		return llrint(x);
#	endif
}

mu0_sint64_t mu8_irint_fp32  (const mu0_fp32_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if  (__has_builtin(__builtin_llrintf))
			return __builtin_llrintf(x);
#		else
		return llrintf(x);
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llrintf(x);
#	else
		return llrintf(x);
#	endif
}

mu0_sint64_t mu8_irint_fp16  (const mu0_fp16_t  x)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_llrintf16))
				return __builtin_llrintf16(x);
#			elif (__has_builtin(__builtin_llrintf))
				return __builtin_llrintf(mu0_const_fp32(x));
#			else
				return llrintf(mu0_const_fp32(x));
#			endif
#		else
#			if (__has_builtin(__builtin_llrintf))
				return __builtin_llrintf(x);
#			else
				return llrintf(x);
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_llrintf(x);
#	else
	return llrintf(x);
#	endif
}

/* EOF */