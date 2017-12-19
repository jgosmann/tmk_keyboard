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
     * |    1   |   2  |   3  |   4  |   5  |   6  |      |           |  L3  |   7  |   8  |   9  |   0  |   -  |   `    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  |      |           |      |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------| Home |           |      |------+------+------+------+------+--------|
     * |  M3    |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Shift  |   Ü  |   Ö  |   Ä  |   P  |   Z  | End  |           |      |   B  |   M  |   ,  |   .  |   J  | Shift  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Esc  |   ^  | LAlt | Ctrl |  M4  |                                       |  M3  |  M4  |  L1  | Left |Right|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | mute |  <<  |       |  >>  | >||  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Vol+ |       |  Up  |      |      |
     *                                 | Back | Enter|------|       |------| RAlt | Space|
     *                                 |  sp  |      | Vol- |       | Down |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
          1,    2,   3,     4,   5,   6,   NO,
        TAB,    Q,   W,     E,   R,   T, HOME,
       CAPS,    A,   S,     D,   F,   G,
       LSFT,    Z,   X,     C,   V,   B,  END,
        ESC, NUBS,LALT, LCTRL,NUBS,
                                      MUTE,MPRV,
                                           VOLU,
                               BSPC,   ENT,VOLD,
        // right hand
             FN3,   7,   8,   9,   0, MINS, EQL,
              NO,   Y,   U,   I,   O,   P, LBRC,
                    H,   J,   K,   L,SCLN, QUOT,
              NO,   N,   M,COMM, DOT,SLSH, RSFT,
                      BSLS,RALT, FN1,LEFT, RGHT,
        MNXT, MPLY,
          UP,
        DOWN, LALT, SPC
    ),

    /* Keymap 1:
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  F1    |  F2  |  F3  |  F4  |  F5  |  F6  |      |           |      |  F7  |  F8  |  F9  | F10  | F11  |  F12   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
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
          F1,  F2,  F3,  F4,  F5,  F6,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                             NO,
                                   NO,  NO,  NO,
        // right hand
               NO,  F7,  F8,  F9, F10, F11, F12,
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
                    NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
                         NO,  NO,TRNS,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,  NO
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
     * |    1   |   2  |   3  |   4  |   5  |   6  |      |           |  L3  |   7  |   8  |   9  |   0  |   -  |   `    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  |      |           |      |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------| Home |           |      |------+------+------+------+------+--------|
     * |  M3    |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Shift  |   Ü  |   Ö  |   Ä  |   P  |   Z  | End  |           |      |   B  |   M  |   ,  |   .  |   J  | Shift  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Esc  |   ^  | LAlt | Ctrl |  M4  |                                       |  M3  |  M4  |  L1  | Left |Right|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | mute |  <<  |       |  >>  | >||  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Vol+ |       |  Up  |      |      |
     *                                 | Back | Enter|------|       |------| RAlt | Space|
     *                                 |  sp  |      | Vol- |       | Down |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
       TRNS, TRNS,TRNS,  TRNS,TRNS,TRNS, TRNS,
       TRNS,    X,   V,     L,   C,   W, TRNS,
         NO,    U,   I,     A,   E,   O,
       TRNS, LBRC,SCLN,  QUOT,   P,   Y, TRNS,
       TRNS,   NO,TRNS,  TRNS, FN4,
                                      TRNS,TRNS,
                                           TRNS,
                               BSPC,   ENT,TRNS,
        // right hand
             FN0,TRNS,TRNS,TRNS,TRNS, SLSH,  NO,
            TRNS,   K,   H,   G,   F,   Q, MINS,
                    S,   N,   R,   T,   D,    Z,
            TRNS,   B,   M,COMM, DOT,   J, RSFT,
                        NO, FN4,TRNS,LEFT, RGHT,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS,TRNS
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
    [1] = ACTION_LAYER_MOMENTARY(1),
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
