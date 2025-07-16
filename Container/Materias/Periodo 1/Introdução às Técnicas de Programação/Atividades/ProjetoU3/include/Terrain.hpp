#pragma once
#include <math.h>
#include <vector>
#include <algorithm>

#include "RandomGenerator.hpp"

namespace terrain
{
    class Terrain
    {
        private:
            int _size;
            std::vector<std::vector<double>> _terrainMatrix;
            terrain::RandomGenerator _randomGenerator;

            void generateRecursiveTerrain(long long step, double displace, double rought);
            
            void diamondStep(long long step, double displace);
            void squareStep(long long step, double displace);

            void normalizeTerrain();
            
        public:
            Terrain(int size);
            ~Terrain() = default;

            const long long getSize() const;
            const double getHeight(long long lin, long long col) const;
            const std::vector<std::vector<double>>& getTerrainMatrix() const;

            void generateTerrain(double displace, double rought);
    };
}