#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    LGUI(LSFT(KC_SPACE)),LGUI(LSFT(KC_2)),LGUI(LSFT(KC_3)),LGUI(KC_S),     LGUI(KC_R),     LGUI(KC_SPACE),                                 KC_HOME,        LGUI(KC_C),     LGUI(KC_V),     KC_END,         KC_DELETE,      KC_MEDIA_PLAY_PAUSE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           CW_TOGG,        
    ALL_T(KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),ALL_T(KC_QUOTE),
    MEH_T(KC_GRAVE),LT(4,KC_Z),     LT(3,KC_X),     LT(2,KC_C),     LT(1,KC_V),     KC_B,                                           KC_N,           LT(1,KC_M),     KC_COMMA,       KC_DOT,         KC_SLASH,       MEH_T(KC_MINUS),
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_ENTER,       KC_BSPC
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LABK,        KC_RABK,        KC_BSLS,        KC_GRAVE,                                       KC_AMPR,        KC_UNDS,        KC_LBRC,        KC_RBRC,        KC_PIPE,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_HASH,                                        KC_AT,          KC_COLN,        KC_LPRN,        KC_RPRN,        KC_PERC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_SLASH,       KC_ASTR,        KC_TRANSPARENT, KC_PIPE,                                        KC_TILD,        KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_DLR,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TAB,         KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_SLASH,       
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_COLN,        KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_ASTR,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           QK_LLCK
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     KC_HOME,        KC_END,         KC_MEDIA_STOP,  
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(KC_Y),     LGUI(KC_V),     LGUI(KC_C),     LGUI(KC_X),     LGUI(KC_Z),     KC_MEDIA_PREV_TRACK,
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          KC_AUDIO_MUTE,  LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_MEDIA_NEXT_TRACK,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_SLD,        RGB_HUD,        RGB_HUI,        RGB_SAD,        RGB_SAI,        RGB_SPD,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          TOGGLE_LAYER_COLOR,KC_F7,          KC_F8,          KC_F9,          KC_F10,         RGB_SPI,        
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          RGB_TOG,        KC_F4,          KC_F5,          KC_F6,          KC_F11,         RGB_VAD,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          RGB_MODE_FORWARD,KC_F1,          KC_F2,          KC_F3,          KC_F12,         RGB_VAI,        
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
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



