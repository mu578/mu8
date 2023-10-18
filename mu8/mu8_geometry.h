// # -*- coding: utf-8, tab-width: 3 -*-

//                                                           ___                                            //
//                                                          /   \                                           //
//                                            _   _  _   _  \ O /                                           //
//                                           | | | || | | | / _ \                                           //
//                                           | |_| || |_| |( (_) )                                          //
//                                           | ._,_| \___/  \___/                                           //
//                                           | |                                                            //
//                                           |_|                                                            //

// mu8_geometry.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_math_aliasing.h>
#include <mu8/mu8_math_constant.h>

#ifndef MU8_GEOMETRY_H
#define MU8_GEOMETRY_H 1

MU0_BEGIN_CDECL

#	define __mu8_vec2_neg__(_Tp, __cx, __cy, __ax, __ay)                                   \
mu0_scope_begin                                                                           \
	(__cx) = -(__ax);                                                                      \
	(__cy) = -(__ay);                                                                      \
mu0_scope_end

#	define __mu8_vec2_abs__(_Tp, __c, __ax, __ay)                                          \
mu0_scope_begin                                                                           \
	(__c) = (__ax) * (__ax) + (__ay) * (__ay);                                             \
mu0_scope_end

#	define __mu8_vec2_mag__(_Tp, _RealFp, __c, __ax, __ay)                                 \
mu0_scope_begin                                                                           \
	__mu8_vec2_abs__(_Tp, __c, __ax, __ay);                                                \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                         \
mu0_scope_end

#	define __mu8_vec2_normd__(_Tp, _RealFp, __cx, __cy, __ax, __ay)                        \
mu0_scope_begin                                                                           \
	__mu8_vec2_mag__(_Tp, _RealFp, __c, __ax, __ay);                                       \
	(__cx) = (__ax) * (mu0_const_cast(_RealFp, 1) / (__c));                                \
	(__cy) = (__ay) * (mu0_const_cast(_RealFp, 1) / (__c));                                \
mu0_scope_end

#	define __mu8_vec2_diff__(_Tp, __c, __ax, __ay, __bx, __by)                             \
mu0_scope_begin                                                                           \
	const _Tp __mu8_vec2_diff__x__ = (__ax) - (__bx);                                      \
	const _Tp __mu8_vec2_diff__y__ = (__ay) - (__by);                                      \
	__mu8_vec2_abs__(_Tp, __c, __mu8_vec2_diff__x__, __mu8_vec2_diff__y__);                \
mu0_scope_end

#	define __mu8_vec2_dist__(_Tp, _RealFp, __c, __ax, __ay, __bx, __by)                    \
mu0_scope_begin                                                                           \
	__mu8_vec_diff__(_Tp, __c, __ax, __ay, __bx, __by);                                    \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                         \
mu0_scope_end

#	define __mu8_vec2_dir__(_Tp, _RealFp, __cx, __cy, __ax, __ay, __bx, __by)              \
mu0_scope_begin                                                                           \
	(__cx) = (__bx) - (__ax);                                                              \
	(__cy) = (__by) - (__ay);                                                              \
	__mu8_vec2_normd__(_Tp, _RealFp, __cx, __cy, __cx, __cy);                              \
mu0_scope_end

#	define __mu8_vec2_arg__(_Tp, _RealFp, __c, __ax, __ay)                                 \
mu0_scope_begin                                                                           \
	(__c) = mu8_alias_atan2(_RealFp                                                        \
		, mu0_const_cast(_RealFp, __ay)                                                     \
		, mu0_const_cast(_RealFp, __ax)                                                     \
	);                                                                                     \
	(__c) = ((__c) < mu0_const_cast(_RealFp, 0)                                            \
		? (__c)                                                                             \
		: (__c) + mu0_const_cast(_RealFp, __mu8_math_2pi__);                                \
	);                                                                                     \
mu0_scope_end

#	define __mu8_vec2_lerp(_Tp, __cx, __cy, __ax, __ay, __bx, __by, __t)                   \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) * (mu0_const_cast(_Tp, 1) - (__t)) + __bx * (__t);                     \
	(__cy) = (__ay) * (mu0_const_cast(_Tp, 1) - (__t)) + __by * (__t);                     \
mu0_scope_end

