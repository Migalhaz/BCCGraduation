#pragma once
#include <iostream>
#include <vector>
#include "ColorMap.hpp"

namespace colors
{
    /**
     * @class Palette
     * @brief Armazena uma coleção de objetos ColorMap para representar uma paleta de cores de terreno.
    */
    class Palette
    {
        private:
            std::vector<ColorMap> _colors; 

        public:
            /**
             * @brief Construtor padrão que cria uma paleta de cores vazia.
            */
            Palette();
            /**
             * @brief Constrói uma paleta a partir de um array de ColorMaps.
             * @param size O número de elementos no array de cores.
             * @param colors O array de objetos ColorMap.
            */
            Palette(int& size, ColorMap colors[]);
            /**
             * @brief Destrutor padrão.
            */
            ~Palette() = default;

            /**
             * @brief Retorna a quantidade de cores na paleta.
             * @return O número de ColorMaps armazenados.
            */
            const std::size_t getColorCount() const;
            /**
             * @brief Retorna um ColorMap em um índice específico.
             * @param index O índice da cor a ser recuperada.
             * @return O objeto ColorMap no índice especificado.
            */
            const ColorMap getColor(std::size_t index) const;
            /**
             * @brief Encontra e retorna a cor apropriada para um determinado valor de altura.
             * @param height A altura (normalizada entre 0 e 1) a ser mapeada para uma cor.
             * @return O objeto ColorMap correspondente à altura.
            */
            const ColorMap getColorByHeight(double height) const;

            /**
             * @brief Adiciona um novo ColorMap ao final da paleta.
             * @param colorMap O mapa de cor a ser adicionado.
            */
            void pushBackColorMap(ColorMap& colorMap);
            /**
             * @brief Remove e retorna o último ColorMap da paleta.
             * @return O ColorMap que foi removido do final da paleta.
            */
            ColorMap popBackColorMap();
    };
}
