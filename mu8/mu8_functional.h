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

// mu8_functional.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_functional_aliasing.h>

#ifndef MU8_FUNCTIONAL_H
#define MU8_FUNCTIONAL_H 1

MU0_BEGIN_CDECL

#	if MU0_HAVE_CC_ARMCC || MU0_HAVE_CC_APLCC || MU0_HAVE_CC_CLANG || MU0_HAVE_CC_GNUCC || MU0_HAVE_CC_MSVCL

//#!
//#! macro<_Tp>(_Tp __x) : _Tp
//#!
#	define mu8_ini(_Tp, __x)                      \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu0_cfp16(__x, 0)                        \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu0_cfp32(__x, 0)                     \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu0_cfp64(__x, 0)                  \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu0_cfp128(__x, 0)              \
					: (_Tp) { __x }                   \
		)))

//#!
//#! macro<_Tp>(_Tp & __a, _Tp & __b) : _Tp
//#!
#	define mu8_add(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_cadd_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_cadd_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_cadd_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_cadd_fp128(__a, __b)        \
					: mu8_alias_add(_Tp, __a, __b)    \
		)))

#	define mu8_div(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_cdiv_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_cdiv_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_cdiv_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_cdiv_fp128(__a, __b)        \
					: mu8_alias_div(_Tp, __a, __b)    \
		)))

#	define mu8_mul(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_cmul_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_cmul_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_cmul_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_cmul_fp128(__a, __b)        \
					: mu8_alias_mul(_Tp, __a, __b)    \
		)))

#	define mu8_sub(_Tp, __a, __b)                 \
	__mu0_issame__(mu0_cfp16_t, _Tp)              \
		? mu8_csub_fp16(__a, __b)                  \
		: (__mu0_issame__(mu0_cfp32_t, _Tp)        \
			? mu8_csub_fp32(__a, __b)               \
			: (__mu0_issame__(mu0_cfp64_t, _Tp)     \
				? mu8_csub_fp64(__a, __b)            \
				: (__mu0_issame__(mu0_cfp128_t, _Tp) \
					? mu8_csub_fp128(__a, __b)        \
					: mu8_alias_sub(_Tp, __a, __b)    \
		)))

#	else

#	define mu8_ini(_Tp, __x)                     \
		mu0_is_complex_number(__x)                \
			? (_Tp) { __x, 0 }                     \
			: (_Tp) { __x    }

#	define mu8_add(_Tp, __a, __b) mu8_alias_add(_Tp, __a, __b)
#	define mu8_div(_Tp, __a, __b) mu8_alias_div(_Tp, __a, __b)
#	define mu8_mul(_Tp, __a, __b) mu8_alias_mul(_Tp, __a, __b)
#	define mu8_sub(_Tp, __a, __b) mu8_alias_sub(_Tp, __a, __b)

#	endif

MU0_END_CDECL

#endif /* !MU8_FUNCTIONAL_H */

/* EOF */