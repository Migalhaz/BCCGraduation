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
            ~Palette();

            const std::size_t getColorCount() const;
            ColorMap getColor(std::size_t index) const;

            void pushBackColorMap(ColorMap& colorMap);
            ColorMap popBackColorMap();
    };
}