#include "Terrain.hpp"

terrain::Terrain::Terrain(int size)
:_size(size)
{
    long long finalSize = this->getSize(); 
    _terrainMatrix.resize(finalSize, std::vector<double>(finalSize, 0));
}

long long terrain::Terrain::getSize() const
{
    return std::pow(2, this->_size) + 1;
}

void terrain::Terrain::generateTerrain(double rough)
{
    long long size = this->getSize();
    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    double displace = 100;

    this->_terrainMatrix[0][0] = std::uniform_real_distribution<double>(-displace, displace)(generator);
    this->_terrainMatrix[0][size-1] = std::uniform_real_distribution<double>(-displace, displace)(generator);
    this->_terrainMatrix[size-1][0] = std::uniform_real_distribution<double>(-displace, displace)(generator);
    this->_terrainMatrix[size-1][size-1] = std::uniform_real_distribution<double>(-displace, displace)(generator);

    for (long long step = size; step > 1; step /= 2)
    {
        displace *= rough;

        diamondStep(step, displace);
        squareStep(step, displace);
    }
}