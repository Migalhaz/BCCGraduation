#include "RandomGenerator.hpp"

terrain::RandomGenerator::RandomGenerator()
: _generator(std::random_device()())
{

}

int terrain::RandomGenerator::getRandomInt(int minValue, int maxValue)
{
    std::uniform_int_distribution<int> distribution(minValue, maxValue);
    return distribution(_generator);
}

double terrain::RandomGenerator::getRandomDouble(double minValue, double maxValue)
{
    std::uniform_real_distribution<double> distribution(minValue, maxValue);
    return distribution(_generator);
}