#pragma once
#include "Color.hpp"

namespace colors
{
    class ColorMap : Color
    {
        private:
            double _height = 0;

        public:
            ColorMap(unsigned short r, unsigned g, unsigned short b, double height);
            double GetHeight() const;
    };
}