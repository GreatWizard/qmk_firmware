/* Copyright 2020 Guillaume Gérard
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "keymap.h"

// clang-format off

// Layout from https://algo.be/ergo/dispositions.htm

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ * │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ % │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ? │ < │ > │ G │ ! │ H │ V │ C │ M │ K │ Z │ = │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ O │ A │ U │ E │ B │ F │ S │ T │ N │ D │ W │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ç │ | │ Q │ @ │ I │ Y │ X │ R │ L │ P │ J │          │
 * ├────┴┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │     │    │    │                       │    │    │    │    │
 * └─────┴────┴────┴───────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DF_GRV  KC_GRV  // `
#define DF_1    KC_1    // 1
#define DF_2    KC_2    // 2
#define DF_3    KC_3    // 3
#define DF_4    KC_4    // 4
#define DF_5    KC_5    // 5
#define DF_6    KC_6    // 6
#define DF_7    KC_7    // 7
#define DF_8    KC_8    // 8
#define DF_9    KC_9    // 9
#define DF_0    KC_0    // 0
#define DF_LBRC KC_MINS // [
#define DF_RBRC KC_EQL  // ]
// Row 2
#define DF_QUOT KC_Q    // '
#define DF_COMM KC_W    // ,
#define DF_DOT  KC_E    // .
#define DF_P    KC_R    // P
#define DF_Y    KC_T    // Y
#define DF_F    KC_Y    // F
#define DF_G    KC_U    // G
#define DF_C    KC_I    // C
#define DF_R    KC_O    // R
#define DF_L    KC_P    // L
#define DF_SLSH KC_LBRC // /
#define DF_EQL  KC_RBRC // =
#define DF_BSLS KC_BSLS // (backslash)
// Row 3
#define DF_A    KC_A    // A
#define DF_O    KC_S    // O
#define DF_E    KC_D    // E
#define DF_U    KC_F    // U
#define DF_I    KC_G    // I
#define DF_D    KC_H    // D
#define DF_H    KC_J    // H
#define DF_T    KC_K    // T
#define DF_N    KC_L    // N
#define DF_S    KC_SCLN // S
#define DF_MINS KC_QUOT // -
// Row 4
#define DF_SCLN KC_Z    // ;
#define DF_Q    KC_X    // Q
#define DF_J    KC_C    // J
#define DF_K    KC_V    // K
#define DF_X    KC_B    // X
#define DF_B    KC_N    // B
#define DF_M    KC_M    // M
#define DF_W    KC_COMM // W
#define DF_V    KC_DOT  // V
#define DF_Z    KC_SLSH // Z

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ { │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ " │ < │ > │   │   │   │   │   │   │   │ ? │ + │  |  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │ _ │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ : │   │   │   │   │   │   │   │   │   │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DF_TILD S(DF_GRV)  // ~
#define DF_EXLM S(DF_1)    // !
#define DF_AT   S(DF_2)    // @
#define DF_HASH S(DF_3)    // #
#define DF_DLR  S(DF_4)    // $
#define DF_PERC S(DF_5)    // %
#define DF_CIRC S(DF_6)    // ^
#define DF_AMPR S(DF_7)    // &
#define DF_ASTR S(DF_8)    // *
#define DF_LPRN S(DF_9)    // (
#define DF_RPRN S(DF_0)    // )
#define DF_LCBR S(DF_LBRC) // {
#define DF_RCBR S(DF_RBRC) // }
// Row 2
#define DF_DQUO S(DF_QUOT) // "
#define DF_LABK S(DF_COMM) // <
#define DF_RABK S(DF_DOT)  // >
#define DF_QUES S(DF_SLSH) // ?
#define DF_PLUS S(DF_EQL)  // +
#define DF_PIPE S(DF_BSLS) // |
// Row 3
#define DF_UNDS S(DF_MINS) // _
// Row 4
#define DF_COLN S(DF_SCLN) // :
