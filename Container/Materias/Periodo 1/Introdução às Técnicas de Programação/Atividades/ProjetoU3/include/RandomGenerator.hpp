#pragma once
#include <random>

namespace terrain
{
    class RandomGenerator
    {
        private:
            std::mt19937 _generator;
        
        public:
            RandomGenerator();
            int getRandomInt(int minValue, int maxValue);
            double getRandomDouble(double minValue, double maxValue);

    };
}