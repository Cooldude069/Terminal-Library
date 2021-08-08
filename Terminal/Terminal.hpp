#include <iostream>
#include <stdio.h>
// #include "Cursor.hpp"

namespace console
{
    void gotoxy(int x, int y)
    {
        printf("\033[%d;%dH", y, x);
    }
    void clear()
    {
        printf("\033[H\033[J");
    }
} // namespace console

class Cursor
{
private:
    int x;
    int y;

public:
    Cursor(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Cursor &setpos(int x, int y)
    {
        this->x = x;
        this->y = y;
        console::gotoxy(this->x, this->y);
        return *this;
    }
    Cursor &reset()
    {
        console::gotoxy(0, 0);
        return *this;
    }
};