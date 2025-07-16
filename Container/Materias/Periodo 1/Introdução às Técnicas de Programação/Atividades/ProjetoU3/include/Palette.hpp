#pragma once
#include <iostream>
#include <vector>
#include "ColorMap.hpp"

namespace colors
{
    class Palette
    {
        private:
            std::vector<ColorMap> _colors; 

        public:
            Palette();
            Palette(int& size, ColorMap colors[]);
            ~Palette() = default;

            const std::size_t getColorCount() const;
            const ColorMap getColor(std::size_t index) const;
            const ColorMap getColorByHeight(double height) const;

            void pushBackColorMap(ColorMap& colorMap);
            ColorMap popBackColorMap();
    };
}