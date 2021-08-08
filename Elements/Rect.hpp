class Rect
{
public:
    int x;
    int y;
    int width;
    int height;
    Rect()
    {
    }
    Rect(int x, int y, int width, int height)
    {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    }
    Rect(const Rect &rect)
    {
        x = rect.x;
        y = rect.y;
        width = rect.width;
        height = rect.height;
    }
    Rect(Rect &rect)
    {
        x = rect.x;
        y = rect.y;
        width = rect.width;
        height = rect.height;
    }
};