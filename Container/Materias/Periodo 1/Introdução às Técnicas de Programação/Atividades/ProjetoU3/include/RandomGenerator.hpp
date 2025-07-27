#pragma once
#include <random>

namespace terrain
{
    /**
     * @class RandomGenerator
     * @brief Classe auxiliar para gerar números aleatórios de alta qualidade.
     * Encapsula a complexidade da biblioteca <random> do C++11.
    */
    class RandomGenerator
    {
        private:
            std::mt19937 _generator;
        
        public:
            /**
             * @brief Construtor que inicializa e semeia o motor de números aleatórios.
            */
            RandomGenerator();
            /**
             * @brief Gera um número inteiro aleatório dentro de um intervalo inclusivo.
             * @param minValue O valor mínimo possível.
             * @param maxValue O valor máximo possível.
             * @return Um inteiro aleatório no intervalo [minValue, maxValue].
            */
            int getRandomInt(int minValue, int maxValue);
            /**
             * @brief Gera um número de ponto flutuante aleatório dentro de um intervalo.
             * @param minValue O valor mínimo possível.
             * @param maxValue O valor máximo possível.
             * @return Um double aleatório no intervalo [minValue, maxValue].
            */
            double getRandomDouble(double minValue, double maxValue);

    };
}
