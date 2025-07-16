#pragma once
#include "ProgramSettings.hpp"

namespace menu
{
    extern settings::ProgramSettings _CurrentSettings;
    void clearConsole();
    void awaitInput();
    void startMenu();
    void settingsMenu();
}