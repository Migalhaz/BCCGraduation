#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Palette.hpp"
#include "Image.hpp"


namespace FileManager
{
    colors::Palette GeneratePalleteFromFile(const std::string& filePath);
    void ExportImage(colors::Image image, const std::string& filePath);
}