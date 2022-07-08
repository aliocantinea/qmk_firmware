/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define KC_CUT LCTL(KC_X)
#define KC_COPY LCTL(KC_C)
#define KC_PASTE LCTL(KC_V)


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//      ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt               Rotary
//      ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
//      Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \                 PgUp
//      Caps     A        S        D        F        G        H        J        K        L        ;        "                 Enter             PgDn
//      Sh_L              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right


    // The FN key by default maps to a momentary toggle to layer 1 to provide access to the RESET key (to put the board into bootloader mode). Without
    // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
    // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI
    // if that's your preference.
    //
    // To put the keyboard in bootloader mode, use FN+backslash. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    // This keyboard defaults to 6KRO instead of NKRO for compatibility reasons (some KVMs and BIOSes are incompatible with NKRO).
    // Since this is, among other things, a "gaming" keyboard, a key combination to enable NKRO on the fly is provided for convenience.
    // Press Fn+N to toggle between 6KRO and NKRO. This setting is persisted to the EEPROM and thus persists between restarts.

    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_PSCR,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_CUT,
        MO(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_COPY,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_PASTE,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RCTL, MO(3),   KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          PgUp,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_P0,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

    [2] = LAYOUT(
        _______, KC_MPRV, _______, _______, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, KC_P7,   KC_P8,   KC_P9,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        KC_NUM,  KC_P4,   KC_P5,   KC_P6,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, KC_P1,   KC_P2,   KC_P3,   _______, _______, _______, _______, _______, _______, _______, _______,          KC_PEQL,          _______,
        KC_CAPS,          KC_P0,   _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______, _______, _______,  _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,          _______,
        _______, _______, _______, _______,  _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,          RGB_HUI,
        _______, _______, _______, _______,  _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, RESET,            RGB_SAI,
        _______, _______, _______, _______,  _______,  _______,  _______, _______, _______, _______,  _______, _______,          _______,          RGB_VAI,
        _______,          _______, _______,  _______,  _______,  _______, NK_TOGG, _______, _______,  _______, _______,          _______, RGB_MOD, RGB_TOG,
        _______, _______, _______,                               _______,                             TG(1),   TG(2),   _______, RGB_SPD, RGB_RMOD, RGB_SPI
    ),

};
// clang-format on

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
    switch(biton32(layer_state)){
        case 3:
            if (clockwise){
                tap_code16(KC_WH_U);
            } else{
                tap_code16(KC_WH_D);
            }
            break;
        default:
            if (clockwise) {
                tap_code16(KC_VOLU);
            } else {
                tap_code16(KC_VOLD);
            }
            break;
        }
    }
    return true;
}
#endif // ENCODER_ENABLE

// RGB LED layout
// Source: https://www.reddit.com/r/glorious/comments/okrbjg/peeps_qmk_and_via_rgb_guide_only_for_ansi/
// led number, function of the key

