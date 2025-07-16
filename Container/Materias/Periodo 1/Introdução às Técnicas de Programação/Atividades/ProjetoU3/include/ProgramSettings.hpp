#pragma once
#include "Palette.hpp"

namespace settings
{
    class ProgramSettings
    {
        private:
            bool _shadowImage = true;
            double _shadowIntensity = 0.9;
            int _terrainSize = 10;
            double _rough = 0.5;

            colors::Palette _currentPalette;
        
        public:
            ProgramSettings();
            ~ProgramSettings();

            const bool getShadowSetting() const;
            const double& getShadowIntensity() const;
            const colors::Palette& getPalette() const;
            const int getTerrainSize() const;
            const double& getRough() const;

            void setPalette(const colors::Palette& newPalette);
            void setShadowIntensity(const double& newIntensity);
            void setShadowImage(const bool newShadow);
            void setTerrainSize(const int terrainSize);
            void setRough(const double& newRough);
    };
}