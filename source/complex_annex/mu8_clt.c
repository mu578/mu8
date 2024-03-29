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

// mu8_clt.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_bool_t mu8_clt_fp128 (const mu0_cfp128_t a, const mu0_cfp128_t b)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zlt_fp128(mu8_creal_fp128(a), mu8_cimag_fp128(a), mu8_creal_fp128(b), mu8_cimag_fp128(b));
#	else
	return mu8_zlt_fp128(a.u_re, a.u_im, b.u_re, b.u_im);
#	endif
}

mu0_bool_t mu8_clt_fpex  (const mu0_cfpex_t  a, const mu0_cfpex_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zlt_fpex (mu8_creal_fpex (a), mu8_cimag_fpex (a), mu8_creal_fpex (b), mu8_cimag_fpex (b));
#	else
	return mu8_zlt_fpex (a.u_re, a.u_im, b.u_re, b.u_im);
#	endif
}

mu0_bool_t mu8_clt_fp64  (const mu0_cfp64_t  a, const mu0_cfp64_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zlt_fp64 (mu8_creal_fp64 (a), mu8_cimag_fp64 (a), mu8_creal_fp64 (b), mu8_cimag_fp64 (b));
#	else
	return mu8_zlt_fp64 (a.u_re, a.u_im, b.u_re, b.u_im);
#	endif
}

mu0_bool_t mu8_clt_fp32  (const mu0_cfp32_t  a, const mu0_cfp32_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zlt_fp32 (mu8_creal_fp32 (a), mu8_cimag_fp32 (a), mu8_creal_fp32 (b), mu8_cimag_fp32 (b));
#	else
	return mu8_zlt_fp32 (a.u_re, a.u_im, b.u_re, b.u_im);
#	endif
}

mu0_bool_t mu8_clt_fp16  (const mu0_cfp16_t  a, const mu0_cfp16_t  b)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zlt_fp16 (mu8_creal_fp16 (a), mu8_cimag_fp16 (a), mu8_creal_fp16 (b), mu8_cimag_fp16 (b));
#	else
	return mu8_zlt_fp16 (a.u_re, a.u_im, b.u_re, b.u_im);
#	endif
}

/* EOF */