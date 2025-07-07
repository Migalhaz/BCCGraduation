#pragma once
#include "Color.hpp"

namespace colors
{
    class Image
    {
        private:
            unsigned int _x;
            unsigned int _y;

            colors::Color** _colorMatrix;

        public:
            Image(unsigned int x, unsigned int y);
            ~Image();
            
            unsigned int getX() const;
            unsigned int getY() const;
            
            colors::Color** getColorMatrix() const;
            colors::Color& getColor(const int& address) const;
            colors::Color& getColor(const int& x, const int& y) const;

            void setColor(const Color& color, const int& x, const int& y);
    };
}