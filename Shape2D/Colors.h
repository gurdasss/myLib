#include <raylib.h>

#ifndef COLORS_H
#define COLORS_H

class Colors
{
public:
    inline void setTint(const Color &tint) { m_tint = tint; }
    inline const Color &getTint() const { return m_tint; }

private:
    Color m_tint{};
};

#endif