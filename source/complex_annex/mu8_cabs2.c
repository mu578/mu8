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

// mu8_cabs2.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_fp128_t mu8_cabs2_fp128 (const mu0_cfp128_t z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zabs2_fp128(mu8_creal_fp128(z), mu8_cimag_fp128(z));
#	else
	return mu8_zabs2_fp128 (z.u_re, z.u_im);
#	endif
}

mu0_fp64_t  mu8_cabs2_fp64  (const mu0_cfp64_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zabs2_fp64(mu8_creal_fp64(z), mu8_cimag_fp64(z));
#	else
	return mu8_zabs2_fp64  (z.u_re, z.u_im);
#	endif
}

mu0_fp32_t  mu8_cabs2_fp32  (const mu0_cfp32_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zabs2_fp32(mu8_creal_fp32(z), mu8_cimag_fp32(z));
#	else
	return mu8_zabs2_fp32  (z.u_re, z.u_im);
#	endif
}

mu0_fp16_t  mu8_cabs2_fp16  (const mu0_cfp16_t  z)
{
#	if MU0_HAVE_STDCOMPLEX
	return mu8_zabs2_fp16(mu8_creal_fp16(z), mu8_cimag_fp16(z));
#	else
	return mu8_zabs2_fp16  (z.u_re, z.u_im);
#	endif
}

/* EOF */