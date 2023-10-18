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

typedef struct { mu0_fp128_t u_x; mu0_fp128_t u_y; } mu0_v2fp128_t;
typedef struct { mu0_fp64_t  u_x; mu0_fp64_t  u_y; } mu0_v2fp64_t;
typedef struct { mu0_fp32_t  u_x; mu0_fp32_t  u_y; } mu0_v2fp32_t;
typedef struct { mu0_fp16_t  u_x; mu0_fp16_t  u_y; } mu0_v2fp16_t;

typedef struct { mu0_fp128_t u_x; mu0_fp128_t u_y; mu0_fp128_t u_z; } mu0_v3fp128_t;
typedef struct { mu0_fp64_t  u_x; mu0_fp64_t  u_y; mu0_fp64_t  u_z; } mu0_v3fp64_t;
typedef struct { mu0_fp32_t  u_x; mu0_fp32_t  u_y; mu0_fp32_t  u_z; } mu0_v3fp32_t;
typedef struct { mu0_fp16_t  u_x; mu0_fp16_t  u_y; mu0_fp16_t  u_z; } mu0_v3fp16_t;

#	define __mu8_vec2_negate__(_Tp, __cx, __cy, __ax, __ay)                                           \
mu0_scope_begin                                                                                      \
	(__cx) = -(__ax);                                                                                 \
	(__cy) = -(__ay);                                                                                 \
mu0_scope_end

#	define __mu8_vec2_abs__(_Tp, __c, __ax, __ay)                                                     \
mu0_scope_begin                                                                                      \
	(__c) = (__ax) * (__ax) + (__ay) * (__ay);                                                        \
mu0_scope_end

#	define __mu8_vec2_mag__(_Tp, _RealFp, __c, __ax, __ay)                                            \
mu0_scope_begin                                                                                      \
	__mu8_vec2_abs__(_Tp, __c, __ax, __ay);                                                           \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                                    \
mu0_scope_end

#	define __mu8_vec2_normalize__(_Tp, _RealFp, __cx, __cy, __ax, __ay)                               \
mu0_scope_begin                                                                                      \
	__mu8_vec2_mag__(_Tp, _RealFp, __c, __ax, __ay);                                                  \
	(__cx) = (__ax) * (mu0_const_cast(_RealFp, 1) / (__c));                                           \
	(__cy) = (__ay) * (mu0_const_cast(_RealFp, 1) / (__c));                                           \
mu0_scope_end

#	define __mu8_vec2_area__(_Tp, __c, __ax, __ay, __bx, __by)                                        \
mu0_scope_begin                                                                                      \
	const _Tp __mu8_vec2_area__x__ = (__ax) - (__bx);                                                 \
	const _Tp __mu8_vec2_area__y__ = (__ay) - (__by);                                                 \
	__mu8_vec2_abs__(_Tp, __c, __mu8_vec2_area__x__, __mu8_vec2_area__y__);                           \
mu0_scope_end

#	define __mu8_vec2_distance__(_Tp, _RealFp, __c, __ax, __ay, __bx, __by)                           \
mu0_scope_begin                                                                                      \
	__mu8_vec_area__(_Tp, __c, __ax, __ay, __bx, __by);                                               \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                                    \
mu0_scope_end

#	define __mu8_vec2_direction__(_Tp, _RealFp, __cx, __cy, __ax, __ay, __bx, __by)                   \
mu0_scope_begin                                                                                      \
	(__cx) = (__bx) - (__ax);                                                                         \
	(__cy) = (__by) - (__ay);                                                                         \
	__mu8_vec2_normalize__(_Tp, _RealFp, __cx, __cy, __cx, __cy);                                     \
mu0_scope_end

#	define __mu8_vec2_arg__(_Tp, _RealFp, __c, __ax, __ay)                                            \
mu0_scope_begin                                                                                      \
	(__c) = mu8_alias_atan2(_RealFp                                                                   \
		, mu0_const_cast(_RealFp, __ay)                                                                \
		, mu0_const_cast(_RealFp, __ax)                                                                \
	);                                                                                                \
	(__c) = ((__c) < mu0_const_cast(_RealFp, 0)                                                       \
		? (__c)                                                                                        \
		: (__c) + mu0_const_cast(_RealFp, __mu8_math_2pi__);                                           \
	);                                                                                                \
