/*
Copyright 2021 gkeyboard

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

#pragma once

#define VIAL_KEYBOARD_UID {0x0B, 0x98, 0x18, 0x84, 0xA8, 0x29, 0x6A, 0x03}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
// #define VIAL_TAP_DANCE_ENTRIES 12

// Connects each switch in the dip switch to the GPIO pin of the MCU
 
#define DIP_SWITCH_PINS { E6 }

// For split keyboards, you can separately define the right side pins
// #define DIP_SWITCH_PINS_RIGHT { ... }
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

#define OLED_BRIGHTNESS 128
#define OLED_DISPLAY_128x32
