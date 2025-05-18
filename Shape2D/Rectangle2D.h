#include "Colors.h"
#include <raylib.h>

#ifndef RECTANGLE_2D_H
#define RECTANGLE_2D_H

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
    Rectangle2D(float width, float height)
        : m_rectangle{0, 0, width, height}
    {
        // a constructor's body is typically left empty.
    }

    Rectangle2D(float x, float y, float width, float height)
        : m_rectangle{x, y, width, height}
    {
        // a constructor's body is typically left empty.
    }

    inline void setPosition(const Vector2 &position)
    {
        m_rectangle.x = position.x;
        m_rectangle.y = position.y;
    }

    inline Vector2 getPosition() const
    {
        return Vector2{m_rectangle.x, m_rectangle.y};
    }

    inline void setX(float x) { m_rectangle.x = x; }
    inline float getX() const { return m_rectangle.x; }

    inline void setY(float y) { m_rectangle.y = y; }
    inline float getY() const { return m_rectangle.y; }

    inline void setWidth(float width) { m_rectangle.width = width; }
    inline float getWidth() const { return m_rectangle.width; }

    inline void setHeight(float height) { m_rectangle.height = height; }
    inline float getHeight() const { return m_rectangle.height; }

    inline const Rectangle &getRectangle() const { return m_rectangle; }

private:
    Rectangle m_rectangle{};
};

#endif