#	define __mu8_vec2_add__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                       \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) + (__bx);                                                              \
	(__cy) = (__ay) + (__by);                                                              \
mu0_scope_end

#	define __mu8_vec2_add1__(_Tp, __cx, __cy, __ax, __ay, __b)                             \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) + (__b);                                                               \
	(__cy) = (__ay) + (__b);                                                               \
mu0_scope_end

#	define __mu8_vec2_sub__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                       \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) - (__bx);                                                              \
	(__cy) = (__ay) - (__by);                                                              \
mu0_scope_end

#	define __mu8_vec2_sub1__(_Tp, __cx, __cy, __ax, __ay, __b)                             \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) - (__b);                                                               \
	(__cy) = (__ay) - (__b);                                                               \
mu0_scope_end

#	define __mu8_vec2_dotp__(_Tp, __c, __ax, __ay, __bx, __by)                             \
mu0_scope_begin                                                                           \
	(__c) = (__ax) * (__bx) + (__ay) * (__by);                                             \
mu0_scope_end

#	define __mu8_vec2_cross__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                     \
mu0_scope_begin                                                                           \
	(__cx) = mu0_const_cast(_Tp, 0);                                                       \
	(__cy) = mu0_const_cast(_Tp, 0);                                                       \
mu0_scope_end

#	define __mu8_vec2_scale__(_Tp, __cx, __cy, __ax, __ay, __bx, __b)                      \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) / (__b);                                                               \
	(__cy) = (__ay) / (__b);                                                               \
mu0_scope_end

#	define __mu8_vec2_times__(_Tp, __cx, __cy, __ax, __ay, __bx, __b)                      \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) * (__b);                                                               \
	(__cy) = (__ay) * (__b);                                                               \
mu0_scope_end

#	define __mu8_vec2_angle__(_Tp, _RealFp, __c, __ax, __ay, __bx, __by)                   \
mu0_scope_begin                                                                           \
	_RealFp __mu8_vec2_angle__v__;                                                         \
	_RealFp __mu8_vec2_angle__w__;                                                         \
	_Tp     __mu8_vec2_angle__u__;                                                         \
	__mu8_vec2_mag__(_Tp, _RealFp, __mu8_vec2_angle__v__, __ax, __ay);                     \
	__mu8_vec2_mag__(_Tp, _RealFp, __mu8_vec2_angle__w__, __bx, __by);                     \
	__mu8_vec2_angle__v__ = __mu8_vec2_angle__v__ * __mu8_vec2_angle__w__;                 \
	__mu8_vec2_dotp__(_Tp, __mu8_vec2_angle__u__, __ax, __ay, __bx, __by);                 \
	__mu8_vec2_angle__w__ = __mu8_vec2_angle__u__ / __mu8_vec2_angle__v__;                 \
	__mu8_vec2_angle__w__ = (__mu8_vec2_angle__w__ < -mu0_const_cast(_RealFp, 1)           \
		? -mu0_const_cast(_RealFp, 1)                                                       \
		: __mu8_vec2_angle__w__                                                             \
	);                                                                                     \
	__mu8_vec2_angle__w__ = (__mu8_vec2_angle__w__ >  mu0_const_cast(_RealFp, 1)           \
		?  mu0_const_cast(_RealFp, 1)                                                       \
		: __mu8_vec2_angle__w__                                                             \
	);                                                                                     \
	(__c) = mu8_alias_acos(_RealFp, __mu8_vec2_angle__w__);                                \
mu0_scope_end

#	define __mu8_vec3_neg__(_Tp, __cx, __cy, __cz, __ax, __ay, __az)                       \
mu0_scope_begin                                                                           \
	(__cx) = -(__ax);                                                                      \
	(__cy) = -(__ay);                                                                      \
	(__cz) = -(__az);                                                                      \
mu0_scope_end

#	define __mu8_vec3_abs__(_Tp, __c, __ax, __ay, __az)                                    \
mu0_scope_begin                                                                           \
	(__c) = (__ax) * (__ax) + (__ay) * (__ay) + (__az) * (__az);                           \
mu0_scope_end

#	define __mu8_vec3_mag__(_Tp, _RealFp, __c, __ax, __ay, __az)                           \
mu0_scope_begin                                                                           \
	__mu8_vec3_abs__(_Tp, __c, __ax, __ay, __az);                                          \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                         \
mu0_scope_end

