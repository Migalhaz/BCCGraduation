#pragma once
#include <iostream>
#include <vector>
#include <string>

struct Color
{
    short R, G, B = 0;

    Color(short r = 0, short g = 0, short b = 0)
    {
        this->R = r;
        this->G = g;
        this->B = b;
    }

    friend std::ostream& operator<<(std::ostream& out, const Color& color);
};

std::ostream& operator<<(std::ostream& out, const Color& color)
{
    return out << '(' << color.R << ' ' << color.G << ' ' << color.B << ')';
}

struct ColorMap
{
    Color color;
    double height;
};

class Palette
{
    public:
        void SetColorCount(int newCount)
        {
            this->colorCount = newCount;
        }

        int GetColorCount()
        {
            return this->colorCount;
        }
        ColorMap GetColorMap(int index)
        {
            if (index < 0 || index >= GetColorCount())
            {
                throw std::out_of_range("Index out of range");
            }
            return this->colors[index];
        }

        ColorMap AddColor(double height, Color color)
        {
            ColorMap newColor = {color, height};
            colors.push_back(newColor);
            ++this->colorCount;
            return newColor;
        }

        ColorMap PopBackColor()
        {
            ColorMap newColor = GetColorMap(GetColorCount() - 1);
            colors.pop_back();
            return newColor;
        }

    private: 
        int colorCount;
        std::vector<ColorMap> colors;
};

Palette SetupPaleteFromFile(const std::string& filePath)
{
    Palette newPalette;
    
    std::ifstream file;
    file.open(filePath);

    if (!file.is_open())
    {
        return newPalette;
    }

    std::string colorCount;
    std::getline(file, colorCount);
    newPalette.SetColorCount(std::stoi(colorCount));

    std::string newLine;
    while(std::getline(file, newLine))
    {
        std::cout << newLine << '\n';
    }

    file.close();
    return newPalette;
}