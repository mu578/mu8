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

// mu8_clog2.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_clog2_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_clog_fp128 (z) / mu8_clog_fp128 (mu0_cfp128 (2.0, 0.0));
#	else
	mu0_cfp128_t c = { 0 };
	mu8_zlog2_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c; 
#	endif
}

mu0_cfp64_t  mu8_clog2_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_clog_fp64  (z) / mu8_clog_fp64  (mu0_cfp64  (2.0, 0.0));
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zlog2_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c; 
#	endif
}

mu0_cfp32_t  mu8_clog2_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_clog_fp32  (z) / mu8_clog_fp32  (mu0_cfp32  (2.0, 0.0));
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zlog2_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c; 
#	endif
}

mu0_cfp16_t  mu8_clog2_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_clog_fp16  (z) / mu8_clog_fp16  (mu0_cfp16  (2.0, 0.0));
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zlog2_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c; 
#	endif
}

/* EOF */