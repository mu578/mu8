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

define walk-dir-recursive
	$(wildcard $(1)) $(foreach e, $(wildcard $(1)/*), $(call walk-dir-recursive, $(e)))
endef

define walk-dir
	$(wildcard $(1)) $(foreach e, $(wildcard $(1)/*), $(e))
endef

ifeq ($(strip $(MU8_ROOT_PATH)),)
$(error MU8_ROOT_PATH is not set)
endif

MU8_MODULE_NAME  ?= mu8
MU8_MODULE_PATH  ?= $(MU8_ROOT_PATH)
MU8_SOURCE_FILES ?= $(call walk-dir-recursive, $(MU8_MODULE_PATH)/source)
MU8_FILTER_FILES ?= $(filter %.c, $(MU8_SOURCE_FILES))

LOCAL_SRC_FILES += $(MU8_FILTER_FILES)
LOCAL_CFLAGS    += -I$(MU8_MODULE_PATH)

# EOF