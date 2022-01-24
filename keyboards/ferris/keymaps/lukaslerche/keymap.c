#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define BASE 0   // default layer
#define SYMBOL 1 // symbol layer
#define ARROW 2  // arrows, diacritics and number row
#define NUMBER 3 // numpad and f keys
#define GAME 4   // gaming

// layout prioritices macOS, with Windows and gaming on Windows as secondary options
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	[BASE] = LAYOUT(
	
	DE_Q, DE_W, DE_E, DE_R, DE_T,         		                DE_Z, DE_U, DE_I,    DE_O,   DE_P,
	DE_A, DE_S, DE_D, DE_F, DE_G,         		                DE_H, DE_J, DE_K,    DE_L,   KC_RSFT,
	DE_Y, DE_X, DE_C, DE_V, DE_B,         		                DE_N, DE_M, DE_COMM, DE_DOT, KC_RCTRL,
	
	                  LT(ARROW, KC_TAB), LCMD_T(KC_BACKSPACE),  LT(SYMBOL, KC_SPACE), ALGR_T(KC_ENTER)
	),
	
	[ARROW] = LAYOUT(
	
	KC_ESCAPE,  KC_PAGE_UP, KC_UP,   KC_PAGE_DOWN, KC_MPLY,      KC_VOLU, XXXXXXX, DE_SS,   DE_UDIA, DE_ACUT,
	KC_LCTRL,   KC_LEFT,    KC_DOWN, KC_RIGHT,     KC_MUTE,      KC_VOLD, XXXXXXX, DE_ODIA, DE_ADIA, _______,
	KC_1,       KC_2,       KC_3,    KC_4,         KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
	
	                                 _______,      _______,      MO(NUMBER), _______
	),
	
	
	[SYMBOL] = LAYOUT(
	
	DE_AT,   DE_EXLM, DE_DQUO, DE_QUOT, DE_PERC,         DE_AMPR, DE_PLUS, DE_EQL,  DE_QUES, DE_ASTR,
	DE_LABK, DE_LBRC, DE_LCBR, DE_LPRN, DE_BSLS,         DE_SLSH, DE_RPRN, DE_RCBR, DE_RBRC, DE_RABK,
	DE_PIPE, DE_DEG,  DE_CIRC, DE_SECT, DE_DLR,          DE_TILD, DE_MINS, DE_UNDS, DE_HASH, _______,
	
	                           MO(NUMBER), _______,      _______, _______
	),
	
	[NUMBER] = LAYOUT(
	// maybe add layer lock to make numpad onehanded an option
	RESET,   KC_F1, KC_F2,  KC_F3,  KC_F4,       XXXXXXX, KC_7, KC_8, KC_9, KC_0,
	XXXXXXX, KC_F5, KC_F6,  KC_F7,  KC_F8,       XXXXXXX, KC_4, KC_5, KC_6, XXXXXXX,
	CG_TOGG, KC_F9, KC_F10, KC_F11, KC_F12,      XXXXXXX, KC_1, KC_2, KC_3, DF(GAME),
	
	                        _______, _______,    _______, _______
	),
	
	[GAME] = LAYOUT(
	// some letters on the right that are common in games
	// KC_LWIN and KC_RCTL are switched here, because in practice CV_TOGG would have been activated when in Windows
	KC_TAB,  DE_Q, DE_W, DE_E, DE_R,            KC_ESCAPE, KC_I,    KC_UP,   KC_P,     DF(BASE),
	KC_LSFT, DE_A, DE_S, DE_D, DE_F,            KC_J,      KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENTER,
	KC_LWIN, DE_Y, DE_X, DE_C, DE_V,            KC_M,      KC_1,    KC_2,    KC_3,     KC_4,
	
	                     KC_LALT, KC_SPACE,     KC_SPACE,  KC_RCTL
	)
	
	/*
	[EMPTY] = LAYOUT(
	
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	
	                     XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX
	)
	*/
};