mu0_scope_end

#	define __mu8_vec2_lerp(_Tp, __cx, __cy, __ax, __ay, __bx, __by, __t)                              \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) * (mu0_const_cast(_Tp, 1) - (__t)) + __bx * (__t);                                \
	(__cy) = (__ay) * (mu0_const_cast(_Tp, 1) - (__t)) + __by * (__t);                                \
mu0_scope_end

#	define __mu8_vec2_dot__(_Tp, __c, __ax, __ay, __bx, __by)                                         \
mu0_scope_begin                                                                                      \
	(__c) = (__ax) * (__bx) + (__ay) * (__by);                                                        \
mu0_scope_end

#	define __mu8_vec2_conj__(_Tp, __cx, __cy, __ax, __ay)                                             \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax);                                                                                  \
	(__cy) = (__ay);                                                                                  \
mu0_scope_end

#	define __mu8_vec2_cross__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                                \
mu0_scope_begin                                                                                      \
	(__cx) = mu0_const_cast(_Tp, 0);                                                                  \
	(__cy) = mu0_const_cast(_Tp, 0);                                                                  \
mu0_scope_end

#	define __mu8_vec2_equals__(_Tp, __c, __ax, __ay, __bx, __by)                                      \
	((__ax) == (__bx) && (__ay) == (__by) ? mu0_true : mu0_false)

#	define __mu8_vec2_scale__(_Tp, __cx, __cy, __ax, __ay, __b)                                       \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) / (__b);                                                                          \
	(__cy) = (__ay) / (__b);                                                                          \
mu0_scope_end

#	define __mu8_vec2_times__(_Tp, __cx, __cy, __ax, __ay, __b)                                       \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) * (__b);                                                                          \
	(__cy) = (__ay) * (__b);                                                                          \
mu0_scope_end

#	define __mu8_vec2_angle__(_Tp, _RealFp, __c, __ax, __ay, __bx, __by)                              \
mu0_scope_begin                                                                                      \
	_RealFp __mu8_vec2_angle__v__;                                                                    \
	_RealFp __mu8_vec2_angle__w__;                                                                    \
	_Tp     __mu8_vec2_angle__u__;                                                                    \
	__mu8_vec2_mag__(_Tp, _RealFp, __mu8_vec2_angle__v__, __ax, __ay);                                \
	__mu8_vec2_mag__(_Tp, _RealFp, __mu8_vec2_angle__w__, __bx, __by);                                \
	__mu8_vec2_angle__v__ = __mu8_vec2_angle__v__ * __mu8_vec2_angle__w__;                            \
	__mu8_vec2_dot__(_Tp, __mu8_vec2_angle__u__, __ax, __ay, __bx, __by);                             \
	__mu8_vec2_angle__w__ = __mu0_clamp__((__mu8_vec2_angle__u__ / __mu8_vec2_angle__v__)             \
		, -mu0_const_cast(_RealFp, 1)                                                                  \
		,  mu0_const_cast(_RealFp, 1)                                                                  \
	);                                                                                                \
	(__c) = mu8_alias_acos(_RealFp, __mu8_vec2_angle__w__);                                           \
mu0_scope_end

#	define __mu8_vec2_add__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                                  \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) + (__bx);                                                                         \
	(__cy) = (__ay) + (__by);                                                                         \
mu0_scope_end

#	define __mu8_vec2_add1__(_Tp, __cx, __cy, __ax, __ay, __b)                                        \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) + (__b);                                                                          \
	(__cy) = (__ay) + (__b);                                                                          \
mu0_scope_end

#	define __mu8_vec2_div__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                                  \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) / (__bx);                                                                         \
	(__cy) = (__ay) / (__by);                                                                         \
mu0_scope_end

