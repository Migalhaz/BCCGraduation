#pragma once
#include "Color.hpp"

namespace colors
{
    /**
     * @class ColorMap
     * @brief Representa uma cor associada a um valor de altura, usada para criar paletas de cores.
     * Herda as propriedades RGB da classe Color.
    */
    class ColorMap : public Color
    {
        private:
            double _height = 0;

        public:
            /**
             * @brief Constrói um mapa de cor com valores RGB e uma altura específica.
             * @param r Componente vermelho da cor.
             * @param g Componente verde da cor.
             * @param b Componente azul da cor.
             * @param height A altura (normalizada entre 0 e 1) associada a esta cor.
            */
            ColorMap(int r, int g, int b, double height);
            
            /**
             * @brief Retorna a altura associada a este mapa de cor.
             * @return O valor da altura (double).
            */
            double getHeight() const;
    };
}
