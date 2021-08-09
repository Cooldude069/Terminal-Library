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
    Rect rect;          // Rect used to define the position and size of the button.
    char fill_color[8]; // The color of the button.
    bool fill;          // true if color should be filled inside the button, false if color should be only on the edge.
    Button()
    { // Default constructor.
    }
    Button(const Button &btn)
    {
        rect = btn.rect;
        memmove(fill_color, btn.fill_color, 8UL); // copying btn.fill_color to fill_color
        fill = btn.fill;
    }
    Button(Button &btn, bool fill = true)
    {
        rect = btn.rect;
        memmove(this->fill_color, btn.fill_color, 8UL);
        fill = fill;
    }
    Button(Rect rect, char fill_color[8] = "\033[0m", bool fill = true)
    {
        this->rect = rect;
        this->fill = fill;
        memmove(this->fill_color, fill_color, 8UL);
    }
    void blit(Cursor cursor) // To display the button on the terminal screen.
    {
        cursor.reset();
        for (int x = rect.x; x < rect.x + rect.width; x++)
        {
            for (int y = rect.y; y < rect.y + rect.height; y++)
            {
                if (!fill)
                {
                    if ((x == rect.x || x == rect.x + rect.width - 1) || (y == rect.y || y == rect.y + rect.height - 1))
                    {
                        cursor.setpos(x, y);
                        std::cout << fill_color << "█" << NC;
                    }
                    else
                    {
                        cursor.setpos(x, y);
                        std::cout << " ";
                    }
                }
                else
                {
                    cursor.setpos(x, y);
                    std::cout << fill_color << "█" << NC;
                }
            }
        }
    }
};