#	define __mu8_vec2_div1__(_Tp, __cx, __cy, __ax, __ay, __b)                                        \
	__mu8_vec2_scale__(_Tp, __cx, __cy, __ax, __ay, __b)

#	define __mu8_vec2_mul__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                                  \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) * (__bx);                                                                         \
	(__cy) = (__ay) * (__by);                                                                         \
mu0_scope_end

#	define __mu8_vec2_mul1__(_Tp, __cx, __cy, __ax, __ay, __b)                                        \
	__mu8_vec2_times__(_Tp, __cx, __cy, __ax, __ay, __b)

#	define __mu8_vec2_sub__(_Tp, __cx, __cy, __ax, __ay, __bx, __by)                                  \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) - (__bx);                                                                         \
	(__cy) = (__ay) - (__by);                                                                         \
mu0_scope_end

#	define __mu8_vec2_sub1__(_Tp, __cx, __cy, __ax, __ay, __b)                                        \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) - (__b);                                                                          \
	(__cy) = (__ay) - (__b);                                                                          \
mu0_scope_end

#	define __mu8_vec3_negate__(_Tp, __cx, __cy, __cz, __ax, __ay, __az)                               \
mu0_scope_begin                                                                                      \
	(__cx) = -(__ax);                                                                                 \
	(__cy) = -(__ay);                                                                                 \
	(__cz) = -(__az);                                                                                 \
mu0_scope_end

#	define __mu8_vec3_abs__(_Tp, __c, __ax, __ay, __az)                                               \
mu0_scope_begin                                                                                      \
	(__c) = (__ax) * (__ax) + (__ay) * (__ay) + (__az) * (__az);                                      \
mu0_scope_end

#	define __mu8_vec3_mag__(_Tp, _RealFp, __c, __ax, __ay, __az)                                      \
mu0_scope_begin                                                                                      \
	__mu8_vec3_abs__(_Tp, __c, __ax, __ay, __az);                                                     \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                                    \
mu0_scope_end

#	define __mu8_vec3_normalize__(_Tp, _RealFp, __cx, __cy, __cz, __ax, __ay, __az)                   \
mu0_scope_begin                                                                                      \
	__mu8_vec3_mag__(_Tp, _RealFp, __c, __ax, __ay, __az);                                            \
	(__cx) = (__ax) * (mu0_const_cast(_RealFp, 1) / (__c));                                           \
	(__cy) = (__ay) * (mu0_const_cast(_RealFp, 1) / (__c));                                           \
	(__cz) = (__az) * (mu0_const_cast(_RealFp, 1) / (__c));                                           \
mu0_scope_end

#	define __mu8_vec3_area__(_Tp, __c, __ax, __ay, __az, __bx, __by, __bz)                            \
mu0_scope_begin                                                                                      \
	const _Tp __mu8_vec3_area__x__ = (__ax) - (__bx);                                                 \
	const _Tp __mu8_vec3_area__y__ = (__ay) - (__by);                                                 \
	const _Tp __mu8_vec3_area__z__ = (__az) - (__bz);                                                 \
	__mu8_vec3_abs__(_Tp                                                                              \
		, __c                                                                                          \
		, __mu8_vec3_area__x__                                                                         \
		, __mu8_vec3_area__y__                                                                         \
		, __mu8_vec3_area__z__                                                                         \
	);                                                                                                \
mu0_scope_end

#	define __mu8_vec3_distance__(_Tp, _RealFp, __c, __ax, __ay, __az, __bx, __by, __bz)               \
mu0_scope_begin                                                                                      \
	__mu8_vec3_area__(_Tp, __c, __ax, __ay, __az, __bx, __by, __bz);                                  \
	(__c) = mu8_alias_sqrt(_RealFp, mu0_const_cast(_RealFp, __c));                                    \
mu0_scope_end

#	define __mu8_vec3_direction__(_Tp, _RealFp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz) \
mu0_scope_begin                                                                                      \
	(__cx) = mu0_const_cast(_RealFp, 0);                                                              \
	(__cy) = mu0_const_cast(_RealFp, 0);                                                              \
	(__cz) = mu0_const_cast(_RealFp, 0);                                                              \
