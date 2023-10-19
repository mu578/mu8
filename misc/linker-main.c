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

// linker-main.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_geometry.h>
#include <mu8/mu8_complex_annex.h>
#include <mu8/mu8_complex.h>
#include <mu8/mu8_floating.h>
#include <mu8/mu8_math.h>
#include <mu8/mu8_functional_aliasing.h>
#include <mu8/mu8_functional.h>
#include <mu8/mu8_math_aliasing.h>
#include <mu8/mu8_math_annex.h>
#include <mu8/mu8_math_constant.h>
#include <mu8/mu8_math_generic.h>

int main(int argc, const char * argv[])
{
	mu0_cfp128_t x1 = mu8_ini(mu0_cfp128_t, 0);
	mu0_cfp64_t  x3 = mu8_ini(mu0_cfp64_t, 1);
	mu0_cfp32_t  x4 = mu8_ini(mu0_cfp32_t, 1);
	mu0_cfp16_t  x5 = mu8_ini(mu0_cfp16_t, 1);
	mu0_sint16_t x6 = mu8_ini(mu0_sint16_t, 1);

	mu0_console_log("%d\n", mu0_is_complex_number(x6));

	mu0_unused(argc);
	mu0_unused(argv);

	return 0;
}

/* EOF */