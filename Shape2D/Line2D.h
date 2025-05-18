#include "Colors.h"
#include <raylib.h>

#ifndef LINE_2D_H
#define LINE_2D_H

class Line2D : public Colors
{
public:
    /*
        compiler will not generate an implicit default constructor
        if a user defined constructor already exist. As a result,
        we're explicitly asking the compiler to generate a default
        constructor for us.
    */
    Line2D() = default;
    Line2D(const Vector2 &startPos, const Vector2 &endPos)
        : m_startPos{startPos},
          m_endPos{endPos}
    {
        // a constructor's body is typically left empty.
    }
    inline void setStartPos(const Vector2 &position) { m_startPos = position; }
    inline const Vector2 &getStartPos() const { return m_startPos; }

    inline void setStartPosX(float x) { m_startPos.x = x; }
    inline void setStartPosY(float y) { m_startPos.y = y; }

    inline float getStartPosX() const { return m_startPos.x; }
    inline float getStartPosY() const { return m_startPos.y; }

    inline void setEndPosX(float x) { m_endPos.x = x; }
    inline void setEndPosY(float y) { m_endPos.y = y; }

    inline float getEndPosX() const { return m_endPos.x; }
    inline float getEndPosY() const { return m_endPos.y; }

    inline void setEndPos(const Vector2 &position) { m_endPos = position; }
    inline const Vector2 &getEndPos() const { return m_endPos; }

private:
    Vector2 m_startPos{};
    Vector2 m_endPos{};
};

#endif