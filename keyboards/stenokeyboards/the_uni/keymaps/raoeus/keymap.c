/*
   Copyright 2021 Peter C. Park <peter@stenokeyboards.com>
   Modified by Zach Rice 2024

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

#include QMK_KEYBOARD_H

void matrix_init_user(void) {
    steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
}

enum keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    STENO,
    EXT_STN,
};

enum uni_layers { _STENO, _QWERTY, _RAISE, _LOWER, _BOTH };

// QWERTY COMBOS
const uint16_t PROGMEM combo_a[]           = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM combo_s[]           = {KC_W, KC_X, COMBO_END};
const uint16_t PROGMEM combo_shift_click[] = {KC_W, KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_d[]           = {KC_E, KC_C, COMBO_END};
const uint16_t PROGMEM combo_f[]           = {KC_R, KC_V, COMBO_END};
const uint16_t PROGMEM combo_g[]           = {KC_T, KC_B, COMBO_END};
const uint16_t PROGMEM combo_h[]           = {KC_Y, KC_N, COMBO_END};
const uint16_t PROGMEM combo_j[]           = {KC_U, KC_M, COMBO_END};
const uint16_t PROGMEM combo_k[]           = {KC_I, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_l[]           = {KC_O, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_scln[]        = {KC_P, KC_SLSH, COMBO_END};
const uint16_t PROGMEM combo_quote[]       = {KC_BSPC, KC_DEL, COMBO_END};
// LOWER COMBOS
const uint16_t PROGMEM combo_caps[]   = {KC_1, KC_GRV, COMBO_END};
const uint16_t PROGMEM combo_ent1[]   = {KC_BSPC, KC_BSLS, COMBO_END};
const uint16_t PROGMEM combo_left1[]  = {KC_6, KC_PSCR, COMBO_END};
const uint16_t PROGMEM combo_down1[]  = {KC_7, KC_MINS, COMBO_END};
const uint16_t PROGMEM combo_up1[]    = {KC_8, KC_EQL, COMBO_END};
const uint16_t PROGMEM combo_right1[] = {KC_9, KC_LBRC, COMBO_END};
// RAISE COMBOS
const uint16_t PROGMEM combo_ent2[]   = {KC_F11, KC_F12, COMBO_END};
const uint16_t PROGMEM combo_left2[]  = {KC_F6, KC_MPRV, COMBO_END};
const uint16_t PROGMEM combo_down2[]  = {KC_F7, KC_VOLD, COMBO_END};
const uint16_t PROGMEM combo_up2[]    = {KC_F8, KC_VOLU, COMBO_END};
const uint16_t PROGMEM combo_right2[] = {KC_F9, KC_MNXT, COMBO_END};

combo_t key_combos[] = {
    // QWERTY COMBOS
    COMBO(combo_a, KC_A), COMBO(combo_s, KC_S), COMBO(combo_shift_click, LSFT(KC_MS_BTN1)), COMBO(combo_d, KC_D), COMBO(combo_f, KC_F), COMBO(combo_g, KC_G), COMBO(combo_h, KC_H), COMBO(combo_j, KC_J), COMBO(combo_k, KC_K), COMBO(combo_l, KC_L), COMBO(combo_scln, KC_SCLN), COMBO(combo_quote, KC_QUOT),

    // LOWER COMBOS
    COMBO(combo_caps, KC_CAPS), COMBO(combo_ent1, KC_ENT), COMBO(combo_left1, KC_LEFT), COMBO(combo_down1, KC_DOWN), COMBO(combo_up1, KC_UP), COMBO(combo_right1, KC_RIGHT),

    // RAISE COMBOS
    COMBO(combo_ent2, KC_ENT), COMBO(combo_left2, KC_LEFT), COMBO(combo_down2, KC_DOWN), COMBO(combo_up2, KC_UP), COMBO(combo_right2, KC_RIGHT)};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, LOWER, RAISE),

    [_STENO] = LAYOUT(STN_S1, STN_TL, STN_PL, STN_HL, STN_ST1, STN_ST3, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR, STN_S2, STN_KL, STN_WL, STN_RL, STN_ST2, STN_ST4, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR, EXT_STN, STN_A, STN_O, STN_E, STN_U, STN_N2),

    [_LOWER] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_GRV, XXXXXXX, XXXXXXX, KC_TAB, KC_ESC, KC_PSCR, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, _______, _______),

    [_RAISE] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB, KC_ESC, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY, KC_F12, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, _______, _______),

    [_BOTH] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, STENO, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                layer_on(_QWERTY);
                layer_move(_QWERTY);
            }
            return false;
        case STENO:
            if (record->event.pressed) {
                layer_on(_STENO);
                layer_move(_STENO);
            }
            return false;
        case EXT_STN:
            if (record->event.pressed) {
                layer_off(_STENO);
                layer_on(_QWERTY);
                layer_move(_QWERTY);
            }
            return false;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            }
            return false;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            }
            return false;
        default:
            return true;
    }
}
