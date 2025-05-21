#include "Colors.h"
#include <raylib.h>

#ifndef RECTANGLE_2D_H
#define RECTANGLE_2D_H

/*
    member functions declared (and defined) in class type definition
    are implicitly inline.
    As a result, it's exempt from ODR (One-Definition-Rule)
*/

class Rectangle2D : public Colors
{
public:
    /*
        compiler will not generate an implicit default constructor
        if a user defined constructor already exist. As a result,
        we're explicitly asking the compiler to generate a default
        constructor for us.
    */
    Rectangle2D() = default;

    // delegate the member initialization to another constructor
    Rectangle2D(float width, float height)
        : Rectangle2D{0, 0, width, height}
    {
        // a constructor's body is typically left empty.
    }

    Rectangle2D(float x, float y, float width, float height)
        : m_rectangle{x, y, width, height}
    {
        // a constructor's body is typically left empty.
    }

    void setPosition(const Vector2 &position)
    {
        m_rectangle.x = position.x;
        m_rectangle.y = position.y;
    }

    Vector2 getPosition() const
    {
        return Vector2{m_rectangle.x, m_rectangle.y};
    }

    void setX(float x) { m_rectangle.x = x; }
    float getX() const { return m_rectangle.x; }

    void setY(float y) { m_rectangle.y = y; }
    float getY() const { return m_rectangle.y; }

    void setWidth(float width) { m_rectangle.width = width; }
    float getWidth() const { return m_rectangle.width; }

    void setHeight(float height) { m_rectangle.height = height; }
    float getHeight() const { return m_rectangle.height; }

    const Rectangle &getRectangle() const { return m_rectangle; }

private:
    Rectangle m_rectangle{};
};

#endif