/* Copyright 2015-2021 Jack Humbert
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

#include QMK_KEYBOARD_H
#include "keymap_steno.h"

void matrix_init_user(void) {
    steno_set_mode(STENO_MODE_GEMINI);
}

enum preonic_layers {
  _PLOVER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Plover
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   S  |   T  |   P  |   H  |   *  |      |   *  |   F  |   P  |   L  |   T  |   D  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   S  |   K  |   W  |   R  |   *  |      |   *  |   R  |   B  |   G  |   S  |   Z  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   #  |   A  |   O  |      |   E  |   U  |   #  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

  [_PLOVER] = LAYOUT_preonic_grid(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, XXXXXXX, STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
    STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, XXXXXXX, STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, STN_N1,  STN_A,   STN_O,   XXXXXXX, STN_E,   STN_U,   STN_N2,  XXXXXXX, XXXXXXX, XXXXXXX
  ),
};