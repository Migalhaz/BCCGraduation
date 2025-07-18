#include "Image.hpp"

colors::Image::Image(unsigned int x, unsigned int y)
: _x(x), _y(y)
{
    _colorMatrix = new Color*[x];
    for (int i = 0; i < x; ++i)
    {
        _colorMatrix[i] = new Color[y];
    }
}

colors::Image::~Image()
{
    for (int i = 0; i < _x; ++i)
    {
        delete[] _colorMatrix[i];
    }

    delete[] _colorMatrix;
}

unsigned int colors::Image::getX() const
{
    return _x;
}

unsigned int colors::Image::getY()const
{
    return _y;
}

colors::Color** colors::Image::getColorMatrix() const
{
    return _colorMatrix;
}

colors::Color& colors::Image::getColor(const int& x, const int& y) const
{
    if (x < 0 || x >= _x)
    {
        throw std::out_of_range("O valor " + std::to_string(x) + " esta fora dos limites da matriz!");
    }

    if (y < 0 || y >= _y)
    {
        throw std::out_of_range("O valor " + std::to_string(y) + " esta fora dos limites da matriz!");
    }

    return _colorMatrix[x][y];
}

void colors::Image::setColor(const Color& color, const int& x, const int& y)
{
    if (x < 0 || x >= _x)
    {
        throw std::out_of_range("O valor " + std::to_string(x) + " está fora dos limites da array!");
    }

    if (y < 0 || y >= _y)
    {
        throw std::out_of_range("O valor " + std::to_string(y) + " está fora dos limites da array!");
    }

    _colorMatrix[x][y] = color;
}