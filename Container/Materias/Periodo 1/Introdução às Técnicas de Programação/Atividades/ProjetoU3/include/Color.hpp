#pragma once
#include <ostream>

namespace colors
{
    class Color
    {
        protected:
            int _r = 0;
            int _g = 0;
            int _b = 0;

        public:
            Color();
            Color(int r, int g, int b);
            
            int getR() const;
            int getG() const;
            int getB() const;
            
            friend std::ostream& operator<<(std::ostream& out, const Color& color);
    };
}