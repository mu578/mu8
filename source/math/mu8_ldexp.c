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

// mu8_ldexp.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_ldexp_fp128 (const mu0_fp128_t x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT128
#			if  (__has_builtin(__builtin_ldexpf128))
				return __builtin_ldexpf128(x, mu0_const_cast(___mu0_sint4_t___, n));
#			elif (__has_builtin(__builtin_ldexpl))
				return mu0_const_fp128(__builtin_ldexpl(x, mu0_const_cast(___mu0_sint4_t___, n)));
#			else
				return mu0_const_fp128(ldexpl(x, mu0_const_cast(___mu0_sint4_t___, n)));
#			endif
#		else
#			if (__has_builtin(__builtin_ldexpl))
				return __builtin_ldexpl(x, mu0_const_cast(___mu0_sint4_t___, n));
#			else
				return ldexpl(x, mu0_const_cast(___mu0_sint4_t___, n));
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ldexpl(x, mu0_const_cast(___mu0_sint4_t___, n));
#	else
	return ldexpl(x, mu0_const_cast(___mu0_sint4_t___, n));
#	endif
}

mu0_fp64_t  mu8_ldexp_fp64  (const mu0_fp64_t  x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_ldexp))
			return __builtin_ldexp(x, mu0_const_cast(___mu0_sint4_t___, n));
#		else
			return ldexp(x, mu0_const_cast(___mu0_sint4_t___, n));
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ldexp(x, mu0_const_cast(___mu0_sint4_t___, n));
#	else
		return ldexp(x, mu0_const_cast(___mu0_sint4_t___, n));
#	endif
}

mu0_fp32_t  mu8_ldexp_fp32  (const mu0_fp32_t  x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if  (__has_builtin(__builtin_ldexpf))
			return __builtin_ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#		else
			return ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#	else
		return ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#	endif
}

mu0_fp16_t  mu8_ldexp_fp16  (const mu0_fp16_t  x, const mu0_sint64_t n)
{
#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_MSVCL
#		if MU0_HAVE_FLOAT16
#			if  (__has_builtin(__builtin_ldexpf16))
				return __builtin_ldexpf16(x, mu0_const_cast(___mu0_sint4_t___, n));
#			elif (__has_builtin(__builtin_ldexpf))
				return mu0_const_fp16(__builtin_ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n)));
#			else
				return mu0_const_fp16(ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n)));
#			endif
#		else
#			if (__has_builtin(__builtin_ldexpf))
				return __builtin_ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#			else
				return ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#			endif
#		endif
#	elif MU0_HAVE_CC_GNUCC
		return __builtin_ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#	else
	return ldexpf(x, mu0_const_cast(___mu0_sint4_t___, n));
#	endif
}

/* EOF */