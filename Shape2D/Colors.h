#include <raylib.h>

#ifndef COLORS_H
#define COLORS_H

/*
    member functions declared (and defined) in class type definition
    are implicitly inline.
    As a result, it's exempt from ODR (One-Definition-Rule)
*/

class Colors
{
public:
    void setTint(const Color &tint) { m_tint = tint; }
    const Color &getTint() const { return m_tint; }

private:
    Color m_tint{};
};

#endif