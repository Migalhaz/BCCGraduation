#include "Palette.hpp"

colors::Palette::Palette()
{
    this->_colors = std::vector<colors::ColorMap*>();
}

std::size_t colors::Palette::getColorCount()
{
    return this->_colors.size();
}

colors::ColorMap* colors::Palette::getColor(int index)
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