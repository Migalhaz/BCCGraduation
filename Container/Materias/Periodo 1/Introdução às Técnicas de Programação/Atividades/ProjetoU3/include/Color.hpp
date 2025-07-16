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
            
            void setRGB(int r = 0,int g = 0, int b = 0);

            friend std::ostream& operator<<(std::ostream& out, const Color& color);
    };
}