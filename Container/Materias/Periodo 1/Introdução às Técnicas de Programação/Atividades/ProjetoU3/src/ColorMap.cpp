#include "ColorMap.hpp"

colors::ColorMap::ColorMap(int r, int g, int b, double height) 
: colors::Color(r, g, b), _height(height)
{
    
}

double colors::ColorMap::getHeight() const
{
    return _height;
}