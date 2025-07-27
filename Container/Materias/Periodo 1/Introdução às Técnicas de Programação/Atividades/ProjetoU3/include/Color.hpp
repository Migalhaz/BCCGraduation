#pragma once
#include <ostream>

namespace colors
{
    /**
     * @class Color
     * @brief Representa uma cor no formato RGB (Red, Green, Blue).
    */
    class Color
    {
        protected:
            int _r = 0;
            int _g = 0;
            int _b = 0;

        public:
            /**
             * @brief Construtor padrão que cria uma cor preta (0, 0, 0).
            */
            Color();
            /**
             * @brief Constrói uma cor com os valores RGB especificados.
             * @param r Componente vermelho da cor (0-255).
             * @param g Componente verde da cor (0-255).
             * @param b Componente azul da cor (0-255).
            */
            Color(int r, int g, int b);
            
            /**
             * @brief Retorna o componente vermelho (R) da cor.
             * @return O valor inteiro do componente vermelho.
            */
            int getR() const;
            /**
             * @brief Retorna o componente verde (G) da cor.
             * @return O valor inteiro do componente verde.
            */
            int getG() const;
            /**
             * @brief Retorna o componente azul (B) da cor.
             * @return O valor inteiro do componente azul.
            */
            int getB() const;
            
            /**
             * @brief Define ou atualiza os valores RGB da cor.
             * @param r O novo componente vermelho.
             * @param g O novo componente verde.
             * @param b O novo componente azul.
            */
            void setRGB(int r = 0,int g = 0, int b = 0);

            /**
             * @brief Sobrecarga do operador de inserção para imprimir a cor em um stream.
             * @param out O stream de saída (ex: std::cout).
             * @param color A cor a ser impressa.
             * @return Uma referência para o stream de saída.
            */
            friend std::ostream& operator<<(std::ostream& out, const Color& color);
    };
}
