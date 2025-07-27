#pragma once
#include <math.h>
#include <vector>
#include <algorithm>
#include "RandomGenerator.hpp"

namespace terrain
{
    /**
     * @class Terrain
     * @brief Gerencia a criação e manipulação de um mapa de altitudes (terreno) procedural.
     * Utiliza o algoritmo Diamond-Square para a geração.
    */
    class Terrain
    {
        private:
            int _size; // O valor 'N' para a fórmula de tamanho 2^N + 1
            std::vector<std::vector<double>> _terrainMatrix;
            terrain::RandomGenerator _randomGenerator;

            /**
             * @brief Função recursiva que orquestra as etapas Diamond e Square.
             * @param step O tamanho do passo atual, que define o nível de detalhe.
             * @param displace A magnitude do deslocamento aleatório a ser aplicado.
             * @param rought O fator de rugosidade para diminuir o deslocamento a cada recursão.
            */
            void generateRecursiveTerrain(long long step, double displace, double rought);
            
            /**
             * @brief Executa a etapa "Diamond" do algoritmo para um determinado passo.
             * @param step O tamanho do passo atual.
             * @param displace O deslocamento aleatório a ser aplicado.
            */
            void diamondStep(long long step, double displace);
            /**
             * @brief Executa a etapa "Square" do algoritmo para um determinado passo.
             * @param step O tamanho do passo atual.
             * @param displace O deslocamento aleatório a ser aplicado.
            */
            void squareStep(long long step, double displace);

            /**
             * @brief Normaliza todas as altitudes do terreno para o intervalo [0, 1].
            */
            void normalizeTerrain();
            
        public:
            /**
             * @brief Constrói um objeto de terreno.
             * @param size O valor N usado para calcular o tamanho da matriz (2^N + 1).
            */
            Terrain(int size);
            /**
             * @brief Destrutor padrão, a memória é gerenciada pelo std::vector.
            */
            ~Terrain() = default;

            /**
             * @brief Retorna o tamanho lateral da matriz do terreno (2^N + 1).
             * @return O tamanho da matriz do terreno.
            */
            const long long getSize() const;
            /**
             * @brief Retorna a altitude em uma coordenada específica (linha, coluna).
             * @param lin A coordenada da linha (vertical).
             * @param col A coordenada da coluna (horizontal).
             * @return O valor da altitude (double) na coordenada especificada.
            */
            const double getHeight(long long lin, long long col) const;
            /**
             * @brief Retorna uma referência constante para a matriz de altitudes interna.
             * @return Uma referência constante para o vetor de vetores de double.
            */
            const std::vector<std::vector<double>>& getTerrainMatrix() const;

            /**
             * @brief Inicia o processo de geração procedural do terreno.
             * @param displace O valor inicial de deslocamento aleatório.
             * @param rought O fator de rugosidade (0 a 1) para a geração.
            */
            void generateTerrain(double displace, double rought);
    };
}
