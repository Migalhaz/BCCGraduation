#pragma once
#include "Palette.hpp"

namespace settings
{
    /**
     * @class ProgramSettings
     * @brief Armazena todas as configurações do programa que podem ser modificadas pelo usuário.
    */
    class ProgramSettings
    {
        private:
            bool _shadowImage = true;
            double _shadowIntensity = 0.9;
            int _terrainSize = 10;
            double _rough = 0.5;
            colors::Palette _currentPalette;
        
        public:
            /**
             * @brief Construtor padrão que inicializa as configurações com valores default.
            */
            ProgramSettings();
            /**
             * @brief Destrutor padrão.
            */
            ~ProgramSettings();

            /**
             * @brief Retorna se a opção de sombra está ativa.
             * @return Verdadeiro se a sombra estiver ativa, falso caso contrário.
            */
            const bool getShadowSetting() const;
            /**
             * @brief Retorna a intensidade da sombra.
             * @return O fator de intensidade da sombra (0 a 1).
            */
            const double& getShadowIntensity() const;
            /**
             * @brief Retorna a paleta de cores atual.
             * @return Uma referência constante para o objeto Palette atual.
            */
            const colors::Palette& getPalette() const;
            /**
             * @brief Retorna o tamanho do terreno (valor N).
             * @return O valor N para o cálculo do tamanho do terreno.
            */
            const int getTerrainSize() const;
            /**
             * @brief Retorna o fator de rugosidade do terreno.
             * @return O valor da rugosidade.
            */
            const double& getRough() const;

            /**
             * @brief Define uma nova paleta de cores.
             * @param newPalette O novo objeto Palette a ser definido.
            */
            void setPalette(const colors::Palette& newPalette);
            /**
             * @brief Define uma nova intensidade para a sombra.
             * @param newIntensity O novo valor de intensidade (0 a 1).
            */
            void setShadowIntensity(const double& newIntensity);
            /**
             * @brief Ativa ou desativa a geração de sombra na imagem.
             * @param newShadow O novo estado da opção de sombra.
            */
            void setShadowImage(const bool newShadow);
            /**
             * @brief Define um novo tamanho para o terreno.
             * @param terrainSize O novo valor N para o tamanho do terreno.
            */
            void setTerrainSize(const int terrainSize);
            /**
             * @brief Define um novo fator de rugosidade para o terreno.
             * @param newRough O novo valor de rugosidade.
            */
            void setRough(const double& newRough);
    };
}
