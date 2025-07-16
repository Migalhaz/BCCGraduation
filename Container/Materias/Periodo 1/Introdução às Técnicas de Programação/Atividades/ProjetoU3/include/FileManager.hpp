#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Palette.hpp"
#include "Image.hpp"
#include "Terrain.hpp"
#include "Menus.hpp"

namespace FileManager
{
    colors::Palette GeneratePalleteFromFile(const std::string& filePath);
    void ExportImage(const colors::Image& image, const std::string& filePath);

    colors::Image GenerateGrayScaleTerrainImage(const terrain::Terrain& terrain);
    colors::Image GeneratePaintedTerrainImage(const terrain::Terrain& terrain, const colors::Palette& palette);
}