//  67, Side led 01    0, ESC      6, F1       12, F2       18, F3       23, F4       28, F5       34, F6       39, F7       44, F8       50, F9       56, F10      61, F11      66, F12      69, Prt       Rotary(Mute)   68, Side led 12
//  70, Side led 02    1, ~        7, 1        13, 2        19, 3        24, 4        29, 5        35, 6        40, 7        45, 8        51, 9        57, 0        62, -_       78, (=+)     85, BackSpc   72, Del        71, Side led 13
//  73, Side led 03    2, Tab      8, Q        14, W        20. E        25, R        30, T        36, Y        41, U        46, I        52, O        58, P        63, [{       89, ]}       93, \|        75, PgUp       74, Side led 14
//  76, Side led 04    3, Caps     9, A        15, S        21, D        26, F        31, G        37, H        42, J        47, K        53, L        59, ;:       64, '"                    96, Enter     86, PgDn       77, Side led 15
//  80, Side led 05    4, Sh_L     10, Z       16, X        22, C        27, V        32, B        38, N        43, M        48, ,<       54, .<       60, /?                    90, Sh_R     94, Up        82, End        81, Side led 16
//  83, Side led 06    5, Ct_L     11,Win_L    17, Alt_L                              33, SPACE                              49, Alt_R    55, FN                    65, Ct_R     95, Left     97, Down      79, Right      84, Side led 17
//  87, Side led 07                                                                                                                                                                                                        88, Side led 18
//  91, Side led 08                                                                                                                                                                                                        92, Side led 19

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    
	if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 255, 0, 0);  //tab key
        RGB_MATRIX_INDICATOR_SET_COLOR(3, 255, 0, 0);  //capslock key
        RGB_MATRIX_INDICATOR_SET_COLOR(4, 255, 0, 0);  //shift left
        RGB_MATRIX_INDICATOR_SET_COLOR(67, 255, 0, 0); //left side led
        RGB_MATRIX_INDICATOR_SET_COLOR(70, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(73, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(76, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(80, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(83, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(87, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(91, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(68, 255, 0, 0);  //right side led
        RGB_MATRIX_INDICATOR_SET_COLOR(71, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(74, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(77, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(81, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(84, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(88, 255, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(92, 255, 0, 0); 

    } 
    if (!IS_HOST_LED_ON(USB_LED_NUM_LOCK)) {                // on if NUM lock is OFF
	    RGB_MATRIX_INDICATOR_SET_COLOR(6, 54, 63, 199);       //f1-f12
        RGB_MATRIX_INDICATOR_SET_COLOR(12, 49, 73, 173);   
        RGB_MATRIX_INDICATOR_SET_COLOR(18, 42, 68, 173);  
        RGB_MATRIX_INDICATOR_SET_COLOR(23, 27, 69, 194);  
        RGB_MATRIX_INDICATOR_SET_COLOR(28, 0, 85, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(34, 2, 92, 247);
        RGB_MATRIX_INDICATOR_SET_COLOR(39, 2, 101, 247); 
        RGB_MATRIX_INDICATOR_SET_COLOR(44, 28, 112, 237);
        RGB_MATRIX_INDICATOR_SET_COLOR(50, 28, 136, 237);
        RGB_MATRIX_INDICATOR_SET_COLOR(56, 46, 141, 230); 
        RGB_MATRIX_INDICATOR_SET_COLOR(61, 61, 152, 217);
        RGB_MATRIX_INDICATOR_SET_COLOR(66, 73, 167, 201);
        RGB_MATRIX_INDICATOR_SET_COLOR(69, 173, 119, 99);      //delete

    }

       switch(get_highest_layer(layer_state)){                // special handling per layer
            case 1:                                           //ffxiv
                RGB_MATRIX_INDICATOR_SET_COLOR(67, 0, 130, 255);      //left side led
                RGB_MATRIX_INDICATOR_SET_COLOR(70, 0, 120, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(73, 0, 110, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(76, 0, 100, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(80, 0, 90, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(83, 0, 80, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(87, 0, 70, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(91, 0, 60, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(1, 107, 115, 199);     //~
                RGB_MATRIX_INDICATOR_SET_COLOR(0, 56, 63, 138);       //esc 
                RGB_MATRIX_INDICATOR_SET_COLOR(6, 54, 63, 199);       //f1-f12
                RGB_MATRIX_INDICATOR_SET_COLOR(12, 49, 73, 173);   
                RGB_MATRIX_INDICATOR_SET_COLOR(18, 42, 68, 173);  
                RGB_MATRIX_INDICATOR_SET_COLOR(23, 27, 69, 194);  
                RGB_MATRIX_INDICATOR_SET_COLOR(28, 0, 85, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(34, 2, 92, 247);
                RGB_MATRIX_INDICATOR_SET_COLOR(39, 2, 101, 247); 
                RGB_MATRIX_INDICATOR_SET_COLOR(44, 28, 112, 237);
                RGB_MATRIX_INDICATOR_SET_COLOR(50, 28, 136, 237);
                RGB_MATRIX_INDICATOR_SET_COLOR(56, 46, 141, 230); 
                RGB_MATRIX_INDICATOR_SET_COLOR(61, 61, 152, 217);
                RGB_MATRIX_INDICATOR_SET_COLOR(66, 73, 167, 201);
                RGB_MATRIX_INDICATOR_SET_COLOR(69, 173, 119, 99);      //delete
                RGB_MATRIX_INDICATOR_SET_COLOR(72, 122, 51, 24);       //macro
                RGB_MATRIX_INDICATOR_SET_COLOR(75, 153, 42, 26);
                RGB_MATRIX_INDICATOR_SET_COLOR(86, 227, 88, 50);
                RGB_MATRIX_INDICATOR_SET_COLOR(82, 245, 200, 50); 
                RGB_MATRIX_INDICATOR_SET_COLOR(94, 255, 230, 80);      //up_arrow
                RGB_MATRIX_INDICATOR_SET_COLOR(79, 255, 232, 130);     //right_arrow 
                RGB_MATRIX_INDICATOR_SET_COLOR(97, 255, 230, 80);      //down_arrow
                RGB_MATRIX_INDICATOR_SET_COLOR(95, 255, 217, 30);     //left_arrow 
                RGB_MATRIX_INDICATOR_SET_COLOR(49, 255, 166, 0);      //alt_right 
                RGB_MATRIX_INDICATOR_SET_COLOR(68, 255, 130, 0);      //right side led
                RGB_MATRIX_INDICATOR_SET_COLOR(71, 255, 140, 0);
                RGB_MATRIX_INDICATOR_SET_COLOR(74, 255, 150, 0);
                RGB_MATRIX_INDICATOR_SET_COLOR(77, 255, 160, 0);
                RGB_MATRIX_INDICATOR_SET_COLOR(81, 255, 170, 0);
                RGB_MATRIX_INDICATOR_SET_COLOR(84, 255, 180, 0);
                RGB_MATRIX_INDICATOR_SET_COLOR(88, 255, 190, 0);
                RGB_MATRIX_INDICATOR_SET_COLOR(92, 255, 200, 0); 
                break;
            case 2:                                           //utilities
                RGB_MATRIX_INDICATOR_SET_COLOR(2, 255, 255, 255);     //tab key
                RGB_MATRIX_INDICATOR_SET_COLOR(3, 255, 255, 255);     //capslock key
                RGB_MATRIX_INDICATOR_SET_COLOR(4, 255, 0, 0);         //shift left
                RGB_MATRIX_INDICATOR_SET_COLOR(7, 255, 255, 255);     //1-3
                RGB_MATRIX_INDICATOR_SET_COLOR(8, 255, 255, 255);     //q-e
                RGB_MATRIX_INDICATOR_SET_COLOR(9, 255, 255, 255);     //a-d
                RGB_MATRIX_INDICATOR_SET_COLOR(10, 255, 255, 255);    //z
                RGB_MATRIX_INDICATOR_SET_COLOR(13, 255, 255, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(14, 255, 255, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(15, 255, 255, 255); 
                RGB_MATRIX_INDICATOR_SET_COLOR(19, 255, 255, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(20, 255, 255, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(21, 255, 255, 255); 
                RGB_MATRIX_INDICATOR_SET_COLOR(96, 255, 255, 255);   //enter
                RGB_MATRIX_INDICATOR_SET_COLOR(6, 255, 0, 0);        //f1
                RGB_MATRIX_INDICATOR_SET_COLOR(12, 255, 125, 0);
                RGB_MATRIX_INDICATOR_SET_COLOR(18, 125, 255, 0); 
                RGB_MATRIX_INDICATOR_SET_COLOR(23, 0, 255, 0);       //f4
                break;
            case 3:                                           //RGB
                RGB_MATRIX_INDICATOR_SET_COLOR(93, 255, 0, 0);       //\|reset
                RGB_MATRIX_INDICATOR_SET_COLOR(38, 255, 0, 0);       //n-nk_rollover
                RGB_MATRIX_INDICATOR_SET_COLOR(49, 254, 243, 191);   //alt_right
                RGB_MATRIX_INDICATOR_SET_COLOR(55, 255, 255, 255);   //ctrl_right
                RGB_MATRIX_INDICATOR_SET_COLOR(0, 255, 0, 0);        //esc 
                RGB_MATRIX_INDICATOR_SET_COLOR(6, 255, 127, 0);      //f1-f12
                RGB_MATRIX_INDICATOR_SET_COLOR(12, 255, 255, 0);  
                RGB_MATRIX_INDICATOR_SET_COLOR(18, 127, 255, 0);  
                RGB_MATRIX_INDICATOR_SET_COLOR(23, 0, 255, 0);  
                RGB_MATRIX_INDICATOR_SET_COLOR(28, 0, 255, 127);
                RGB_MATRIX_INDICATOR_SET_COLOR(34, 0, 255, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(39, 0, 127, 255); 
                RGB_MATRIX_INDICATOR_SET_COLOR(44, 0, 0, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(50, 127, 0, 255);
                RGB_MATRIX_INDICATOR_SET_COLOR(56, 255, 0, 255); 
                RGB_MATRIX_INDICATOR_SET_COLOR(61, 255, 0, 127);
                RGB_MATRIX_INDICATOR_SET_COLOR(66, 255, 127, 255);                 
                RGB_MATRIX_INDICATOR_SET_COLOR(69, 255, 0, 0);      //delete
                RGB_MATRIX_INDICATOR_SET_COLOR(72, 200, 200, 200);    //macro
                RGB_MATRIX_INDICATOR_SET_COLOR(75, 200, 200, 200);
                RGB_MATRIX_INDICATOR_SET_COLOR(86, 200, 200, 200);
                RGB_MATRIX_INDICATOR_SET_COLOR(82, 200, 200, 200);
                RGB_MATRIX_INDICATOR_SET_COLOR(94, 200, 200, 200);   //up_arrow
                RGB_MATRIX_INDICATOR_SET_COLOR(79, 200, 200, 200);   //right_arrow
                RGB_MATRIX_INDICATOR_SET_COLOR(97, 200, 200, 200);   //down_arrow
                RGB_MATRIX_INDICATOR_SET_COLOR(95, 200, 200, 200);   //left_arrow
                break;
            default:
                break;
            break;
    }
}

#ifdef RGB_MATRIX_ENABLE
void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}
#endif // RGB_MATRIX_ENABLE