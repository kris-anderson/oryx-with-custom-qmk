#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

#include "features/achordion.h"
void matrix_scan_user(void) {
  achordion_task();
}

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    LGUI(KC_R),     LGUI(LSFT(KC_2)),LGUI(LSFT(KC_3)),LGUI(KC_C),     LGUI(KC_V),     LALT(LGUI(LSFT(KC_V))),                                LGUI(KC_X),     LGUI(KC_Z),     LGUI(KC_Y),     KC_PGDN,        KC_PAGE_UP,     KC_MEDIA_PLAY_PAUSE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           CW_TOGG,        
    ALL_T(KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),ALL_T(KC_QUOTE),
    MEH_T(KC_GRAVE),KC_Z,           KC_X,           LT(3,KC_C),     LT(2,KC_V),     KC_B,                                           KC_N,           LT(1,KC_M),     LT(4,KC_COMMA), KC_DOT,         KC_SLASH,       MEH_T(KC_MINUS),
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_ENTER,       KC_BSPC
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LABK,        KC_BSLS,        KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_PERC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_RABK,        KC_COLN,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_EQUAL,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_QUES,        KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_MINUS,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_ASTR,        KC_CIRC,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_HOME,        LGUI(KC_MINUS), LGUI(KC_EQUAL), LGUI(KC_0),     KC_END,         KC_MEDIA_PREV_TRACK,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(KC_F),     LGUI(LSFT(KC_F)),LGUI(LSFT(KC_E)),LGUI(LSFT(KC_G)),LGUI(KC_N),     KC_AUDIO_VOL_UP,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(KC_S),     KC_AUDIO_VOL_DOWN,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(LCTL(KC_SPACE)),LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_AUDIO_MUTE,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TAB,         KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_SLASH,
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_COLN,        KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_ASTR,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           QK_LLCK
  ),
  [4] = LAYOUT_voyager(
    RGB_SPD,        RGB_SPI,        TOGGLE_LAYER_COLOR,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_SAD,        RGB_SAI,        KC_F7,          KC_F8,          KC_F9,          KC_F10,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_HUD,        RGB_HUI,        KC_F4,          KC_F5,          KC_F6,          KC_F11,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_MODE_FORWARD,RGB_TOG,        KC_F1,          KC_F2,          KC_F3,          KC_F12,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_SPACE:
            return TAPPING_TERM + 50;
        case LT(1,KC_M):
            return TAPPING_TERM + 50;
        case KC_BSPC:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) { return false; }
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



