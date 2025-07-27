#pragma once
#include "Color.hpp"

namespace colors
{
    /**
     * @class Image
     * @brief Representa uma imagem 2D como uma matriz de objetos Color.
     * @warning Esta implementação usa alocação de memória manual (`new`/`delete`) e é suscetível a erros
     * se não for manuseada com cuidado, especialmente em relação a cópias (Regra dos Três/Cinco).
    */
    class Image
    {
        private:
            unsigned int _x; // Largura da imagem
            unsigned int _y; // Altura da imagem

            // Matriz interna armazenada como [coluna][linha]
            colors::Color** _colorMatrix;

        public:
            /**
             * @brief Constrói uma imagem com as dimensões especificadas (largura, altura).
             * @param x A largura (número de colunas) da imagem.
             * @param y A altura (número de linhas) da imagem.
            */
            Image(unsigned int x, unsigned int y);
            /**
             * @brief Destrutor que libera a memória alocada dinamicamente para a matriz de cores.
            */
            ~Image();
            
            /**
             * @brief Retorna a largura da imagem (dimensão X).
             * @return A largura da imagem em pixels.
            */
            unsigned int getX() const;
            /**
             * @brief Retorna a altura da imagem (dimensão Y).
             * @return A altura da imagem em pixels.
            */
            unsigned int getY() const;
            
            /**
             * @brief Retorna um ponteiro bruto para a matriz de cores interna.
             * @return Um ponteiro para ponteiro (Color**) para a matriz de cores.
            */
            colors::Color** getColorMatrix() const;

            /**
             * @brief Retorna a cor em uma coordenada específica (x, y).
             * @param x A coordenada da coluna (horizontal).
             * @param y A coordenada da linha (vertical).
             * @return Uma referência para o objeto Color na coordenada especificada.
            */
            colors::Color& getColor(const int& x, const int& y) const;

            /**
             * @brief Define a cor de um pixel em uma coordenada específica (x, y).
             * @param color O novo objeto Color a ser definido.
             * @param x A coordenada da coluna (horizontal).
             * @param y A coordenada da linha (vertical).
            */
            void setColor(const Color& color, const int& x, const int& y);
    };
}
