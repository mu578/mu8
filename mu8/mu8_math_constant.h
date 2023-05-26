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

// mu8_math_constant.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu0/mu0_floating.h>

#ifndef MU8_MATH_CONSTANT_H
#define MU8_MATH_CONSTANT_H 1

MU0_BEGIN_CDECL

//#! pi.
#	define __mu8_math_pi__  +3.141592653589793238462643383279502884197169399375105820974E+00

__mu0_static__ const mu0_fp128_t mu8_math_pi_fp128  = mu0_const_fp128 (__mu8_math_pi__);
__mu0_static__ const mu0_fp64_t  mu8_math_pi_fp64   = mu0_const_fp64  (__mu8_math_pi__);
__mu0_static__ const mu0_fp32_t  mu8_math_pi_fp32   = mu0_const_fp32  (__mu8_math_pi__);
__mu0_static__ const mu0_fp16_t  mu8_math_pi_fp16   = mu0_const_fp16  (__mu8_math_pi__);

//#! 2*pi.
#	define __mu8_math_2pi__ +6.283185307179586476925286766559005768394338798750211641949E+00

__mu0_static__ const mu0_fp128_t mu8_math_2pi_fp128 = mu0_const_fp128 (__mu8_math_2pi__);
__mu0_static__ const mu0_fp64_t  mu8_math_2pi_fp64  = mu0_const_fp64  (__mu8_math_2pi__);
__mu0_static__ const mu0_fp32_t  mu8_math_2pi_fp32  = mu0_const_fp32  (__mu8_math_2pi__);
__mu0_static__ const mu0_fp16_t  mu8_math_2pi_fp16  = mu0_const_fp16  (__mu8_math_2pi__);

//#! 4*pi.
#	define __mu8_math_4pi__ +12.56637061435917295385057353311801153678867759750042328389E+00

__mu0_static__ const mu0_fp128_t mu8_math_4pi_fp128 = mu0_const_fp128 (__mu8_math_4pi__);
__mu0_static__ const mu0_fp64_t  mu8_math_4pi_fp64  = mu0_const_fp64  (__mu8_math_4pi__);
__mu0_static__ const mu0_fp32_t  mu8_math_4pi_fp32  = mu0_const_fp32  (__mu8_math_4pi__);
__mu0_static__ const mu0_fp16_t  mu8_math_4pi_fp16  = mu0_const_fp16  (__mu8_math_4pi__);

//#! pi/2.
#	define __mu8_math_pi2__ +1.570796326794896619231321691639751442098584699687552910487E+00

__mu0_static__ const mu0_fp128_t mu8_math_pi2_fp128 = mu0_const_fp128 (__mu8_math_pi2__);
__mu0_static__ const mu0_fp64_t  mu8_math_pi2_fp64  = mu0_const_fp64  (__mu8_math_pi2__);
__mu0_static__ const mu0_fp32_t  mu8_math_pi2_fp32  = mu0_const_fp32  (__mu8_math_pi2__);
__mu0_static__ const mu0_fp16_t  mu8_math_pi2_fp16  = mu0_const_fp16  (__mu8_math_pi2__);

//#! pi/4.
#	define __mu8_math_pi4__ +0.785398163397448309615660845819875721049292349843776455243E+00

__mu0_static__ const mu0_fp128_t mu8_math_pi4_fp128 = mu0_const_fp128 (__mu8_math_pi4__);
__mu0_static__ const mu0_fp64_t  mu8_math_pi4_fp64  = mu0_const_fp64  (__mu8_math_pi4__);
__mu0_static__ const mu0_fp32_t  mu8_math_pi4_fp32  = mu0_const_fp32  (__mu8_math_pi4__);
__mu0_static__ const mu0_fp16_t  mu8_math_pi4_fp16  = mu0_const_fp16  (__mu8_math_pi4__);

MU0_END_CDECL

#endif /* !MU8_MATH_CONSTANT_H */

/* EOF */