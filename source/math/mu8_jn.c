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

// mu8_jn.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math.h>

mu0_fp128_t mu8_jn_fp128 (const mu0_sint64_t n, const mu0_fp128_t x)
{
	return mu0_fp128(mu8_jn_fp64(n, mu0_const_fp64(x)));
}

mu0_fp64_t  mu8_jn_fp64  (const mu0_sint64_t n, const mu0_fp64_t  x)
{
#	if   MU0_HAVE_CC_MSVCC
	return _jn(mu0_const_cast(___mu0_sint4_t___, n), x);
#	elif MU0_HAVE_CC_ITLCC && MU0_HAVE_WINDOWS
	return _jn(mu0_const_cast(___mu0_sint4_t___, n), x);
#	else
	return jn(mu0_const_cast(___mu0_sint4_t___, n), x);
#	endif
}

mu0_fp32_t  mu8_jn_fp32  (const mu0_sint64_t n, const mu0_fp32_t  x)
{
	return mu0_fp32(mu8_jn_fp64(n, mu0_const_fp64(x)));
}

mu0_fp16_t  mu8_jn_fp16  (const mu0_sint64_t n, const mu0_fp16_t  x)
{
	return mu0_fp16(mu8_jn_fp64(n, mu0_const_fp64(x)));
}

/* EOF */