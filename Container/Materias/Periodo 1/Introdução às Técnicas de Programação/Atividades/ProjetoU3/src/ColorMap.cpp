#include "ColorMap.hpp"

colors::ColorMap::ColorMap(unsigned short r, unsigned g, unsigned short b, double height) : colors::Color(r, g, b)
{
    this->_height = height;
}

double colors::ColorMap::GetHeight() const
{
    return _height;
}