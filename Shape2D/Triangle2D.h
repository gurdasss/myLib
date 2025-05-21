#include "Colors.h"
#include <raylib.h>

#ifndef TRIANGLE_2D_H
#define TRIANGLE_2D_H

/*
    member functions declared (and defined) in class type definition
    are implicitly inline.
    As a result, it's exempt from ODR (One-Definition-Rule)
*/

class Triangle2D : public Colors
{
public:
    /*
        compiler will not generate an implicit default constructor
        if a user defined constructor already exist. As a result,
        we're explicitly asking the compiler to generate a default
        constructor for us.
    */
    Triangle2D() = default;
    Triangle2D(const Vector2 &point1, const Vector2 &point2, const Vector2 &point3)
        : m_point1{point1},
          m_point2{point2},
          m_point3{point3}
    {
        // a constructor's body is typically left empty.
    }

    void setPoint1(const Vector2 &point1) { m_point1 = point1; }
    void setPoint2(const Vector2 &point2) { m_point2 = point2; }
    void setPoint3(const Vector2 &point3) { m_point3 = point3; }

    const Vector2 &getPoint1() const { return m_point1; }
    const Vector2 &getPoint2() const { return m_point2; }
    const Vector2 &getPoint3() const { return m_point3; }

private:
    Vector2 m_point1{};
    Vector2 m_point2{};
    Vector2 m_point3{};
};

#endif