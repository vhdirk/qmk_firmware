#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
*
* ,---------------------------.    ,-----------------------------------------------.
* |Esc| F1| F2| F3| F4| F5| F6|    | F7| F8| F9|F10|F11|F12|PrSc|ScLk|Pau|Calc|    |
* |---------------------------|    |-----------------------------------------------|
* |  `|  1|  2|  3|  4|  5|  6|    |    7|  8|  9|  0|  -|  =|      Bcksp| Del|Home|
* |---------------------------|    |-------------------------------------|    |----|
* |  Tab|  Q|  W|  E|  R|    T|    |     Y|  U|  I|  O|  P|  [|  ]|     \|    | End|
* |---------------------------|    |-----------------------------------------------|
* |  Caps|  A|  S|  D|  F|   G|    |      H|  J|  K|  L|  ;|  '|    Enter| Ins|PgUp|
* |---------------------------|    |-----------------------------------------------|
* |  Shift|  Z|  X|  C|  V|  B|    |       N|  M|  ,|  .|  /|       Shift|  Up|PgDn|
* |---------------------------`----'-----------------------------------------------|
* |   Ctrl| Gui| Alt|            |            |  Alt|  Fn|      Ctrl|Left|Down|Righ|
* `--------------------------------------------------------------------------------'
*
*/
  /* 0: qwerty */
  [0] = LAYOUT( \
        KC_PAUS, KC_DEL, KC_0, KC_9, KC_8, KC_BSPC, KC_7, KC_TAB, KC_Q, KC_2, KC_1, \
        KC_PGUP, KC_F12, KC_LBRC, KC_MINS, KC_RBRC, KC_INS, KC_Y, KC_F5, KC_F3, KC_W, KC_4, KC_F6, \
        KC_HOME, KC_CALC, KC_P, KC_O, KC_I, KC_U, KC_R, KC_E, KC_CAPS, KC_3, KC_T, \
        KC_SLCK, KC_ENT, KC_SCLN, KC_L, KC_K, KC_BSLS, KC_J, KC_F, KC_D, KC_NUBS, KC_A, KC_LGUI, \
        KC_RALT, KC_FN1, KC_SLSH, KC_QUOT, KC_LEFT, KC_H, KC_G, KC_F4, KC_S, KC_ESC, KC_LALT, \
        KC_END, KC_RSFT, KC_PGDN, KC_NUHS, KC_DOT, KC_COMM, KC_M, KC_V, KC_C, KC_X, KC_Z, KC_LSFT, \
        KC_RCTL, KC_RGHT, KC_UP, KC_DOWN, KC_SPC, KC_N, KC_B, KC_SPC, KC_LCTL, \
        KC_PSCR, KC_F11, KC_EQL, KC_F9, KC_F8, KC_F10, KC_F7, KC_5, KC_F2, KC_F1, KC_GRV, KC_6
  ),
  [1] = LAYOUT( \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_END, KC_PGUP, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_MPLY, KC_TRNS, KC_TRNS
    ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
