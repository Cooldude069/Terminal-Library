#include <iostream>
#include <math.h>
// #include "Terminal/Terminal.hpp"
#include "Elements/Buttons.hpp"

int main()
{
    Rect rect(5, 5, 10, 4);
    Button button(rect, GREEN_NO_FLASH, false);
    console::clear();
    Cursor cursor;
    Rect r2(0, 0, 4, 4);
    Button b2(r2, RED_NO_FLASH, false);
    b2.blit(cursor);
    button.blit(cursor);
    std::cout << "\n";
    // std::cout << "Buttons : " << button.buttons.len() << std::endl;
    return 0;
}