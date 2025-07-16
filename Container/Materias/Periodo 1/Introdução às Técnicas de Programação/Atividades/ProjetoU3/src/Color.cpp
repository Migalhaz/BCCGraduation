#include "Color.hpp"

colors::Color::Color()
:_r(0), _g(0), _b(0)
{
    
}

colors::Color::Color(int r, int g, int b)
:_r(r), _g(g), _b(b)
{
    
}

void colors::Color::setRGB(int r, int g, int b) 
{
    this->_r = r;
    this->_g = g;
    this->_b = b;
}

int colors::Color::getR() const 
{ 
    return _r; 
}

int colors::Color::getG() const 
{ 
    return _g; 
}

int colors::Color::getB() const 
{ 
    return _b; 
}

std::ostream& operator<<(std::ostream& out, const colors::Color& color)
{
    return out << '(' << color.getR() << ' ' << color.getG() << ' ' << color.getB() << ')';
}