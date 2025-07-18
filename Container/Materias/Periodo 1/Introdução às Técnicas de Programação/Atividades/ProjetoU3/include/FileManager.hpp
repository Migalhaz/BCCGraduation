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
    /**
     * @brief Lê um arquivo de texto e gera um objeto de paleta de cores.
     * @param filePath O caminho para o arquivo de paleta a ser lido.
     * @return Um objeto colors::Palette preenchido com os dados do arquivo.
    */
    colors::Palette GeneratePalleteFromFile(const std::string& filePath);
    /**
     * @brief Salva um objeto Image em um arquivo no formato PPM (P3).
     * @param image O objeto Image a ser salvo.
     * @param filePath O caminho do arquivo .ppm onde a imagem será salva.
    */
    void ExportImage(const colors::Image& image, const std::string& filePath);

    /**
     * @brief Gera uma imagem em escala de cinza a partir de um objeto de terreno.
     * @param terrain O terreno com as altitudes normalizadas.
     * @return Um objeto colors::Image representando o terreno em escala de cinza.
    */
    colors::Image GenerateGrayScaleTerrainImage(const terrain::Terrain& terrain);
    /**
     * @brief Gera uma imagem colorida a partir de um terreno e uma paleta de cores.
     * @param terrain O terreno com as altitudes normalizadas.
     * @param palette A paleta de cores a ser usada para pintar o terreno.
     * @return Um objeto colors::Image representando o terreno colorido.
    */
    colors::Image GeneratePaintedTerrainImage(const terrain::Terrain& terrain, const colors::Palette& palette);
}
