/* Copyright 2017 Kolja Brauns
*/
#include "xd75.h"

#ifndef KEYMAP_GERMAN
#define KEYMAP_GERMAN

#include "keymap.h"

#endif

//Tap Dance Declarations
enum {
  TD_ESC_RUPT = 0
};

enum {
  TD_TAB = 1
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice Ctrl+Alt+Del
  [TD_ESC_RUPT]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, LALT(LCTL(KC_DEL))),
  [TD_TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, LGUI(KC_TAB))
// Other declarations would go here, separated by commas, if you have them
};

//In Layer declaration, add tap dance item in place of a key code


// Layer shorthand
#define _QWZ 0
#define _FN1 1
#define _FN2 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 
    /* QWZ
 * .-----------------------------------------------------------------------------------------------------------------------.
 * |  Esc  |   1   |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |   0   |   +   |   ´   | Del   |BckSpc |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |  Tab  |   Q   |   W   |   E   |   R   |   T   |  Home | Pp Up |   Y   |   U   |   I   |   O   |   P   |   Å   |   *   |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | Ctrl/ |   A   |   S   |   D   |   F   |   G   |  End  | Pg Dn |   H   |   J   |   K   |   L   |   Ö   |   Ä   | Enter |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | LShift|   >   |   Z   |   X   |    C  |   V   | Space |   Up  |   B   |   N   |   M   |   ,   |   .   |   -   | RShift|
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | LCtrl |  Win  |  Alt  | Fn(1) | Space | Space | Left  |  Down | Right | Space | Space | Fn(2) | Alt Gr|  Win  | Ctrl  | 
 * °-----------------------------------------------------------------------------------------------------------------------°
 */
 
	[_QWZ] = {
	{ KC_ESC,  KC_1,    KC_2,    KC_3,  KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    FI_PLUS, FI_ACUT, KC_DEL,  KC_BSPC }, 
	{ KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,    KC_T,   KC_HOME, KC_PGUP, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    FI_AO,   FI_QUOT }, 
	{ KC_CAPS, KC_A,    KC_S,    KC_D,  KC_F,    KC_G,   KC_END,  KC_PGDN, KC_H,    KC_J,    KC_K,    KC_L,    FI_OE,   FI_AE,   KC_ENT  }, 
    { KC_LSFT, FI_LESS, KC_Z,    KC_X,  KC_C,    KC_V,   KC_SPC,  KC_UP,   KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  FI_MINS, KC_RSFT }, 
    { KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC,  KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,  KC_SPC,  MO(2),   FI_ALGR, KC_RGUI, KC_RCTL },
    },
	
	/* FN1
 * .-----------------------------------------------------------------------------------------------------------------------.
 * |   §   |   F1  |   F2  |   F3  |   F4  |   F5  |   F6  |   F7  |   F8  |   F9  |   F10 |  F11  |  F12  |Prt Scr| Pause |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ |   (   |   )   | _____ | _____ | _____ |  ^~¨  |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ |   {   |   }   | _____ | _____ | _____ | _____ |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ |   [   |   ]   | _____ | _____ |  Up   | _____ |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | _____ | _____ | _____ | Fn(1) | _____ | _____ | _____ | _____ | _____ | _____ | _____ | Fn(2) | Prev  | Down  | Right |
 * °-----------------------------------------------------------------------------------------------------------------------°
*/	
	[_FN1] = {
	{ FI_SECT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,      KC_F10,     KC_F11,  KC_F12,  KC_PSCR, KC_PAUS }, 
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_8),    S(KC_9),    KC_TRNS, KC_TRNS, KC_TRNS, FI_CIRC }, 
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_7), RALT(KC_0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }, 
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_8), RALT(KC_9), KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS }, 
	{ KC_TRNS, KC_TRNS, KC_TRNS, MO(1),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    MO(2),   KC_LEFT, KC_DOWN, KC_RGHT },
	}, 
	
		/* FN2
 * .-------------------------------------------------------------------------------------------------------------------------.
 * | RESET | _____  | _____  | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ |   /   |   *   |   -   |
 * |-------+--------+--------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | _____ | RGB HD | RGB HI | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ |   7   |   8   |   9   | _____ |
 * |-------+--------+--------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | _____ | RGB SD | RGB SI | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ |   4   |   5   |   6   | _____ |
 * |-------+--------+--------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | _____ | RGB VD | RGB VI | _____ | _____ | _____ | _____ | _____ | _____ | _____ | _____ |   1   |   2   |   3   | _____ |
 * |-------+--------+--------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | RGB_TG|RGB RMD | RGB MD | Fn(1) | _____ | _____ | _____ | _____ | _____ | _____ | _____ | Fn(2) |   0   | VolDn | Enter |
 * °-------------------------------------------------------------------------------------------------------------------------°
*/	
	[_FN2] = {
	{ RESET  , KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSLS, KC_PAST, KC_PMNS }, 
	{ KC_TRNS, RGB_HUD,  RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_TRNS }, 
	{ KC_TRNS, RGB_SAD,  RGB_SAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS }, 
	{ KC_TRNS, RGB_VAD,  RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PLUS }, 
	{ RGB_TOG, RGB_RMOD, RGB_MOD, MO(1),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(2),   KC_P0,   KC_DOWN, KC_PENT },
	}, 
};

