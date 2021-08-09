#include <iostream>
#include <stdio.h>
// #include "Cursor.hpp"

namespace console
{
    void gotoxy(int x, int y)
    {
        // Moves the cursor the the specified (x, y) position.
        // The (0, 0) lies at the top left corner.
        printf("\033[%d;%dH", y + 1, x + 1);
    }
    void clear()
    {
        // Clears the console.
        printf("\033[H\033[J");
    }
} // namespace console

class Cursor
{
private:
    int x; // Default X coordinate of the cursor.
    int y; // Default Y coordinate of the cursor.

public:
    Cursor(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Cursor &setpos(int x, int y) // Moves the cursor to the specified position (x, y)
    {
        console::gotoxy(x, y);
        return *this;
    }
    Cursor &reset() // Resets the cursor position to its default.
    {
        console::gotoxy(x, y);
        return *this;
    }
};