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

// mu8_cdiv.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_cdiv_fp128 (const mu0_cfp128_t a, const mu0_cfp128_t b)
{
#	if MU0_HAVE_STDCOMPLEX
	return a / b;
#	else
	mu0_cfp128_t c = { 0 };
	mu8_zdiv_fp128 (&c.u_re, &c.u_im, a.u_re, a.u_im, b.u_re, b.u_im);
	return c;
#	endif
}

mu0_cfpex_t  mu8_cdiv_fpex  (const mu0_cfpex_t  a, const mu0_cfpex_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
	return a / b;
#	else
	mu0_cfpex_t  c = { 0 };
	mu8_zdiv_fpex  (&c.u_re, &c.u_im, a.u_re, a.u_im, b.u_re, b.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_cdiv_fp64  (const mu0_cfp64_t  a, const mu0_cfp64_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
	return a / b;
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zdiv_fp64  (&c.u_re, &c.u_im, a.u_re, a.u_im, b.u_re, b.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_cdiv_fp32  (const mu0_cfp32_t  a, const mu0_cfp32_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
	return a / b;
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zdiv_fp32  (&c.u_re, &c.u_im, a.u_re, a.u_im, b.u_re, b.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_cdiv_fp16  (const mu0_cfp16_t  a, const mu0_cfp16_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
#	if !(MU0_HAVE_ARM64 && MU0_HAVE_FLOAT16)
	return a / b;
#	else
	mu0_fp16_t  cr, ci;
	mu8_zdiv_fp16  (&cr, &ci, mu8_creal_fp16(a), mu8_cimag_fp16(a), mu8_creal_fp16(b), mu8_cimag_fp16(b));
	return mu0_cfp16(cr, ci);
#	endif
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zdiv_fp16  (&c.u_re, &c.u_im, a.u_re, a.u_im, b.u_re, b.u_im);
	return c;
#	endif
}

/* EOF */