mu0_scope_end

#	define __mu8_vec3_arg__(_Tp, _RealFp, __c, __ax, __ay, __az)                                      \
mu0_scope_begin                                                                                      \
	(__c) = mu0_const_cast(_RealFp, 0);                                                               \
mu0_scope_end

#	define __mu8_vec3_lerp(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz, __t)            \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) * (mu0_const_cast(_Tp, 1) - (__t)) + __bx * (__t);                                \
	(__cy) = (__ay) * (mu0_const_cast(_Tp, 1) - (__t)) + __by * (__t);                                \
	(__cz) = (__az) * (mu0_const_cast(_Tp, 1) - (__t)) + __bz * (__t);                                \
mu0_scope_end

#	define __mu8_vec3_dot__(_Tp, __c, __ax, __ay, __az, __bx, __by, __bz)                             \
mu0_scope_begin                                                                                      \
	(__c) = (__ax) * (__bx) + (__ay) * (__by) + (__az) * (__bz);                                      \
mu0_scope_end

#	define __mu8_vec3_conj__(_Tp, __cx, __cy, __cz, __ax, __ay, __az)                                 \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax);                                                                                  \
	(__cy) = (__ay);                                                                                  \
	(__cz) = (__az);                                                                                  \
mu0_scope_end


#	define __mu8_vec3_cross__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)              \
mu0_scope_begin                                                                                      \
	(__cx) = (__ay) * (__bz) - (__az) * (__by);                                                       \
	(__cy) = (__az) * (__bx) - (__ax) * (__bz);                                                       \
	(__cz) = (__ax) * (__by) - (__ay) * (__bx);                                                       \
mu0_scope_end

#	define __mu8_vec3_equals__(_Tp, __c, __ax, __ay, __az, __bx, __by, __bz)                          \
	((__ax) == (__bx) && (__ay) == (__by) && (__az) * (__bz) ? mu0_true : mu0_false)

#	define __mu8_vec3_scale__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __b)                           \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) / (__b);                                                                          \
	(__cy) = (__ay) / (__b);                                                                          \
	(__cz) = (__az) / (__b);                                                                          \
mu0_scope_end

#	define __mu8_vec3_times__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __b)                           \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) * (__b);                                                                          \
	(__cy) = (__ay) * (__b);                                                                          \
	(__cz) = (__az) * (__b);                                                                          \
mu0_scope_end

#	define __mu8_vec3_angle__(_Tp, _RealFp, __c, __ax, __ay, __az, __bx, __by, __bz)                  \
mu0_scope_begin                                                                                      \
	_RealFp __mu8_vec3_angle__v__;                                                                    \
	_RealFp __mu8_vec3_angle__w__;                                                                    \
	_Tp     __mu8_vec3_angle__u__;                                                                    \
	__mu8_vec3_mag__(_Tp, _RealFp, __mu8_vec3_angle__v__, __ax, __ay, __az);                          \
	__mu8_vec3_mag__(_Tp, _RealFp, __mu8_vec3_angle__w__, __bx, __by, __bz);                          \
	__mu8_vec3_angle__v__ = __mu8_vec3_angle__v__ * __mu8_vec3_angle__w__;                            \
	__mu8_vec3_dot__(_Tp, __mu8_vec3_angle__u__, __ax, __ay, __az, __bx, __by, __bz);                 \
	__mu8_vec3_angle__w__ = __mu0_clamp__((__mu8_vec3_angle__u__ / __mu8_vec3_angle__v__)             \
		, -mu0_const_cast(_RealFp, 1)                                                                  \
		,  mu0_const_cast(_RealFp, 1)                                                                  \
	);                                                                                                \
	(__c) = mu8_alias_acos(_RealFp, __mu8_vec3_angle__w__);                                           \
mu0_scope_end

#	define __mu8_vec3_add__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)                \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) + (__bx);                                                                         \
	(__cy) = (__ay) + (__by);                                                                         \
	(__cz) = (__az) + (__bz);                                                                         \
mu0_scope_end

