#include "Colors.h"
#include <raylib.h>

#ifndef CIRCLE_2D_H
#define CIRCLE_2D_H

class Circle2D : public Colors
{
public:
    /*
        compiler will not generate an implicit default constructor
        if a user defined constructor already exist. As a result,
        we're explicitly asking the compiler to generate a default
        constructor for us.
    */
    Circle2D() = default;
    Circle2D(const Vector2 &position, float radius)
        : m_center{position},
          m_radius{radius}
    {
    }

    inline void setPosition(const Vector2 &position) { m_center = position; }
    inline const Vector2 &getPosition() const { return m_center; }

    inline void setX(float x) { m_center.x = x; }
    inline float getX() const { return m_center.x; }

    inline void setY(float y) { m_center.y = y; }
    inline float getY() const { return m_center.y; }

    inline void setRadius(float radius) { m_radius = radius; }
    inline float getRadius() const { return m_radius; }

private:
    Vector2 m_center{};
    float m_radius{};
};

#endif