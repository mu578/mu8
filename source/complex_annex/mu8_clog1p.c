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

// mu8_clog1p.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_clog1p_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp128_t cr, ci;
	mu8_zlog1p_fp128 (&cr, &ci, mu8_creal_fp128(z), mu8_cimag_fp128(z));
	return mu0_cfp128( cr,  ci);
#	else
	mu0_cfp128_t c = { 0 };
	mu8_zlog1p_fp128 (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp64_t  mu8_clog1p_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp64_t  cr, ci;
	mu8_zlog1p_fp64  (&cr, &ci, mu8_creal_fp64(z), mu8_cimag_fp64(z));
	return mu0_cfp64 ( cr,  ci);
#	else
	mu0_cfp64_t  c = { 0 };
	mu8_zlog1p_fp64  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp32_t  mu8_clog1p_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp32_t  cr, ci;
	mu8_zlog1p_fp32  (&cr, &ci, mu8_creal_fp32(z), mu8_cimag_fp32(z));
	return mu0_cfp32 ( cr,  ci);
#	else
	mu0_cfp32_t  c = { 0 };
	mu8_zlog1p_fp32  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

mu0_cfp16_t  mu8_clog1p_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp16_t  cr, ci;
	mu8_zlog1p_fp16  (&cr, &ci, mu8_creal_fp16(z), mu8_cimag_fp16(z));
	return mu0_cfp16 ( cr,  ci);
#	else
	mu0_cfp16_t  c = { 0 };
	mu8_zlog1p_fp16  (&c.u_re, &c.u_im, z.u_re, z.u_im);
	return c;
#	endif
}

/* EOF */