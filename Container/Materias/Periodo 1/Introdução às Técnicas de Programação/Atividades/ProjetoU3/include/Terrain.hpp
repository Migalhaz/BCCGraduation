#pragma once
#include <random>
#include <math.h>
#include <vector>

namespace terrain
{
    class Terrain
    {
        private:
            int _size;
            std::vector<std::vector<double>> _terrainMatrix;

        public:
            Terrain(int size);
            ~Terrain();

            long long getSize() const;

            void generateTerrain(double rought);
            void diamondStep(long long step, double displace);
            void squareStep(long long step, double displace);
    };
}