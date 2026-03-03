#include"keyboard.h"

using namespace std;

string kbInput(KeyboardKey k)
{
    if(IsKeyPressed(KEY_LEFT_SHIFT) or IsKeyPressed(KEY_RIGHT_SHIFT))
    {
        return KeyBoardMapping_with_Shift[k];
    }
    else
    {
    return KeyBoardMapping[k];
    }
}
