#include "ProgramSettings.hpp"

settings::ProgramSettings::ProgramSettings()
: _shadowIntensity(0.1), _currentPalette(), _shadowImage(false)
{

}

settings::ProgramSettings::~ProgramSettings()
{
    
}

const double& settings::ProgramSettings::getShadowIntensity() const
{
    return _shadowIntensity;
}

const colors::Palette& settings::ProgramSettings::getPalette() const
{
    return _currentPalette;
}

const bool settings::ProgramSettings::getShadowSetting() const
{
    return _shadowImage;
}

const int settings::ProgramSettings::getTerrainSize() const
{
    return _terrainSize;
}

const double& settings::ProgramSettings::getRough() const
{
    return _rough;
}


void settings::ProgramSettings::setPalette(const colors::Palette& newPalette)
{
    _currentPalette = newPalette;
}

void settings::ProgramSettings::setShadowIntensity(const double& newShadowIntensity)
{
    _shadowIntensity = newShadowIntensity;
}

void settings::ProgramSettings::setShadowImage(const bool value)
{
    _shadowImage = value;
}

void settings::ProgramSettings::setRough(const double& value)
{
    _rough = value;
}

void settings::ProgramSettings::setTerrainSize(const int value)
{
    _terrainSize = value;
}