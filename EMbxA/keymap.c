#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_GRAVE,       LGUI(LSFT(KC_2)),LGUI(LSFT(KC_3)),KC_DOWN,        KC_UP,          KC_APPLICATION,                                 KC_HOME,        KC_LEFT,        KC_RIGHT,       KC_END,         KC_DELETE,      KC_MEDIA_PLAY_PAUSE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           LT(4,KC_R),     KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_BSPC,        LT(2,KC_A),     MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),ALL_T(KC_G),                                    ALL_T(KC_H),    MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),LT(2,KC_SCLN),  KC_QUOTE,       
    TD(DANCE_0),    MT(MOD_LCTL, KC_Z),KC_X,           KC_C,           LT(1,KC_V),     MEH_T(KC_B),                                    MEH_T(KC_N),    KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_ENTER,       
                                                    KC_ESCAPE,      KC_SPACE,                                       KC_NO,          CW_TOGG
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TAB,         KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COLN,        KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_ASTR,        
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           QK_LLCK
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_QUOTE,       KC_LABK,        KC_RABK,        KC_DQUO,        KC_DOT,                                         KC_AMPR,        KC_UNDS,        KC_LBRC,        KC_RBRC,        KC_PERC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_HASH,                                        KC_PIPE,        KC_COLN,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_SLASH,       KC_ASTR,        KC_BSLS,        KC_PIPE,                                        KC_TILD,        KC_DLR,         KC_LCBR,        KC_RCBR,        KC_AT,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_SLD,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,RGB_TOG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_HYPR,                                        KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_MEH,                                         KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     KC_HOME,        KC_END,         KC_MEDIA_STOP,  
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,                                          LGUI(KC_Y),     LGUI(KC_V),     LGUI(KC_C),     LGUI(KC_X),     LGUI(KC_Z),     KC_MEDIA_PREV_TRACK,
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_AUDIO_MUTE,  LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_MEDIA_NEXT_TRACK,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_ESCAPE:
            return TAPPING_TERM + 50;
        case KC_M:
            return TAPPING_TERM + 50;
        case CW_TOGG:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,248,206}, {0,248,206}, {0,248,206}, {0,248,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,248,206}, {0,248,206}, {0,248,206}, {0,248,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,248,206}, {0,248,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,248,206}, {0,0,0}, {0,248,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {63,255,255}, {63,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {63,255,255}, {63,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {63,255,255}, {0,0,0}, {41,255,255}, {139,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {230,255,255}, {230,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {230,255,255}, {63,85,255}, {63,85,255}, {230,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {63,85,255}, {63,85,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,202}, {41,255,255}, {30,255,255}, {30,255,255}, {41,255,255}, {0,0,0}, {156,59,226}, {41,255,255}, {30,255,255}, {30,255,255}, {41,255,255}, {0,0,0}, {156,59,226}, {41,255,255}, {30,255,255}, {30,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,248,206}, {0,248,206}, {0,248,206}, {0,248,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {82,255,195}, {214,218,204}, {126,219,244}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,248,206}, {0,248,206}, {0,248,206}, {0,248,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,219,244}, {126,219,244}, {31,235,251}, {31,235,251}, {192,204,255}, {31,235,251}, {31,235,251}, {31,235,251}, {31,235,251}, {31,235,251}, {192,204,255}, {82,255,255}, {82,255,255}, {82,255,255}, {82,255,255}, {31,235,251}, {192,204,255}, {192,204,255}, {126,219,244}, {124,218,204}, {169,255,255}, {169,255,255}, {192,204,255}, {192,204,255}, {192,204,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
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


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COLN);
        tap_code16(KC_COLN);
        tap_code16(KC_COLN);
    }
    if(state->count > 3) {
        tap_code16(KC_COLN);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_COLN); break;
        case SINGLE_HOLD: layer_on(3); break;
        case DOUBLE_TAP: register_code16(KC_COLN); register_code16(KC_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COLN); register_code16(KC_COLN);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_COLN); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(3)) {
            layer_off(3);
          }
        break;
        case DOUBLE_TAP: unregister_code16(KC_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COLN); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
