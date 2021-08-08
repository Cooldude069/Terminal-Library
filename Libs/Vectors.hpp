#include <math.h>
#define pi 3.14159265358979323846
#define toDegrees(x) (180 * x / pi)

class Vector2
{
public:
    float x;
    float y;
    Vector2(float x = 0.0, float y = 0.0)
    {
        this->x = x;
        this->y = y;
    }
    Vector2(const Vector2 &vect)
    {
        x = vect.x;
        y = vect.y;
    }
    Vector2(Vector2 &vect)
    {
        x = vect.x;
        y = vect.y;
    }
    float len()
    {
        return sqrt(x * x + y * y);
    }
    operator float() const
    {
        return sqrt(x * x + y * y);
    }
    operator int() const
    {
        return (int)sqrt(x * x + y * y);
    }
    Vector2 operator+(Vector2 &vect)
    {
        return Vector2(x + vect.x, y + vect.y);
    }
    Vector2 operator-(Vector2 &vect)
    {
        return Vector2(x - vect.x, y - vect.y);
    }
};