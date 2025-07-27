#pragma once
#include "ProgramSettings.hpp"

namespace menu
{
    /**
     * @brief Variável global externa para armazenar as configurações atuais do programa.
    */
    extern settings::ProgramSettings _CurrentSettings;

    /**
     * @brief Limpa a tela do console (compatível com Windows e Linux).
    */
    void clearConsole();
    /**
     * @brief Pausa a execução e aguarda que o usuário pressione uma tecla para continuar.
    */
    void awaitInput();
    /**
     * @brief Exibe e gerencia as interações do menu principal do programa.
    */
    void startMenu();
    /**
     * @brief Exibe e gerencia as interações do menu de configurações.
    */
    void settingsMenu();
}
