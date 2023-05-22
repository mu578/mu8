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

# mu8.mk
#
# Copyright (C) 2023 mu578. All rights reserved.
#

LOCAL_MODULE      := mu8
LOCAL_MODULE_PATH := $(dir $(abspath ..))$(LOCAL_MODULE)
MU8_ROOT_PATH     := $(LOCAL_MODULE_PATH)
MU0_ROOT_PATH     := $(dir $(abspath ..))mu0

PLATFORM_VARIANT  := macos_macport.fat

include $(MU8_ROOT_PATH)/mk/inc/mu8_source.mk
include $(MU0_ROOT_PATH)/mk/inc/mu0_source.mk
include $(MU0_ROOT_PATH)/mk/inc/mu0_toolchain.mk
include $(MU0_ROOT_PATH)/mk/inc/mu0_ruleset.mk

all       : rule_all
static    : rule_static
shared    : rule_shared
clean     : rule_clean
distcheck : rule_all rule_static rule_show_buildir rule_clean

# EOF