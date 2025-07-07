#pragma once
#include "Color.hpp"

namespace colors
{
    class ColorMap : public Color
    {
        private:
            double _height = 0;

        public:
            ColorMap(int r, int g, int b, double height);
            
            double getHeight() const;
    };
}