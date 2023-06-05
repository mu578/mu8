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

// mu8_iexpi2.c
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_annex.h>

mu0_uint128_t mu8_iexpi2_u128 (const mu0_uint128_t e)
{
	return 1 << e;
}

mu0_uint64_t  mu8_iexpi2_u64  (const mu0_uint64_t  e)
{
	return 1 << e;
}

mu0_uint32_t  mu8_iexpi2_u32  (const mu0_uint32_t  e)
{
	return 1 << e;
}

mu0_uint16_t  mu8_iexpi2_u16  (const mu0_uint16_t  e)
{
	return 1 << e;
}

mu0_sint128_t mu8_iexpi2_i128 (const mu0_sint128_t e)
{
#	if MU0_HAVE_INT128
	return 1 << (e & 0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF);
#	else
	return 1 << (e & 0x7FFFFFFFFFFFFFFF);
#	endif
}

mu0_sint64_t  mu8_iexpi2_i64  (const mu0_sint64_t  e)
{
	return 1 << (e & 0x7FFFFFFFFFFFFFFF);
}

mu0_sint32_t  mu8_iexpi2_i32  (const mu0_sint32_t  e)
{
	return 1 << (e & 0x7FFFFFFF);
}

mu0_sint16_t  mu8_iexpi2_i16  (const mu0_sint16_t  e)
{
	return 1 << (e & 0x7FFFF);
}

/* EOF */