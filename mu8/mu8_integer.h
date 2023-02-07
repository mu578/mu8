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

// mu8_integer.h
//
// Copyright (C) 2023 mu578. All rights reserved.
//

#include <mu8/mu8_definition.h>

#ifndef MU8_INTEGER_H
#define MU8_INTEGER_H 1

#	undef  MU8_USE_INT128
#	undef  MU8_HAVE_INT128

#	define MU8_USE_INT128  1
#	define MU8_HAVE_INT128 0

#include <stddef.h>
#include <stdint.h>
#include <inttypes.h>

MU8_BEGIN_CDECL

#	if   MU8_USE_INT128
#	if   MU8_HAVE_GNUC
__extension__
typedef __int128                 mu8_sint128_t;
#	endif
#	elif MU8_HAVE_CC_CLANG
#		if !__is_identifier(__int128_t)
#			undef  MU8_HAVE_INT128
#			define MU8_HAVE_INT128 1
			__extension__
			typedef __int128_t      mu8_sint128_t;
#		else
			typedef int64_t         mu8_sint128_t;
#		endif
#		else
			typedef int64_t         mu8_sint128_t;
#	endif
#	else
	typedef int64_t               mu8_sint128_t;
#	endif

typedef int64_t                  mu8_sint64_t;
typedef int32_t                  mu8_sint32_t;

#	define mu8_sint128(__x)       mu8_cast(mu8_sint128_t, __x)
#	define mu8_const_sint128(__x) mu8_const_cast(mu8_sint128_t, __x)

#	define mu8_sint64(__x)        mu8_cast(mu8_sint64_t, __x)
#	define mu8_const_sint64(__x)  mu8_const_cast(mu8_sint64_t, __x)

#	define mu8_sint32(__x)        mu8_cast(mu8_sint32_t, __x)
#	define mu8_const_sint32(__x)  mu8_const_cast(mu8_sint32_t, __x)

MU8_END_CDECL

#endif /* !MU8_INTEGER_H */

/* EOF */