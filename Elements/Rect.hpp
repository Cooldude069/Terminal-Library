class Rect
{
public:
    int x;      // X coordinate of the top left vortex
    int y;      // Y coordinate of the top left vortex
    int width;  // Horizontal length of the rect
    int height; // Vertical length of the rect
    Rect()
    { // Default constructor
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