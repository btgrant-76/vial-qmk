/* Copyright 2022 Kyle McCreery 
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
/* Making it so you need to hold the modifier and other key for the time together, helps not accidentally hit activate the hold functions of bottom row*/
#define IGNORE_MOD_TAP_INTERRUPT

/* Setting tap term, helps not accidentally hit activate the hold functions of bottom row*/
#define TAPPING_TERM 250

/* Vial-specific settings */
#define VIAL_UNLOCK_COMBO_ROWS { 1, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }
#define VIAL_KEYBOARD_UID {0xF4, 0x09, 0x9B, 0xBC, 0xE4, 0x1F, 0x6B, 0x4C}
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