#	define __mu8_vec3_add1__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __b)                            \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) + (__b);                                                                          \
	(__cy) = (__ay) + (__b);                                                                          \
	(__cz) = (__az) + (__b);                                                                          \
mu0_scope_end

#	define __mu8_vec3_div__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)                \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) / (__bx);                                                                         \
	(__cy) = (__ay) / (__by);                                                                         \
	(__cz) = (__az) / (__bz);                                                                         \
mu0_scope_end

#	define __mu8_vec3_div1__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)               \
	__mu8_vec3_scale__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)

#	define __mu8_vec3_mul__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)                \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) * (__bx);                                                                         \
	(__cy) = (__ay) * (__by);                                                                         \
	(__cz) = (__az) * (__bz);                                                                         \
mu0_scope_end

#	define __mu8_vec3_mul1__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)               \
	__mu8_vec3_times__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)

#	define __mu8_vec3_sub__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __bx, __by, __bz)                \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) - (__bx);                                                                         \
	(__cy) = (__ay) - (__by);                                                                         \
	(__cz) = (__az) - (__bz);                                                                         \
mu0_scope_end

#	define __mu8_vec3_sub1__(_Tp, __cx, __cy, __cz, __ax, __ay, __az, __b)                            \
mu0_scope_begin                                                                                      \
	(__cx) = (__ax) - (__b);                                                                          \
	(__cy) = (__ay) - (__b);                                                                          \
	(__cz) = (__az) - (__b);                                                                          \
mu0_scope_end

mu0_fp128_t   mu8_v2abs_fp128       (const mu0_v2fp128_t v);
mu0_fp64_t    mu8_v2abs_fp64        (const mu0_v2fp64_t  v);
mu0_fp32_t    mu8_v2abs_fp32        (const mu0_v2fp32_t  v);
mu0_fp16_t    mu8_v2abs_fp16        (const mu0_v2fp16_t  v);

