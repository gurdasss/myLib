#include "Colors.h"
#include <raylib.h>

#ifndef CIRCLE_2D_H
#define CIRCLE_2D_H

/*
    member functions declared (and defined) in class type definition
    are implicitly inline.
    As a result, it's exempt from ODR (One-Definition-Rule)
*/

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

    void setPosition(const Vector2 &position) { m_center = position; }
    const Vector2 &getPosition() const { return m_center; }

    void setX(float x) { m_center.x = x; }
    float getX() const { return m_center.x; }

    void setY(float y) { m_center.y = y; }
    float getY() const { return m_center.y; }

    void setRadius(float radius) { m_radius = radius; }
    float getRadius() const { return m_radius; }

private:
    Vector2 m_center{};
    float m_radius{};
};

#endif