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

// mu8_scalbn.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_scalbn_fp128 (const mu0_fp128_t x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_scalblnf128))
				return __builtin_scalblnf128(x, mu0_const_cast(___mu0_sintx_t___, n));
#			elif (__has_builtin(__builtin_scalblnl))
				return mu0_const_fp128(__builtin_scalblnl(x, mu0_const_cast(___mu0_sintx_t___, n)));
#			else
				return mu0_const_fp128(scalblnl(x, mu0_const_cast(___mu0_sintx_t___, n)));
#			endif
#		else
#			if (__has_builtin(__builtin_scalblnl))
				return __builtin_scalblnl(x, mu0_const_cast(___mu0_sintx_t___, n));
#			else
				return scalblnl(x, mu0_const_cast(___mu0_sintx_t___, n));
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_scalblnl(x, mu0_const_cast(___mu0_sintx_t___, n));
#	else
	return scalblnl(x, mu0_const_cast(___mu0_sintx_t___, n));
#	endif
}

mu0_fp64_t  mu8_scalbn_fp64  (const mu0_fp64_t  x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_scalbln))
			return __builtin_scalbln(x, mu0_const_cast(___mu0_sintx_t___, n));
#		else
		return scalbln(x, mu0_const_cast(___mu0_sintx_t___, n));
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_scalbln(x, mu0_const_cast(___mu0_sintx_t___, n));
#	else
		return scalbln(x, mu0_const_cast(___mu0_sintx_t___, n));
#	endif
}

mu0_fp32_t  mu8_scalbn_fp32  (const mu0_fp32_t  x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_scalblnf))
			return __builtin_scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#		else
		return scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#	else
		return scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#	endif
}

mu0_fp16_t  mu8_scalbn_fp16  (const mu0_fp16_t  x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_scalblnf16))
				return __builtin_scalblnf16(x, mu0_const_cast(___mu0_sintx_t___, n));
#			elif (__has_builtin(__builtin_scalblnf))
				return mu0_const_fp16(__builtin_scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n)));
#			else
				return mu0_const_fp16(scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n)));
#			endif
#		else
#			if (__has_builtin(__builtin_scalblnf))
				return __builtin_scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#			else
				return scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#	else
	return scalblnf(x, mu0_const_cast(___mu0_sintx_t___, n));
#	endif
}

/* EOF */