mu0_v2fp128_t mu8_v2angle_fp128     (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_v2fp64_t  mu8_v2angle_fp64      (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_v2fp32_t  mu8_v2angle_fp32      (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_v2fp16_t  mu8_v2angle_fp16      (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_v2fp128_t mu8_v2add_fp128       (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_v2fp64_t  mu8_v2add_fp64        (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_v2fp32_t  mu8_v2add_fp32        (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_v2fp16_t  mu8_v2add_fp16        (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_fp128_t   mu8_v2arg_fp128       (const mu0_v2fp128_t v);
mu0_fp64_t    mu8_v2arg_fp64        (const mu0_v2fp64_t  v);
mu0_fp32_t    mu8_v2arg_fp32        (const mu0_v2fp32_t  v);
mu0_fp16_t    mu8_v2arg_fp16        (const mu0_v2fp16_t  v);

mu0_bool_t    mu8_v2equals_fp128    (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_bool_t    mu8_v2equals_fp64     (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_bool_t    mu8_v2equals_fp32     (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_bool_t    mu8_v2equals_fp16     (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_v2fp128_t mu8_v2direction_fp128 (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_v2fp64_t  mu8_v2direction_fp64  (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_v2fp32_t  mu8_v2direction_fp32  (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_v2fp16_t  mu8_v2direction_fp16  (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_v2fp128_t mu8_v2distance_fp128  (const mu0_v2fp128_t v);
mu0_v2fp64_t  mu8_v2distance_fp64   (const mu0_v2fp64_t  v);
mu0_v2fp32_t  mu8_v2distance_fp32   (const mu0_v2fp32_t  v);
mu0_v2fp16_t  mu8_v2distance_fp16   (const mu0_v2fp16_t  v);

mu0_v2fp128_t mu8_v2div_fp128       (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_v2fp64_t  mu8_v2div_fp64        (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_v2fp32_t  mu8_v2div_fp32        (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_v2fp16_t  mu8_v2div_fp16        (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_v2fp128_t mu8_v2dot_fp128       (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_v2fp64_t  mu8_v2dot_fp64        (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_v2fp32_t  mu8_v2dot_fp32        (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_v2fp16_t  mu8_v2dot_fp16        (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_v2fp128_t mu8_v2conj_fp128      (const mu0_v2fp128_t v);
mu0_v2fp64_t  mu8_v2conj_fp64       (const mu0_v2fp64_t  v);
mu0_v2fp32_t  mu8_v2conj_fp32       (const mu0_v2fp32_t  v);
mu0_v2fp16_t  mu8_v2conj_fp16       (const mu0_v2fp16_t  v);

mu0_v2fp128_t mu8_v2lerp_fp128      (const mu0_v2fp128_t v, const mu0_v2fp128_t u, const mu0_fp128_t t);
mu0_v2fp64_t  mu8_v2lerp_fp64       (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u, const mu0_fp64_t  t);
mu0_v2fp32_t  mu8_v2lerp_fp32       (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u, const mu0_fp32_t  t);
mu0_v2fp16_t  mu8_v2lerp_fp16       (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u, const mu0_fp16_t  t);

mu0_fp128_t   mu8_v2length_fp128    (const mu0_v2fp128_t v);
mu0_fp64_t    mu8_v2length_fp64     (const mu0_v2fp64_t  v);
mu0_fp32_t    mu8_v2length_fp32     (const mu0_v2fp32_t  v);
mu0_fp16_t    mu8_v2length_fp16     (const mu0_v2fp16_t  v);

mu0_v2fp128_t mu8_v2mul_fp128       (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_v2fp64_t  mu8_v2mul_fp64        (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_v2fp32_t  mu8_v2mul_fp32        (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_v2fp16_t  mu8_v2mul_fp16        (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_v2fp128_t mu8_v2negate_fp128    (const mu0_v2fp128_t v);
mu0_v2fp64_t  mu8_v2negate_fp64     (const mu0_v2fp64_t  v);
mu0_v2fp32_t  mu8_v2negate_fp32     (const mu0_v2fp32_t  v);
mu0_v2fp16_t  mu8_v2negate_fp16     (const mu0_v2fp16_t  v);

mu0_v2fp128_t mu8_v2normalize_fp128 (const mu0_v2fp128_t v);
mu0_v2fp64_t  mu8_v2normalize_fp64  (const mu0_v2fp64_t  v);
mu0_v2fp32_t  mu8_v2normalize_fp32  (const mu0_v2fp32_t  v);
mu0_v2fp16_t  mu8_v2normalize_fp16  (const mu0_v2fp16_t  v);

mu0_v2fp128_t mu8_v2sub_fp128       (const mu0_v2fp128_t v, const mu0_v2fp128_t u);
mu0_v2fp64_t  mu8_v2sub_fp64        (const mu0_v2fp64_t  v, const mu0_v2fp64_t  u);
mu0_v2fp32_t  mu8_v2sub_fp32        (const mu0_v2fp32_t  v, const mu0_v2fp32_t  u);
mu0_v2fp16_t  mu8_v2sub_fp16        (const mu0_v2fp16_t  v, const mu0_v2fp16_t  u);

mu0_fp128_t   mu8_v3abs_fp128       (const mu0_v3fp128_t v);
mu0_fp64_t    mu8_v3abs_fp64        (const mu0_v3fp64_t  v);
mu0_fp32_t    mu8_v3abs_fp32        (const mu0_v3fp32_t  v);
mu0_fp16_t    mu8_v3abs_fp16        (const mu0_v3fp16_t  v);

mu0_v3fp128_t mu8_v3angle_fp128     (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3angle_fp64      (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3angle_fp32      (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3angle_fp16      (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_v3fp128_t mu8_v3add_fp128       (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3add_fp64        (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3add_fp32        (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3add_fp16        (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_fp128_t   mu8_v3arg_fp128       (const mu0_v3fp128_t v);
mu0_fp64_t    mu8_v3arg_fp64        (const mu0_v3fp64_t  v);
mu0_fp32_t    mu8_v3arg_fp32        (const mu0_v3fp32_t  v);
mu0_fp16_t    mu8_v3arg_fp16        (const mu0_v3fp16_t  v);

mu0_bool_t    mu8_v3equals_fp128    (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_bool_t    mu8_v3equals_fp64     (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_bool_t    mu8_v3equals_fp32     (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_bool_t    mu8_v3equals_fp16     (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_v3fp128_t mu8_v3direction_fp128 (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3direction_fp64  (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3direction_fp32  (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3direction_fp16  (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_v3fp128_t mu8_v3distance_fp128  (const mu0_v3fp128_t v);
mu0_v3fp64_t  mu8_v3distance_fp64   (const mu0_v3fp64_t  v);
mu0_v3fp32_t  mu8_v3distance_fp32   (const mu0_v3fp32_t  v);
mu0_v3fp16_t  mu8_v3distance_fp16   (const mu0_v3fp16_t  v);

mu0_v3fp128_t mu8_v3div_fp128       (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3div_fp64        (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3div_fp32        (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3div_fp16        (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_v3fp128_t mu8_v3dot_fp128       (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3dot_fp64        (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3dot_fp32        (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3dot_fp16        (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_v3fp128_t mu8_v3conj_fp128      (const mu0_v3fp128_t v);
mu0_v3fp64_t  mu8_v3conj_fp64       (const mu0_v3fp64_t  v);
mu0_v3fp32_t  mu8_v3conj_fp32       (const mu0_v3fp32_t  v);
mu0_v3fp16_t  mu8_v3conj_fp16       (const mu0_v3fp16_t  v);

mu0_v3fp128_t mu8_v3cross_fp128     (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3cross_fp64      (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3cross_fp32      (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3cross_fp16      (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_v3fp128_t mu8_v3lerp_fp128      (const mu0_v3fp128_t v, const mu0_v3fp128_t u, const mu0_fp128_t t);
mu0_v3fp64_t  mu8_v3lerp_fp64       (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u, const mu0_fp64_t  t);
mu0_v3fp32_t  mu8_v3lerp_fp32       (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u, const mu0_fp32_t  t);
mu0_v3fp16_t  mu8_v3lerp_fp16       (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u, const mu0_fp16_t  t);

mu0_fp128_t   mu8_v3length_fp128    (const mu0_v3fp128_t v);
mu0_fp64_t    mu8_v3length_fp64     (const mu0_v3fp64_t  v);
mu0_fp32_t    mu8_v3length_fp32     (const mu0_v3fp32_t  v);
mu0_fp16_t    mu8_v3length_fp16     (const mu0_v3fp16_t  v);

mu0_v3fp128_t mu8_v3mul_fp128       (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3mul_fp64        (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3mul_fp32        (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3mul_fp16        (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

mu0_v3fp128_t mu8_v3negate_fp128    (const mu0_v3fp128_t v);
mu0_v3fp64_t  mu8_v3negate_fp64     (const mu0_v3fp64_t  v);
mu0_v3fp32_t  mu8_v3negate_fp32     (const mu0_v3fp32_t  v);
mu0_v3fp16_t  mu8_v3negate_fp16     (const mu0_v3fp16_t  v);

mu0_v3fp128_t mu8_v3normalize_fp128 (const mu0_v3fp128_t v);
mu0_v3fp64_t  mu8_v3normalize_fp64  (const mu0_v3fp64_t  v);
mu0_v3fp32_t  mu8_v3normalize_fp32  (const mu0_v3fp32_t  v);
mu0_v3fp16_t  mu8_v3normalize_fp16  (const mu0_v3fp16_t  v);

mu0_v3fp128_t mu8_v3sub_fp128       (const mu0_v3fp128_t v, const mu0_v3fp128_t u);
mu0_v3fp64_t  mu8_v3sub_fp64        (const mu0_v3fp64_t  v, const mu0_v3fp64_t  u);
mu0_v3fp32_t  mu8_v3sub_fp32        (const mu0_v3fp32_t  v, const mu0_v3fp32_t  u);
mu0_v3fp16_t  mu8_v3sub_fp16        (const mu0_v3fp16_t  v, const mu0_v3fp16_t  u);

MU0_END_CDECL

#endif /* !MU8_GEOMETRY_H */

/* EOF */