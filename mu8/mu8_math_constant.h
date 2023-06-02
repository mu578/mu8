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
#	define __mu8_math_pi__       +3.1415926535897932384626433832795028841971693993751058209749445923E+00

#	ifdef MU0_HAVE_C99
#	define __mu8_math_pi_fpex__  0x0.07ffb2d400f1p-1022
#	define __mu8_math_pi_fp64__  0x1.921fb54442d18p+1
#	define __mu8_math_pi_fp32__  0x1.921fb6p+1
#	else
#	define __mu8_math_pi_fpex__  __mu8_math_pi__
#	define __mu8_math_pi_fp64__  __mu8_math_pi__
#	define __mu8_math_pi_fp32__  __mu8_math_pi__
#	endif

__mu0_static__ const mu0_fp128_t mu8_math_pi_fp128     = mu0_const_fp128 (__mu8_math_pi_fpex__);
__mu0_static__ const mu0_fp64_t  mu8_math_pi_fp64      = mu0_const_fp64  (__mu8_math_pi_fp64__);
__mu0_static__ const mu0_fp32_t  mu8_math_pi_fp32      = mu0_const_fp32  (__mu8_math_pi_fp32__);
__mu0_static__ const mu0_fp16_t  mu8_math_pi_fp16      = mu0_const_fp16  (__mu8_math_pi_fp32__);

//#! 2*pi.
#	define __mu8_math_2pi__      +6.2831853071795864769252867665590057683943387987502116419498891846E+00

#	ifdef MU0_HAVE_C99
#	define __mu8_math_2pi_fpex__ 0x0.07efc339adf1p-1022
#	define __mu8_math_2pi_fp64__ 0x1.921fb54442d18p+2
#	define __mu8_math_2pi_fp32__ 0x1.921fb6p+2
#	else
#	define __mu8_math_2pi_fpex__ __mu8_math_pi__
#	define __mu8_math_2pi_fp64__ __mu8_math_pi__
#	define __mu8_math_2pi_fp32__ __mu8_math_pi__
#	endif

__mu0_static__ const mu0_fp128_t mu8_math_2pi_fp128    = mu0_const_fp128 (__mu8_math_2pi_fpex__);
__mu0_static__ const mu0_fp64_t  mu8_math_2pi_fp64     = mu0_const_fp64  (__mu8_math_2pi_fp64__);
__mu0_static__ const mu0_fp32_t  mu8_math_2pi_fp32     = mu0_const_fp32  (__mu8_math_2pi_fp32__);
__mu0_static__ const mu0_fp16_t  mu8_math_2pi_fp16     = mu0_const_fp16  (__mu8_math_2pi_fp32__);

//#! 4*pi.
#	define __mu8_math_4pi__      +12.566370614359172953850573533118011536788677597500423283899778369E+00

#	ifdef MU0_HAVE_C99
#	define __mu8_math_4pi_fpex__ 0x0.0559c8d74a6ap-1022
#	define __mu8_math_4pi_fp64__ 0x1.921fb54442d18p+3
#	define __mu8_math_4pi_fp32__ 0x1.921fb6p+3
#	else
#	define __mu8_math_4pi_fpex__ __mu8_math_pi__
#	define __mu8_math_4pi_fp64__ __mu8_math_pi__
#	define __mu8_math_4pi_fp32__ __mu8_math_pi__
#	endif

__mu0_static__ const mu0_fp128_t mu8_math_4pi_fp128    = mu0_const_fp128 (__mu8_math_4pi__);
__mu0_static__ const mu0_fp64_t  mu8_math_4pi_fp64     = mu0_const_fp64  (__mu8_math_4pi__);
__mu0_static__ const mu0_fp32_t  mu8_math_4pi_fp32     = mu0_const_fp32  (__mu8_math_4pi__);
__mu0_static__ const mu0_fp16_t  mu8_math_4pi_fp16     = mu0_const_fp16  (__mu8_math_4pi__);

//#! pi/2.
#	define __mu8_math_pio2__     +1.5707963267948966192313216916397514420985846996875529104874722961E+00

__mu0_static__ const mu0_fp128_t mu8_math_pio2_fp128   = mu0_const_fp128 (__mu8_math_pio2__);
__mu0_static__ const mu0_fp64_t  mu8_math_pio2_fp64    = mu0_const_fp64  (__mu8_math_pio2__);
__mu0_static__ const mu0_fp32_t  mu8_math_pio2_fp32    = mu0_const_fp32  (__mu8_math_pio2__);
__mu0_static__ const mu0_fp16_t  mu8_math_pio2_fp16    = mu0_const_fp16  (__mu8_math_pio2__);

//#! pi/4.
#	define __mu8_math_pio4__     +0.7853981633974483096156608458198757210492923498437764552437361480E+00

__mu0_static__ const mu0_fp128_t mu8_math_pio4_fp128   = mu0_const_fp128 (__mu8_math_pio4__);
__mu0_static__ const mu0_fp64_t  mu8_math_pio4_fp64    = mu0_const_fp64  (__mu8_math_pio4__);
__mu0_static__ const mu0_fp32_t  mu8_math_pio4_fp32    = mu0_const_fp32  (__mu8_math_pio4__);
__mu0_static__ const mu0_fp16_t  mu8_math_pio4_fp16    = mu0_const_fp16  (__mu8_math_pio4__);

//#! pi/180.
#	define __mu8_math_pio180__   +0.0174532925199432957692369076848861271344287188854172545609719144E+00

__mu0_static__ const mu0_fp128_t mu8_math_pio180_fp128 = mu0_const_fp128 (__mu8_math_pio180__);
__mu0_static__ const mu0_fp64_t  mu8_math_pio180_fp64  = mu0_const_fp64  (__mu8_math_pio180__);
__mu0_static__ const mu0_fp32_t  mu8_math_pio180_fp32  = mu0_const_fp32  (__mu8_math_pio180__);
__mu0_static__ const mu0_fp16_t  mu8_math_pio180_fp16  = mu0_const_fp16  (__mu8_math_pio180__);

//#! log(2).
#	define __mu8_math_ln2__      +0.6931471805599453094172321214581765680755001343602552541206800094E+00

__mu0_static__ const mu0_fp128_t mu8_math_ln2_fp128    = mu0_const_fp128 (__mu8_math_ln2__);
__mu0_static__ const mu0_fp64_t  mu8_math_ln2_fp64     = mu0_const_fp64  (__mu8_math_ln2__);
__mu0_static__ const mu0_fp32_t  mu8_math_ln2_fp32     = mu0_const_fp32  (__mu8_math_ln2__);
__mu0_static__ const mu0_fp16_t  mu8_math_ln2_fp16     = mu0_const_fp16  (__mu8_math_ln2__);

//#! log(10).
#	define __mu8_math_ln10__     +2.3025850929940456840179914546843642076011014886287729760333279009E+00

__mu0_static__ const mu0_fp128_t mu8_math_ln10_fp128   = mu0_const_fp128 (__mu8_math_ln10__);
__mu0_static__ const mu0_fp64_t  mu8_math_ln10_fp64    = mu0_const_fp64  (__mu8_math_ln10__);
__mu0_static__ const mu0_fp32_t  mu8_math_ln10_fp32    = mu0_const_fp32  (__mu8_math_ln10__);
__mu0_static__ const mu0_fp16_t  mu8_math_ln10_fp16    = mu0_const_fp16  (__mu8_math_ln10__);

MU0_END_CDECL

#endif /* !MU8_MATH_CONSTANT_H */

/* EOF */