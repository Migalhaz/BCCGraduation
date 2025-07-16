#include "Terrain.hpp"

terrain::Terrain::Terrain(int size)
:_size(size), _randomGenerator(terrain::RandomGenerator())
{
    long long finalSize = this->getSize(); 
    _terrainMatrix.resize(finalSize, std::vector<double>(finalSize, 0));
}

const long long terrain::Terrain::getSize() const
{
    return (1LL << this->_size) + 1;
}



const std::vector<std::vector<double>>& terrain::Terrain::getTerrainMatrix() const{
    return this->_terrainMatrix;
}

const double terrain::Terrain::getHeight(long long lin, long long col) const
{
    return getTerrainMatrix()[lin][col];
}

void terrain::Terrain::generateTerrain(double displace, double rough)
{
    long long initialStep = this->getSize() - 1;

    this->_terrainMatrix[0][0] = _randomGenerator.getRandomDouble(-displace, displace);
    this->_terrainMatrix[0][initialStep] = _randomGenerator.getRandomDouble(-displace, displace);
    this->_terrainMatrix[initialStep][0] = _randomGenerator.getRandomDouble(-displace, displace);
    this->_terrainMatrix[initialStep][initialStep] = _randomGenerator.getRandomDouble(-displace, displace);

    generateRecursiveTerrain(initialStep, displace, rough);
}

void terrain::Terrain::generateRecursiveTerrain(long long step, double displace, double rought)
{
    if (step <= 1)
    {
        this->normalizeTerrain();
        return;
    }

    diamondStep(step, displace);
    squareStep(step, displace);

    generateRecursiveTerrain(step / 2, displace * rought, rought);
}

void terrain::Terrain::diamondStep(long long step, double displace)
{
    long long halfStep = step / 2;
    long long matrixSize = this->getSize();

    for (long long y = 0; y < matrixSize - 1; y += step)
    {
        for (long long x = 0; x < matrixSize - 1; x += step)
        {
            double leftUp = this->_terrainMatrix[y][x];
            double rightUp = this->_terrainMatrix[y][x + step];
            double leftDown = this->_terrainMatrix[y + step][x];
            double rightDown = this->_terrainMatrix[y + step][x + step];

            double med = (leftUp + rightUp + leftDown + rightDown) / 4;
            double randomValue = _randomGenerator.getRandomDouble(-displace, displace);
            double newValue = med + randomValue;

            this->_terrainMatrix[y + halfStep][x + halfStep] = newValue;
        }
    }
}

void terrain::Terrain::squareStep(long long step, double displace)
{
    long long halfStep = step / 2;
    long long matrixSize = this->getSize();

    for (long long y = 0; y <  matrixSize; y += halfStep)
    {
        long long startX = ((y / halfStep) % 2 == 0) ? halfStep : 0;
        for (long long x = startX; x < matrixSize; x += step)
        {
            double sum = 0;
            int count = 0;

            if (y >= halfStep) 
            {
                sum += this->_terrainMatrix[y - halfStep][x];
                ++count;
            }
            if (y + halfStep < matrixSize) 
            {
                sum += this->_terrainMatrix[y + halfStep][x];
                ++count;
            } 
            if (x >= halfStep) 
            {
                sum += this->_terrainMatrix[y][x - halfStep];
                ++count;
            }
            if (x + halfStep < matrixSize) 
            {
                sum += this->_terrainMatrix[y][x + halfStep];
                ++count;
            }

            if (count > 0)
            {
                double med = sum / count;
                double randomValue = _randomGenerator.getRandomDouble(-displace, displace);
                double newValue = med + randomValue;

                this->_terrainMatrix[y][x] = newValue;
            }
        }
    }
}

void terrain::Terrain::normalizeTerrain()
{
    long long matrixSize = this->getSize();
    
    double minHeight = this->getHeight(0, 0);
    double maxHeight = this->getHeight(0, 0);
    for (long long y = 0; y < matrixSize; ++y)
    {
        for (long long x = 0; x < matrixSize; ++x)
        {
            minHeight = std::min(minHeight, this->getHeight(y, x));
            maxHeight = std::max(maxHeight, this->getHeight(y, x));
        }
    }

    double range = maxHeight - minHeight;
    if (range == 0) range = 1;

    for (long long y = 0; y < matrixSize; ++y)
    {
        for (long long x = 0; x < matrixSize; ++x)
        {
            double normalizedValue = (this->_terrainMatrix[y][x] - minHeight) / range;
            this->_terrainMatrix[y][x] = normalizedValue;
        }
    }
}