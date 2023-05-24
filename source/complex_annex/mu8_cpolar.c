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

// mu8_cpolar.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_complex_annex.h>

mu0_cfp128_t mu8_cpolar_fp128 (const mu0_fp128_t rho, const mu0_fp128_t theta)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp128_t zr, zi;
	mu8_zpolar_fp128  (&zr, &zi, rho, theta);
	return mu0_cfp128 (zr, zi);
#	else
	mu0_cfp128_t z = { 0 };
	mu8_zpolar_fp128 (&z.u_re, &z.u_im, rho, theta);
	return z;
#	endif
}

mu0_cfp64_t  mu8_cpolar_fp64  (const mu0_fp64_t  rho, const mu0_fp64_t  theta)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp64_t zr, zi;
	mu8_zpolar_fp64   (&zr, &zi, rho, theta);
	return mu0_cfp64  (zr, zi);
#	else
	mu0_cfp64_t  z = { 0 };
	mu8_zpolar_fp64  (&z.u_re, &z.u_im, rho, theta);
	return z;
#	endif
}

mu0_cfp32_t  mu8_cpolar_fp32  (const mu0_fp32_t  rho, const mu0_fp32_t  theta)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp32_t zr, zi;
	mu8_zpolar_fp32   (&zr, &zi, rho, theta);
	return mu0_cfp32  (zr, zi);
#	else
	mu0_cfp32_t  z = { 0 };
	mu8_zpolar_fp32  (&z.u_re, &z.u_im, rho, theta);
	return z;
#	endif
}

mu0_cfp16_t  mu8_cpolar_fp16  (const mu0_fp16_t  rho, const mu0_fp16_t  theta)
{
#	if MU0_HAVE_STDCOMPLEX
	mu0_fp16_t zr, zi;
	mu8_zpolar_fp16   (&zr, &zi, rho, theta);
	return mu0_cfp16  (zr, zi);
#	else
	mu0_cfp16_t  z = { 0 };
	mu8_zpolar_fp16  (&z.u_re, &z.u_im, rho, theta);
	return z;
#	endif
}

/* EOF */