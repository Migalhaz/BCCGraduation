#pragma once
#include <vector>
#include "ColorMap.hpp"

namespace colors
{
    class Palette
    {
        private:
            std::vector<ColorMap*> _colors; 

        public:
            Palette();

            std::size_t getColorCount();
            ColorMap* getColor(int index);

            void pushBackColorMap(ColorMap& colorMap);
            ColorMap* popBackColorMap();
    };
}