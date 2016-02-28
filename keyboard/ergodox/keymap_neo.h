/*
 * Copyright 2014 ka’imi <kaimi@kaimi.cc>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Neo2 layout for Ergodox
 *
 * The general idea is to have three layers that can be toggled in order:
 *
 * – standard Neo2
 *   (no led)
 * – gamer’s Neo2 (games friendlier modifier positioning, hardware Neo2 layer 4)
 *   (middle led)
 * – poor man’s QWERTZ ((partial) QWERTZ with Neo2 active on the host system)
 *   (bottom led)
 * – poor man’s Neo2 ((partial) Neo2 with QWERTZ active on the host system)
 *   (middle and bottom led)
 *
 */

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * Neo2
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           |  L1  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  T1    |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           |  L5  |   B  |   M  |   ,  |   .  |   J  |  T2    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Prnt |  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  |  T3  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | LSft |  M4l |------|       |------|  M3r | Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
        ESC,   1,   2,   3,   4,   5,  F13,
        TAB,   Q,   W,   E,   R,   T, BSPC,
        DEL,   A,   S,   D,   F,   G,
        GRV,   Z,   X,   C,   V,   B,  ENT,
        PSCR, F1,  F2,  F3,  F4,
                                        F5,  F6,
                                           LALT,
                                 LSFT,NUBS,LGUI,
        // right hand
             F14,   6,   7,   8,   9,   0, MINS,
             FN1,   Y,   U,   I,   O,   P, LBRC,
                    H,   J,   K,   L,SCLN, QUOT,
             FN5,   N,   M,COMM, DOT,SLSH,  EQL,
                        F9, F10, F11, F12, RBRC,
          F7, F8,
        LCTL,
        RGUI, NUHS, SPC
    ),

    /* Keymap 1:
     *
     * gamer’s Neo2
     *
     * This is mostly just the standard Layout for using Neo2. Sadly, some
     * Applications (games, anyone?) cannot map the Shift key as a button.
     * Therefor this layer moves it to the standard keyboard pinky location and
     * puts a space bar in its stead. In addition, the PRINT and T3 keys on the
     * bottom edges of the board become CTRL keys, again in their standard
     * keyboard position below the SHIFTs.
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           |  L2  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  LSft  |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           |  L5  |   B  |   M  |   ,  |   .  |   J  |  RSft  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl|  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  | RCtrl|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | Space|  L4  |------|       |------|  M3r | Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        LCTL,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                  SPC, FN4,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
              FN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RSFT,
                       TRNS,TRNS,TRNS,TRNS,RCTL,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /* Keymap 2:
     *
     * Poor man’s QWERTZ
     *
     * This layer is designed for applications that really can‘t ever stand
     * anything else than QWERT[ZY]. With Neo2 active as the OS’ keyboard
     * layout, it builds a virtual QWERTZ on the board.
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   ß    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   Q  |   W  |   E  |   R  |   T  | BKSP |           |  L3  |   Z  |   U  |   I  |   O  |   P  |   Ü    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   Ö  |   Ä    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  LSft  |   Y  |   X  |   C  |   V  |   B  | RET  |           |  L5  |   N  |   M  |   ,  |   .  |   -  | RSft   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtl |  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  | RCtl |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | Space|  L4  |------|       |------|  M3r | Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
        ESC,   1,   2,   3,   4,   5,  F13,
        TAB,   P,   T,   F,   K,   L, BSPC,
        DEL,   D,   H,SCLN,   O,   I,
        LSFT,QUOT,  Q,   R,   W,   N,  ENT,
        LCTL, F1,  F2,  F3,  F4,
                                        F5,  F6,
                                           LALT,
                                  SPC, FN4,LGUI,
        // right hand
             F14,   6,   7,   8,   9,   0, LBRC,
             FN3,   B,   A,   S,   G,   V,    Z,
                    U,SLSH,   Y,   E,   X,    C,
             FN5,   J,   M,COMM, DOT,MINS, RSFT,
                        F9, F10, F11, F12, RCTL,
          F7, F8,
        LCTL,
        RGUI, NUHS, SPC
    ),


    /* Keymap 3:
     *
     * poor man’s Neo2
     *
     * For the rare occasions when you have to work on a computer that has no
     * way of installing Neo2 in the OS, you can make do with this layer and
     * QWERTZ configured on the computer. That as close as possible resembles
     * Neo2. Of course, the Shift layer still is as it is in QWERTZ and Neo2
     * Layer3 is not possible¹. Layer 4 is again implemented in hardware as far
     * as possible.
     *
     * ¹ Pull requests welcome.
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           |  L0  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |   <    |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           |  L5  |   B  |   M  |   ,  |   .  |   J  |   #    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Prnt |  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  |  T3  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | LSft |  L4  |------|       |------| RAlt | Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,   X,   V,   L,   C,   W,TRNS,
        TRNS,   U,   I,   A,   E,   O,
        NUBS,LBRC,SCLN,QUOT,   P,   Y,TRNS,
        PSCR,TRNS,TRNS,TRNS,TRNS,
                                      LSFT,TRNS,
                                           TRNS,
                                 LSFT, FN4,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SLSH,
              FN0,   K,   H,   G,   F,   Q,MINS,
                     S,   N,   R,   T,   D,   Z,
             TRNS,   B,   M,COMM, DOT,   J,NUHS,
                       TRNS,TRNS,TRNS,TRNS, EQL,
        TRNS,TRNS,
        TRNS,
        TRNS,RALT,TRNS
    ),

    /* Keymap 4:
     *
     * hardware Neo2 layer 4
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        | PgUp | BSpc |  Up  |  Del | PgDn |      |           |      |      |   7  |   8  |   9  |   +  |   -    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | Home | Left | Down | Right|  End |------|           |------|      |   4  |   5  |   6  |   ,  |   .    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |  Esc |  Tab |  Ins |  Ret | Undo |      |           |      |      |   1  |   2  |   3  |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | LSft |      |------|       |------|      |   0  |
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,PGUP,BSPC,  UP, DEL,PGDN,  NO,
          NO,HOME,LEFT,DOWN,RGHT, END,
          NO, ESC, TAB, INS, ENT,UNDO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,   7,   8,   9,RBRC,MINS,
                    NO,   4,   5,   6,COMM, DOT,
               NO,  NO,   1,   2,   3,  NO,  NO,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
        TRNS,
        TRNS,  NO,   0
    ),

    /* Keymap 5:
     *
     * special keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Power  |      |      |      |      |      |Teensy|           |      |      |      |      |      |      | Teensy |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           | Ins  | Vol+ |  App |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | Solo | Mid  | ADC  | Jung |      |------|           |------| Mute | Last | Pl/Ps| Next | Stop |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |  KVM |           |      | Vol- |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         PWR,  NO,  NO,  NO,  NO,  NO,FN10,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,FN12,FN13,FN14,FN15,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,FN11,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                             NO,
                                   NO,  NO,  NO,
        // right hand
               NO,  NO,  NO,  NO,  NO,  NO,FN10,
              INS,VOLU, APP,  NO,  NO,  NO,  NO,
                  MUTE,MPRV,MPLY,MNXT,MSTP,  NO,
             TRNS,VOLD,  NO,  NO,  NO,  NO,  NO,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,  NO
    ),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
    LAYER0,
    LAYER1,
    LAYER2,
    LAYER3,
};

enum macro_id {
    KVM_SWITCH,
    SMITE_SOLO,
    SMITE_MID,
    SMITE_ADC,
    SMITE_JUNG,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_FUNCTION(LAYER0),
    [1] = ACTION_FUNCTION(LAYER1),
    [2] = ACTION_FUNCTION(LAYER2),
    [3] = ACTION_FUNCTION(LAYER3),
    [4] = ACTION_LAYER_MOMENTARY(4),
    [5] = ACTION_LAYER_MOMENTARY(5),
    [10] = ACTION_FUNCTION(TEENSY_KEY),
    [11] = ACTION_MACRO(KVM_SWITCH),
    [12] = ACTION_MACRO(SMITE_SOLO),
    [13] = ACTION_MACRO(SMITE_MID),
    [14] = ACTION_MACRO(SMITE_ADC),
    [15] = ACTION_MACRO(SMITE_JUNG),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    } else if (record->event.pressed) {
        if (id == LAYER0) {
            // led off
            ergodox_led_all_off();
            // layer 0
            layer_clear();
        } else if (id == LAYER1) {
            // led 2 on
            ergodox_led_all_off();
            ergodox_right_led_2_on();
            // layer 1
            layer_on(1);
        } else if (id == LAYER2) {
            // led 3 on
            ergodox_led_all_off();
            ergodox_right_led_3_on();
            // layer 2
            layer_on(2);
        } else if (id == LAYER3) {
            // leds 2 and3 on
            ergodox_led_all_off();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            // layer 3
            layer_on(3);
        }
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;

    // doesn’t work – sends no control

    switch (id) {
        case KVM_SWITCH:
            return (event.pressed ?
                    MACRO( I(50), T(LCTRL), T(LCTRL), W(255), W(255), T(ENTER), END) : MACRO_NONE);
            break;
        case SMITE_SOLO:
            return (event.pressed ?
                    MACRO( T(ENTER), T(H), T(G), T(E), T(G), T(ENTER), END) : MACRO_NONE);
            break;
        case SMITE_MID:
            return (event.pressed ?
                    MACRO( T(ENTER), T(M), T(S), T(SCLN), T(ENTER), END) : MACRO_NONE);
            break;
        case SMITE_ADC:
            return (event.pressed ?
                    MACRO( T(ENTER), T(D), T(SCLN), T(R), T(ENTER), END) : MACRO_NONE);
            break;
        case SMITE_JUNG:
            return (event.pressed ?
                    MACRO( T(ENTER), T(SLSH), T(A), T(J), T(I), T(E), T(F), T(ENTER), END) : MACRO_NONE);
            break;
        default:
            return MACRO_NONE;
    }
}
