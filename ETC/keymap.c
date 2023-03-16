#include QMK_KEYBOARD_H

// Layer names
#define _MAIN 0
#define _META 1
#define _RAISE 2

enum preonic_keycodes {
  COLEMAK = SAFE_RANGE,
  GAME,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* MAIN
 * ,-----------------------------------------------------------------------------------.
 * |   Record  |   cue  |   recall from  |   Macro  |   Time  |  Home  |   live   |   +  |   thru  |   -  |   blind  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   label  |   intens palette  |   focus palette  |   beam palette  |      |      |   7  |   8  |   9  |   out  |     |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   update  |   preset  |   sub  |   effect  |   group  |     |      |   4  |   5  |   6  |   full  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   delete  |   about  |   format  |   block  |   q only track  |      |      |   1  |   2  |   3  |   at  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | go to cue  | sneak  |  .....  | Shift| Stop/Back | GO | GO | 0 | clear |   .   |  ENTER  |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MAIN] = LAYOUT_preonic_grid( \
  KC_R  ,KC_Q   ,LSFT(KC_L)   ,LSFT(KC_F8)   ,KC_I   ,KC_HOME   ,KC_F2  ,KC_PEQL   ,KC_T   ,KC_MINUS   ,KC_F3   ,_______  , \
  KC_B  ,LALT(KC_I)   ,LALT(KC_F)   ,LALT(KC_C)  ,LALT(KC_B)   ,_______   ,_______   ,KC_7   ,KC_8   ,KC_9   ,KC_O  ,_______  , \
  KC_U  ,LALT(KC_S)   ,KC_S   ,LALT(KC_E)   ,KC_G   ,_______   ,_______   ,KC_4   ,KC_5   ,KC_7   ,KC_F  ,_______  , \
  KC_DELETE  ,LCTL(KC_SLASH)   ,KC_F4   ,LSFT(KC_B)   ,KC_X   ,_______   ,_______   ,KC_1   ,KC_2   ,KC_3   ,KC_A  ,_______  , \
  LSFT(KC_G)  ,KC_N   ,MO(_META)   ,KC_Z   ,LCTL(KC_F3)   ,KC_SPC   ,KC_SPC   ,KC_BACKSPACE   ,KC_0   ,KC_DOT   ,KC_ENTER  ,_______  , \
),

/* META
 * ,-----------------------------------------------------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |NUM LK|   ÷  |   ×  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   1  |   2  |   3  |   +  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+
 * | CTRL |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   4  |   5  |   6  |   =  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+
 * | SHIFT|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   7  |   8  |   9  | ENTER|
 * |------+------+------+------+------+------+------+------+------+------+------+------+
 * |      | ALT  | GUI  | SPACE| CTRL | BKSP | SPACE| RAISE|   ,  |   0  |   .  | TAB  |
 * `-----------------------------------------------------------------------------------'
 */
[_META] = LAYOUT_preonic_grid( \
  LSFT(KC_F1)  ,KC_P   ,LSFT(KC_P)   ,KC_L   ,KC_D   ,KC_H   ,LSFT(KC_F7)   ,_______   ,_______   ,_______   ,LSFT(KC_C)  ,_______  , \
  LSFT(KC_F2)  ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______  ,C(KC_L)  , \
  LSFT(KC_F3)  ,KC_M   ,KC_K   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______  ,C(KC_M)  , \
  LSFT(KC_F4)  ,LSFT(KC_D)   ,KC_F8   ,LSFT(KC_A)   ,KC_J   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______  ,C(KC_V)  , \
  LSFT(KC_F5)  ,LSFT(KC_F6)   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______   ,_______  ,_______  , \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * | SLEEP|  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |PRTSCR|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | SYM  |  F11 |  F12 |      |AU TOG| VOL+ |BL INC|COLMAK| GAME | MUSIC| MENU |SCRLCK|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CAPS | PREV | STOP | PLAY | NEXT | VOL- |BL DEC| LEFT | DOWN |  UP  | RIGHT| PAUSE|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | BACK | STOP | RFRSH| FRWRD| MUTE |BL TOG| HOME | PGDN | PGUP | END  |INSERT|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | QK_BOOT|      |      |      |      | DEL  |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid( \
  KC_SLEP,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_PSCR, \
  XXXXXXX,KC_F11 ,KC_F12 ,XXXXXXX,AU_TOGG,KC_VOLU,BL_UP  ,COLEMAK,GAME   ,MU_TOGG,KC_MENU,KC_SCRL, \
  KC_CAPS,KC_MPRV,KC_MSTP,KC_MPLY,KC_MNXT,KC_VOLD,BL_DOWN,KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,KC_PAUS, \
  XXXXXXX,KC_WBAK,KC_WSTP,KC_WREF,KC_WFWD,KC_MUTE,BL_TOGG,KC_HOME,KC_PGDN,KC_PGUP,KC_END ,KC_INS,  \
  QK_BOOT,_______,_______,_______,_______,KC_DEL ,_______,_______,_______,_______,_______,_______  \
)

};



#ifdef AUDIO_ENABLE

float tone_startup[][2] = {
  {NOTE_B5, 20},
  {NOTE_B6, 8},
  {NOTE_DS6, 20},
  {NOTE_B6, 8}
};
float tone_colemak[][2] = SONG(COLEMAK_SOUND);
float tone_game[][2]    = {
  {NOTE_E6, 10}   ,{NOTE_E6, 10}  ,{NOTE_REST, 10} ,{NOTE_E6, 10}   ,
  {NOTE_REST, 10} ,{NOTE_C6, 10}  ,{NOTE_E6, 10}   ,{NOTE_REST, 10} ,
  {NOTE_G6, 10}   ,{NOTE_REST, 30},
  {NOTE_G5, 10}   ,{NOTE_REST, 30}
};
float tone_goodbye[][2] = SONG(GOODBYE_SOUND);
float music_scale[][2]  = SONG(MUSIC_SCALE_SOUND);

void startup_user() {
  _delay_ms(20); // gets rid of tick
  PLAY_SONG(tone_startup);
}
void shutdown_user() {
  PLAY_SONG(tone_goodbye);
  _delay_ms(150);
  stop_all_notes();
}

void music_on_user(void) {
  music_scale_user();
}
void music_scale_user(void) {
  PLAY_SONG(music_scale);
}

#endif



void matrix_init_user(void) {
  #ifdef AUDIO_ENABLE
  startup_user();
  #endif
}

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COLEMAK:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
        PLAY_SONG(tone_colemak);
        #endif
        persistent_default_layer_set(1UL<<_COLEMAK);
      }
      break;
    case GAME:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
        PLAY_SONG(tone_game);
        #endif
        persistent_default_layer_set(1UL<<_GAME);
      }
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      break;
    default:
      return true;
      break;
  }

  return false;
};
