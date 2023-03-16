#include QMK_KEYBOARD_H

#define _MAIN 0
#define _META 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT_preonic_grid(
    KC_R,    KC_Q,     KC_E, LSFT(KC_F8), KC_I,    KC_HOME,  KC_F1,   KC_PEQL,   KC_T,     KC_MINUS, KC_F2,   KC_N, \
    KC_B,    LALT(KC_I), LALT(KC_F), LALT(KC_C), LALT(KC_B), _______, _______, KC_7,     KC_8,     KC_9,     KC_O,    _______, \
    KC_U,    LALT(KC_S), KC_S,       LALT(KC_E), KC_G,    _______, _______, KC_4,     KC_5,     KC_6,     KC_F,    _______, \
    KC_DELETE, LCTL(KC_SLASH), KC_F4, LSFT(KC_B), KC_X, _______, _______, KC_1,     KC_2,     KC_3,     KC_A,    _______, \
    C(KC_G),    _______, MO(_META), KC_Z,         C(KC_F3), KC_SPC, KC_SPC, KC_BSPC, KC_0,     KC_DOT,   KC_ENTER, _______ \
  ),

  [_META] = LAYOUT_preonic_grid(
    LSFT(KC_F1), KC_P,    KC_C, KC_L,    KC_D,    KC_H,    LSFT(KC_F7), _______, _______, _______, C(KC_X), LSFT(KC_F6), \
    LSFT(KC_F2), _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, C(KC_L), \
    LSFT(KC_F3), KC_M,    KC_K,      _______, _______, _______, _______, _______, _______, _______, _______, C(KC_M), \
    LSFT(KC_F4), LSFT(KC_D), KC_F8,   LSFT(KC_A), KC_J,   _______, _______, _______, _______, _______, _______, C(KC_V), \
    LSFT(KC_F5), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
  ),
};

void matrix_init_user(void) {
  // Do something when the matrix is initialized
}

void matrix_scan_user(void) {
  // Do something every cycle of matrix scanning
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Custom logic for processing key events
  return true;
}

void led_set_user(uint8_t usb_led) {
  // Do something when the keyboard LED status changes
}
