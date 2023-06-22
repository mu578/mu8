#
# # -*- coding: utf-8, tab-width: 3 -*-

#                                                           ___                                            #
#                                                          /   \                                           #
#                                            _   _  _   _  \ O /                                           #
#                                           | | | || | | | / _ \                                           #
#                                           | |_| || |_| |( (_) )                                          #
#                                           | ._,_| \___/  \___/                                           #
#                                           | |                                                            #
#                                           |_|                                                            #

# mu8_source.mk
#
# Copyright (C) 2023 mu578. All rights reserved.
#

ifeq ($(strip $(MU8_ROOT_PATH)),)
$(error MU8_ROOT_PATH is not set)
endif

LOCAL_SRC_FILES += $(call filter-dir-recursive, %.c, $(MU8_ROOT_PATH)/source)
LOCAL_CFLAGS    += -I$(MU8_ROOT_PATH)

# EOF