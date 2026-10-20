#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum layers {
    BASE,    // default layer
    SYMBOL,  // symbol layer
    ARRNUM,  // arrows and numbers
    MEDFUNC, // media and function keys
    GAME,    // gaming
};

// Ferris finger keys occupy the inner five columns of the three middle rows.
// Ferris thumbs (left to right) use the former Left Right-arrow, Left Space,
// Right Enter, and Right Up-arrow positions. All other positions are disabled.
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ergodox_pretty(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, DE_Q, DE_W, DE_E, DE_R, DE_T, KC_NO, KC_NO, DE_Z, DE_U, DE_I, DE_O, DE_P, KC_NO,
        KC_NO, DE_A, DE_S, DE_D, DE_F, DE_G, DE_H, DE_J, DE_K, DE_L, KC_RSFT, KC_NO,
        KC_NO, DE_Y, DE_X, DE_C, DE_V, DE_B, KC_NO, KC_NO, DE_N, DE_M, DE_COMM, DE_DOT, KC_RCTL, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, LCMD_T(KC_ENTER), ALGR_T(KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,
        LT(ARRNUM, KC_BACKSPACE), KC_NO, KC_NO, KC_NO, KC_NO, LT(SYMBOL, KC_SPACE)
    ),

    [SYMBOL] = LAYOUT_ergodox_pretty(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, DE_AT, DE_EXLM, DE_DQUO, DE_QUOT, DE_GRV, KC_NO, KC_NO, DE_AMPR, DE_UDIA, DE_EQL, DE_ODIA, DE_ASTR, KC_NO,
        KC_NO, DE_ADIA, DE_SS, DE_LCBR, DE_RCBR, DE_BSLS, DE_SLSH, DE_LPRN, DE_RPRN, DE_QUES, KC_TRNS, KC_NO,
        KC_NO, DE_PIPE, DE_LBRC, DE_LABK, DE_RABK, DE_RBRC, KC_NO, KC_NO, DE_PLUS, DE_MINS, DE_UNDS, DE_HASH, KC_TRNS, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,
        MO(MEDFUNC), KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS
    ),

    [ARRNUM] = LAYOUT_ergodox_pretty(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_ESCAPE, KC_PAGE_UP, KC_UP, KC_PAGE_DOWN, KC_HOME, KC_NO, KC_NO, DE_PERC, KC_7, KC_8, KC_9, KC_0, KC_NO,
        KC_NO, KC_LCTL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, DE_DLR, KC_4, KC_5, KC_6, KC_TRNS, KC_NO,
        KC_NO, LCMD(DE_Z), LCMD(KC_LEFT), LCMD(KC_RIGHT), KC_BACKSPACE, KC_DELETE, KC_NO, KC_NO, DE_EURO, KC_1, KC_2, KC_3, KC_TRNS, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, MO(MEDFUNC)
    ),

    [MEDFUNC] = LAYOUT_ergodox_pretty(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, CG_TOGG, KC_NO, KC_MUTE, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, DF(GAME), KC_NO,
        KC_NO, KC_NO, KC_VOLD, KC_MPLY, KC_VOLU, DE_SECT, KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS, KC_NO,
        KC_NO, QK_RBT, DE_DEG, DE_CIRC, DE_TILD, DE_ACUT, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS
    ),

    [GAME] = LAYOUT_ergodox_pretty(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_ESCAPE, DE_Q, DE_W, DE_E, DE_R, KC_NO, KC_NO, KC_TAB, KC_I, KC_UP, KC_P, DF(BASE), KC_NO,
        KC_NO, KC_LSFT, DE_A, DE_S, DE_D, DE_F, KC_J, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENTER, KC_NO,
        KC_NO, KC_LWIN, DE_Y, DE_X, DE_C, DE_V, KC_NO, KC_NO, KC_M, KC_1, KC_2, KC_3, KC_4, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_RCTL, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,
        KC_SPACE, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPACE
    ),

};
// clang-format on
