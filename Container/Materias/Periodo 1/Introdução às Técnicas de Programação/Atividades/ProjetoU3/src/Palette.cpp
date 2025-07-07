#include "Palette.hpp"

colors::Palette::Palette()
{
    this->_colors = std::vector<colors::ColorMap*>();
}

colors::Palette::~Palette()
{
    for(colors::ColorMap* color : _colors)
    {
        delete color;
    }
}

const std::size_t colors::Palette::getColorCount() const
{
    return this->_colors.size();
}

colors::ColorMap* colors::Palette::getColor(std::size_t index) const
{
    if (index < 0 || index >= getColorCount())
    {
        throw std::out_of_range("O valor " + std::to_string(index) + " excede os limites do vetor!");
    }
    return this->_colors[index];
}

void colors::Palette::pushBackColorMap(colors::ColorMap& colorMap)
{
    this->_colors.push_back(&colorMap);
}

colors::ColorMap* colors::Palette::popBackColorMap()
{
    colors::ColorMap* result = getColor(getColorCount()-1);
    this->_colors.pop_back();
    return result;
}