#include <raylib.h>
#include <vector>
#include <optional> // for std::optional
#include <cstddef>  // for std::size_t

/*
std::size_t is the unsigned integer type

std::size_t is commonly used for array indexing and loop counting. Programs that use other types, such as unsigned int, for array indexing may fail on, e.g. 64-bit systems when the index exceeds UINT_MAX or if it relies on 32-bit modular arithmetic.
*/

#ifndef COLORS_H
#define COLORS_H

class Colors
{
public:
    inline void addNewColor(const Color &color) { m_colors.push_back(color); }

    inline std::optional<Color> getColorByIndex(std::size_t index)
    {
        if (m_colors.empty() || index > m_colors.size())
            return std::nullopt;

        return m_colors[index];
    }

private:
    std::vector<Color> m_colors{};
};

#endif