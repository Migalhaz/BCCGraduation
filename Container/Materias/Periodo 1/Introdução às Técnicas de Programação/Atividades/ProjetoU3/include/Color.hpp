#pragma once
#include <ostream>

namespace colors
{
    class Color
    {
        protected:
            unsigned short _r = 0;
            unsigned short _g = 0;
            unsigned short _b = 0;

        public:
            unsigned short getR() const;
            unsigned short getG() const;
            unsigned short getB() const;
            Color(unsigned short r = 0, unsigned short g = 0, unsigned short b = 0);
            friend std::ostream& operator<<(std::ostream& out, const Color& color);
    };
}