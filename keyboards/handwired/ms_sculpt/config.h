/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    QMK
#define DESCRIPTION     QMK keyboard firmware for Microsoft Sculpt
#define PRODUCT         Microsoft Sculpt mod

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 17

/* 			0  1  2  3  4 5  6   7 */
#define MATRIX_ROW_PINS { C7, C6, D3, D2, D1, D0, B7, B3}

/*                        A   B   C   D   E   F   G   H   I   J  K  L   M   N   O   P   Q  R  */
#define MATRIX_COL_PINS { B2, B1, B0, E6, D5, D4, D6, D7, B4, B5, B6, F7, F6, F5, F4, F1, F0}
#define UNUSED_PINS { }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
#define MATRIX_HAS_GHOST

#define LOCKING_SUPPORT_ENABLE
// mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap

#define LOCKING_RESYNC_ENABLE
// tries to keep switch state consistent with keyboard LED state

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)


/*
 * Magic Key Options
 *
 * Magic keys are hotkey commands that allow control over firmware functions of
 * the keyboard. They are best used in combination with the HID Listen program,
 * found here: https://www.pjrc.com/teensy/hid_listen.html
 *
 * The options below allow the magic key functionality to be changed. This is
 * useful if your keyboard/keypad is missing keys and you want magic key support.
 *
 */

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
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