#	define __mu8_vec3_normd__(_Tp, _RealFp, __cx, __cy, __cz, __ax, __ay, __az)            \
mu0_scope_begin                                                                           \
	__mu8_vec3_mag__(_Tp, _RealFp, __c, __ax, __ay, __az);                                 \
	(__cx) = (__ax) * (mu0_const_cast(_RealFp, 1) / (__c));                                \
	(__cy) = (__ay) * (mu0_const_cast(_RealFp, 1) / (__c));                                \
	(__cz) = (__az) * (mu0_const_cast(_RealFp, 1) / (__c));                                \
mu0_scope_end

#	define __mu8_vec3_diff__(_Tp, __c, __ax, __ay, __az, __bx, __by, __bz)                 \
mu0_scope_begin                                                                           \
	const _Tp __mu8_vec3_diff__x__ = (__ax) - (__bx);                                      \
	const _Tp __mu8_vec3_diff__y__ = (__ay) - (__by);                                      \
	const _Tp __mu8_vec3_diff__z__ = (__az) - (__bz);                                      \
	__mu8_vec3_abs__(_Tp                                                                   \
		, __c                                                                               \
		, __mu8_vec3_diff__x__                                                              \
		, __mu8_vec3_diff__y__                                                              \
		, __mu8_vec3_diff__z__                                                              \
	);                                                                                     \
mu0_scope_end

#	define __mu8_vec3_dist__(_Tp, _RealFp, __c, __ax, __ay, __az, __bx, __by, __bz)        \
mu0_scope_begin                                                                           \
	__mu8_vec3_diff__(_Tp, __c, __ax, __ay, __az, __bx, __by, __bz);                       \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                         \
mu0_scope_end

#	define __mu8_vec3_lerp(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz, __t) \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) * (mu0_const_cast(_Tp, 1) - (__t)) + __bx * (__t);                     \
	(__cy) = (__ay) * (mu0_const_cast(_Tp, 1) - (__t)) + __by * (__t);                     \
	(__cz) = (__az) * (mu0_const_cast(_Tp, 1) - (__t)) + __bz * (__t);                     \
mu0_scope_end

#	define __mu8_vec3_add__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)     \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) + (__bx);                                                              \
	(__cy) = (__ay) + (__by);                                                              \
	(__cz) = (__az) + (__bz);                                                              \
mu0_scope_end

#	define __mu8_vec3_add1__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __b)                 \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) + (__b);                                                               \
	(__cy) = (__ay) + (__b);                                                               \
	(__cz) = (__az) + (__b);                                                               \
mu0_scope_end

#	define __mu8_vec3_sub__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)     \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) - (__bx);                                                              \
	(__cy) = (__ay) - (__by);                                                              \
	(__cz) = (__az) - (__bz);                                                              \
mu0_scope_end

#	define __mu8_vec3_sub1__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __b)                 \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) - (__b);                                                               \
	(__cy) = (__ay) - (__b);                                                               \
	(__cz) = (__az) - (__b);                                                               \
mu0_scope_end

#	define __mu8_vec3_dotp__(_Tp, __c, __ax, __ay, __az, __bx, __by, __bz)                 \
mu0_scope_begin                                                                           \
	(__c) = (__ax) * (__bx) + (__ay) * (__by) + (__az) * (__bz);                           \
mu0_scope_end

#	define __mu8_vec3_cross__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)   \
mu0_scope_begin                                                                           \
	(__cx) = (__ay) * (__bz) - (__az) * (__by);                                            \
	(__cy) = (__az) * (__bx) - (__ax) * (__bz);                                            \
	(__cz) = (__ax) * (__by) - (__ay) * (__bx);                                            \
mu0_scope_end

#	define __mu8_vec3_scale__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __b)          \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) / (__b);                                                               \
	(__cy) = (__ay) / (__b);                                                               \
	(__cz) = (__az) / (__b);                                                               \
mu0_scope_end

#	define __mu8_vec3_times__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __b)          \
mu0_scope_begin                                                                           \
	(__cx) = (__ax) * (__b);                                                               \
	(__cy) = (__ay) * (__b);                                                               \
	(__cz) = (__az) * (__b);                                                               \
mu0_scope_end

MU0_END_CDECL

#endif /* !MU8_GEOMETRY_H */

/* EOF */