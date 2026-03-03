#include"keyboard.h"

using namespace std;

string kbInput(KeyboardKey k)
{
    if(IsKeyPressed(KEY_LEFT_SHIFT) or IsKeyPressed(KEY_RIGHT_SHIFT))
    {
        return KeyBoardMapping_with_Shift[k];
    }

    else if(IsKeyDown(KEY_LEFT_CONTROL) and IsKeyPressed(KEY_V))
    {
        const char * clipboardtext = GetClipboardText();
        return string(clipboardtext);
    }

    else
    {
    return KeyBoardMapping[k];
    }
}
