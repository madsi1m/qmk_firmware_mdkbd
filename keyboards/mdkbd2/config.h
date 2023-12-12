// Copyright 2022 Michael D'Silva (@madsi1m)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* TouchPad: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_ps2_mouse.md
 */

#define LED_CAPS_LOCK_PIN F0
