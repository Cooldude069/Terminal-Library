#include "Rect.hpp"
#include "../Terminal/Terminal.hpp"
#include "../../../GitHub/hyper-list/hyper-list.hpp"
#include "Colors.h"
#include <string.h>
#include <iostream>
#include <vector>

class Button
{
public:
    Rect rect;
    char fill_color[8];
    // static List<Button> buttons;
    Button()
    {
    }
    Button(const Button &btn)
    {
        rect = btn.rect;
        memmove(this->fill_color, btn.fill_color, 8UL);
    }
    Button(Button &btn)
    {
        rect = btn.rect;
        memmove(this->fill_color, btn.fill_color, 8UL);
    }
    Button(Rect rect, char fill_color[8] = "\033[0;32m")
    {
        this->rect = rect;
        memmove(this->fill_color, fill_color, 8UL);
        // buttons.append(Button(rect, fill_color));
    }
    void blit(Cursor cursor)
    {
        cursor.reset();
        for (int x = rect.x; x < rect.x + rect.width; x++)
        {
            for (int y = rect.y; y < rect.y + rect.height; y++)
            {
                cursor.setpos(x, y);
                std::cout << fill_color << "█" << NC;
            }
        }
    }
};