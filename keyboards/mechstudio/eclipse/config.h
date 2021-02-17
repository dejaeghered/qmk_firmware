/* Copyright 2020 David Dejaeghere
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4D53
#define PRODUCT_ID      0x0005
#define DEVICE_VER      0x0005
#define MANUFACTURER    Mech Studio
#define PRODUCT         Eclipse

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 17

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {B3,B2,B1,B0,E6}
#define MATRIX_COL_PINS {F0,F1,F4,F5,F6,F7,D5,D3,D2,D1,D0,C6,C7,B6,B5,B4,D7}
#define UNUSED_PINS {}

/* indicator leds */
#define LED_NUM_LOCK_PIN D6
#define LED_CAPS_LOCK_PIN D4
#define LED_SCROLL_LOCK_PIN E2
#define LED_PIN_ON_STATE 0

/* backlight */
#define BACKLIGHT_PIN B7

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

#define QMK_ESC_OUTPUT F0 // usually COL
#define QMK_ESC_INPUT B3 // usually ROW
