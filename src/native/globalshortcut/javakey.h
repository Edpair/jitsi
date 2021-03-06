/*
 * Jitsi, the OpenSource Java VoIP and Instant Messaging client.
 *
 * Copyright @ 2015 Atlassian Pty Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef JAVAKEY_H
#define JAVAKEY_H

/**
 * \enum java_keycode
 * \brief Java keycode
 */
enum java_keycode
{
    JVK_PAUSE = 0x13,
    JVK_CAPS_LOCK = 0x14,
    JVK_ESCAPE = 0x1B,
    JVK_SPACE =0x20,
    JVK_UP = 0x26,
    JVK_DOWN = 0x28,
    JVK_LEFT = 0x25,
    JVK_RIGHT = 0x27,
    JVK_COMMA = 0x2C,
    JVK_MINUS = 0x2D,
    JVK_PERIOD = 0x2E,
    JVK_SLASH = 0x2F,
    JVK_0 = 0x30,
    JVK_1 = 0x31,
    JVK_2 = 0x32,
    JVK_3 = 0x33,
    JVK_4 = 0x34,
    JVK_5 = 0x35,
    JVK_6 = 0x36,
    JVK_7 = 0x37,
    JVK_8 = 0x38,
    JVK_9 = 0x39,
    JVK_SEMICOLON = 0x3B,
    JVK_EQUALS = 0x3D,
    JVK_A = 0x41,
    JVK_B = 0x42,
    JVK_C = 0x43,
    JVK_D = 0x44,
    JVK_E = 0x45,
    JVK_F = 0x46,
    JVK_G = 0x47,
    JVK_H = 0x48,
    JVK_I = 0x49,
    JVK_J = 0x4A,
    JVK_K = 0x4B,
    JVK_L = 0x4C,
    JVK_M = 0x4D,
    JVK_N = 0x4E,
    JVK_O = 0x4F,
    JVK_P = 0x50,
    JVK_Q = 0x51,
    JVK_R = 0x52,
    JVK_S = 0x53,
    JVK_T = 0x54,
    JVK_U = 0x55,
    JVK_V = 0x56,
    JVK_W = 0x57,
    JVK_X = 0x58,
    JVK_Y = 0x59,
    JVK_Z = 0x5A,
    JVK_OPEN_BRACKET = 0x5B,
    JVK_BACK_SLASH = 0x5C,
    JVK_CLOSE_BRACKET = 0x5D,
    JVK_NUMPAD0 = 0x60,
    JVK_NUMPAD1 = 0x61,
    JVK_NUMPAD2 = 0x62,
    JVK_NUMPAD3 = 0x63,
    JVK_NUMPAD4 = 0x64,
    JVK_NUMPAD5 = 0x65,
    JVK_NUMPAD6 = 0x66,
    JVK_NUMPAD7 = 0x67,
    JVK_NUMPAD8 = 0x68,
    JVK_NUMPAD9 = 0x69,
    JVK_KP_UP = 0xE0,
    JVK_KP_DOWN = 0xE1,
    JVK_KP_LEFT = 0xE2,
    JVK_KP_RIGHT = 0xE3,
    JVK_MULTIPLY = 0x6A,
    JVK_ADD = 0x6B,
    JVK_SEPARATOR = 0x6C,
    JVK_SUBTRACT = 0x6D,
    JVK_DECIMAL = 0x6E,
    JVK_DIVIDE = 0x6F,
    JVK_DELETE = 0x7F,
    JVK_NUM_LOCK = 0x90,
    JVK_CLEAR = 0x03,
    JVK_SCROLL_LOCK = 0x91,
    JVK_F1 = 0x70,
    JVK_F2 = 0x71,
    JVK_F3 = 0x72,
    JVK_F4 = 0x73,
    JVK_F5 = 0x74,
    JVK_F6= 0x75,
    JVK_F7 = 0x76,
    JVK_F8 = 0x77,
    JVK_F9 = 0x78,
    JVK_F10 = 0x79,
    JVK_F11 = 0x7A,
    JVK_F12 = 0x7B,
    JVK_F13 = 0xF000,
    JVK_F14 = 0xF001,
    JVK_F15 = 0xF002,
    JVK_F16 = 0xF003,
    JVK_F17 = 0xF004,
    JVK_F18 = 0xF005,
    JVK_F19 = 0xF006,
    JVK_F20 = 0xF007,
    JVK_F21 = 0xF008,
    JVK_F22 = 0xF009,
    JVK_F23 = 0xF00A,
    JVK_F24 = 0xF00B,
    JVK_PRINTSCREEN = 0x9A,
    JVK_INSERT = 0x9B,
    JVK_HELP = 0x9C,
    JVK_PAGE_UP = 0x21,
    JVK_PAGE_DOWN = 0x22,
    JVK_HOME = 0x24,
    JVK_END = 0x23,
    JVK_BACK_QUOTE = 0xC0,
    JVK_QUOTE = 0xDE,
    JVK_DEAD_GRAVE = 0x80,
    JVK_DEAD_ACUTE = 0x81,
    JVK_DEAD_CIRCUMFLEX = 0x82,
    JVK_DEAD_TILDE = 0x83,
    JVK_DEAD_MACRON = 0x84,
    JVK_DEAD_BREVE = 0x85,
    JVK_DEAD_ABOVEDOT = 0x86,
    JVK_DEAD_DIAERESIS = 0x87,
    JVK_DEAD_ABOVERING = 0x88,
    JVK_DEAD_DOUBLEACUTE = 0x89,
    JVK_DEAD_CARON = 0x8A,
    JVK_DEAD_CEDILLA = 0x8B,
    JVK_DEAD_OGONEK = 0x8C,
    JVK_DEAD_IOTA = 0x8D,
    JVK_AMPERSAND = 0x96,
    JVK_ASTERISK  = 0x97,
    JVK_QUOTEDBL = 0x98,
    JVK_LESS = 0x99,
    JVK_GREATER = 0xA0,
    JVK_BRACELEFT = 0xA1,
    JVK_BRACERIGHT = 0xA2,
    JVK_AT = 0x0200,
    JVK_COLON = 0x0201,
    JVK_CIRCUMFLEX = 0x0202,
    JVK_DOLLAR = 0x0203,
    JVK_EURO_SIGN = 0x0204,
    JVK_EXCLAMATION_MARK = 0x0205,
    JVK_INVERTED_EXCLAMATION_MARK = 0x0206,
    JVK_LEFT_PARENTHESIS = 0x0207,
    JVK_NUMBER_SIGN = 0x0208,
    JVK_PLUS = 0x0209,
    JVK_RIGHT_PARENTHESIS = 0x020A,
    JVK_UNDERSCORE = 0x020B,
};

#endif /* JAVAKEY_H */

