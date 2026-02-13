#pragma once
#ifndef KEYB_H
#define KEYB_H

#include<raylib.h>
#include<string>
#include<map>
#include<functional>

inline std::map <KeyboardKey, std::string> KeyBoardMapping = {
    // Alphanumeric
    {KEY_A, "a"}, {KEY_B, "b"}, {KEY_C, "c"}, {KEY_D, "d"}, {KEY_E, "e"}, {KEY_F, "f"},
    {KEY_G, "g"}, {KEY_H, "h"}, {KEY_I, "i"}, {KEY_J, "j"}, {KEY_K, "k"}, {KEY_L, "l"},
    {KEY_M, "m"}, {KEY_N, "n"}, {KEY_O, "o"}, {KEY_P, "p"}, {KEY_Q, "q"}, {KEY_R, "r"},
    {KEY_S, "s"}, {KEY_T, "t"}, {KEY_U, "u"}, {KEY_V, "v"}, {KEY_W, "w"}, {KEY_X, "x"},
    {KEY_Y, "y"}, {KEY_Z, "z"},
    {KEY_ZERO, "0"}, {KEY_ONE, "1"}, {KEY_TWO, "2"}, {KEY_THREE, "3"}, {KEY_FOUR, "4"},
    {KEY_FIVE, "5"}, {KEY_SIX, "6"}, {KEY_SEVEN, "7"}, {KEY_EIGHT, "8"}, {KEY_NINE, "9"},

    // Punctuation & Symbols
    {KEY_GRAVE, "`"}, {KEY_MINUS, "-"}, {KEY_EQUAL, "="}, {KEY_LEFT_BRACKET, "["},
    {KEY_RIGHT_BRACKET, "]"}, {KEY_BACKSLASH, "\\"}, {KEY_SEMICOLON, ";"},
    {KEY_APOSTROPHE, "'"}, {KEY_COMMA, ","}, {KEY_PERIOD, "."}, {KEY_SLASH, "/"},

    //KeyPad
    {KEY_KP_1, "1"},{KEY_KP_2, "2"},{KEY_KP_3, "3"},{KEY_KP_4, "4"},
    {KEY_KP_5, "5"},{KEY_KP_6, "6"},{KEY_KP_7, "7"},{KEY_KP_8, "8"},
    {KEY_KP_9, "9"},{KEY_KP_0, "0"},{KEY_KP_ADD, "+"},{KEY_KP_SUBTRACT, "-"},
    {KEY_KP_MULTIPLY, "x"},{KEY_KP_DIVIDE, "/"},{KEY_KP_ENTER, "\n"},
    {KEY_KP_DECIMAL, "."},
    
    // Control/Special
    {KEY_SPACE, " "}, {KEY_TAB, "\t"}

};

inline std::map <KeyboardKey, std::string> KeyBoardMapping_with_Shift
{
    // Uppercase
    {KEY_A, "A"}, {KEY_B, "B"}, {KEY_C, "C"}, {KEY_D, "D"}, {KEY_E, "E"}, {KEY_F, "F"},
    {KEY_G, "G"}, {KEY_H, "H"}, {KEY_I, "I"}, {KEY_J, "J"}, {KEY_K, "K"}, {KEY_L, "L"},
    {KEY_M, "M"}, {KEY_N, "N"}, {KEY_O, "O"}, {KEY_P, "P"}, {KEY_Q, "Q"}, {KEY_R, "R"},
    {KEY_S, "S"}, {KEY_T, "T"}, {KEY_U, "U"}, {KEY_V, "V"}, {KEY_W, "W"}, {KEY_X, "X"},
    {KEY_Y, "Y"}, {KEY_Z, "Z"},

    //kEYPAD
    {KEY_KP_1, "1"},{KEY_KP_2, "2"},{KEY_KP_3, "3"},{KEY_KP_4, "4"},
    {KEY_KP_5, "5"},{KEY_KP_6, "6"},{KEY_KP_7, "7"},{KEY_KP_8, "8"},
    {KEY_KP_9, "9"},{KEY_KP_0, "0"},{KEY_KP_ADD, "+"},{KEY_KP_SUBTRACT, "-"},
    {KEY_KP_MULTIPLY, "x"},{KEY_KP_DIVIDE, "/"},{KEY_KP_ENTER, "\n"},
    {KEY_KP_DECIMAL, "."},

    // Shift Symbols
    {KEY_ZERO, ")"}, {KEY_ONE, "!"}, {KEY_TWO, "@"}, {KEY_THREE, "#"}, {KEY_FOUR, "$"},
    {KEY_FIVE, "%"}, {KEY_SIX, "^"}, {KEY_SEVEN, "&"}, {KEY_EIGHT, "*"}, {KEY_NINE, "("},
    {KEY_GRAVE, "~"}, {KEY_MINUS, "_"}, {KEY_EQUAL, "+"}, {KEY_LEFT_BRACKET, "{"},
    {KEY_RIGHT_BRACKET, "}"}, {KEY_BACKSLASH, "|"}, {KEY_SEMICOLON, ":"},
    {KEY_APOSTROPHE, "\""}, {KEY_COMMA, "<"}, {KEY_PERIOD, ">"}, {KEY_SLASH, "?"},
    {KEY_ENTER ,"\n"}
};



std::string keyBoard(std::string& buffer,KeyboardKey key)
{
	

	if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT))
	{
        return KeyBoardMapping[key];
	}
    else
    {
        return KeyBoardMapping_with_Shift[key];
    }
}



#endif