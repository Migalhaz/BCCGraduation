#include "Color.hpp"

colors::Color::Color(unsigned short r = 0, unsigned short g = 0, unsigned short b = 0)
{
    this->_r = r;
    this->_g = g;
    this->_b = b;
}

unsigned short colors::Color::getR() const 
{ 
    return _r; 
}

unsigned short colors::Color::getG() const 
{ 
    return _g; 
}

unsigned short colors::Color::getB() const 
{ 
    return _b; 
}

std::ostream& operator<<(std::ostream& out, const colors::Color& color)
{
    return out << '(' << color.getR() << ' ' << color.getG() << ' ' << color.getB() << ')';
}