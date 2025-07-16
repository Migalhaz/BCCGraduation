#include "Menus.hpp"
#include "FileManager.hpp"

settings::ProgramSettings menu::_CurrentSettings = settings::ProgramSettings();

void menu::clearConsole()
{
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

void menu::awaitInput()
{
    #ifdef _WIN32
        system("pause");
    #else
        std::cin.clear();
        std::cout << "Pressione enter para continuar...\n";
        std::cin.get();
        std::cin.ignore();
    #endif
}

void menu::startMenu()
{
    while(true)
    {
        clearConsole();
        std::cout << "=== MENU ===\n";
        std::cout << "[1] Configurações\n";
        std::cout << "[2] Gerar terreno em Gray Scale\n";

        if (_CurrentSettings.getPalette().getColorCount() > 0)
        {
            std::cout << "[3] Gerar terreno pintado\n";
        }
        std::cout << "[q] Sair\n";
        std::cout << "Escolha uma opção: ";

        char input;
        std::cin >> input;

        if (input == 'q' || input == 'Q')
        {
            clearConsole();
            break;
        }
        else if (input == '1')
        {
            menu::settingsMenu();
        }
        else if (input == '2')
        {
            clearConsole();

            std::cout << "Insira o caminho para salvar o arquivo de imagem: \n";
            std::string resultfilePath;
            std::cin >> resultfilePath;
            if (resultfilePath.empty())
            {
                std::cout << "Caminho especificado inválido!\nOperação abortada!\n";
            }
            else
            {
                terrain::Terrain terrain = terrain::Terrain(_CurrentSettings.getTerrainSize());
                terrain.generateTerrain(100, _CurrentSettings.getRough());

                colors::Image imageResult = FileManager::GenerateGrayScaleTerrainImage(terrain);
                FileManager::ExportImage(imageResult, resultfilePath);
            }
            awaitInput();
        }
        else if (input == '3' && _CurrentSettings.getPalette().getColorCount() > 0)
        {
            clearConsole();

            std::cout << "Insira o caminho para salvar o arquivo de imagem: \n";
            std::string resultfilePath;
            std::cin >> resultfilePath;
            if (resultfilePath.empty())
            {
                std::cout << "Caminho especificado inválido!\nOperação abortada!\n";
            }
            else
            {
                terrain::Terrain terrain = terrain::Terrain(_CurrentSettings.getTerrainSize());
                terrain.generateTerrain(100, _CurrentSettings.getRough());

                colors::Image imageResult = FileManager::GeneratePaintedTerrainImage(terrain, _CurrentSettings.getPalette());
                FileManager::ExportImage(imageResult, resultfilePath);
            }
            awaitInput();
        }
    }

}

void menu::settingsMenu()
{
    while(true)
    {
        clearConsole();
        std::cout << "=== Configurações ===\n";
        std::cout << "[1] Definir tamanho da imagem: " << _CurrentSettings.getTerrainSize() << '\n';
        std::cout << "[2] Definir rugosidade: " << _CurrentSettings.getRough() << '\n';
        std::cout << "[3] Definir paleta\n";

        char activeSetting = _CurrentSettings.getShadowSetting() ? 'x' : ' ';
        std::cout << "[4] Definir imagem com sombra: [" << activeSetting << "]\n";
        
        if (_CurrentSettings.getShadowSetting())
        {
            std::cout << "[5] Definir intensidade da sombra: " << _CurrentSettings.getShadowIntensity() << '\n';
        }
        std::cout << "[q] Sair\n";
        std::cout << "Escolha uma opção: ";
    
        char input;
        std::cin >> input;

        if (input == 'q' || input == 'Q')
        {
            break;
        }
        else if (input == '1')
        {
            clearConsole();
            std::cout << "Tamanho da imagem atual: " << _CurrentSettings.getTerrainSize() << '\n';
            std::cout << "Insira um número inteiro entre 1 e 13!\n";
            
            int value;
            std::cin >> value;
            if (value >= 1 && value <= 13)
            {
                _CurrentSettings.setTerrainSize(value);
                std::cout << "Valor definido com sucesso!\n";
            }
            else
            {
                std::cout << "O valor inserido está fora dos limites!\nOperação abortada!\n";
            }
            awaitInput();
        }
        else if (input == '2')
        {
            clearConsole();
            std::cout << "Rugosidade atual: " << _CurrentSettings.getRough() << '\n';
            std::cout << "Insira um valor real!\n";

            double value;
            std::cin >> value;
            _CurrentSettings.setRough(value);
            std::cout << "Valor definido com sucesso!\n";
            awaitInput();
        }
        else if (input == '3')
        {
            clearConsole();
            std::cout << "Insira o caminho para o arquivo de paleta!\n";
            std::string paletteFilePath;
            std::cin >> paletteFilePath;
            _CurrentSettings.setPalette(FileManager::GeneratePalleteFromFile(paletteFilePath));
            std::cout << "Valor definido com sucesso!\n";
            awaitInput();
        }
        else if (input == '4')
        {
            _CurrentSettings.setShadowImage(!_CurrentSettings.getShadowSetting());
        }
        else if (input == '5' && _CurrentSettings.getShadowSetting())
        {
            clearConsole();
            std::cout << "Intensidade de sombra atual: " << _CurrentSettings.getShadowIntensity() << '\n';
            std::cout << "Insira um valor real entre 0 e 1!\n";
            double value;
            std::cin >> value;

            if (value >= 0 && value <= 1)
            {
                _CurrentSettings.setShadowIntensity(value);
                std::cout << "Valor definido com sucesso!\n";
            }
            else 
            {
                std::cout << "O valor inserido está fora dos limites!\nOperação abortada!\n";
            }
            awaitInput();
        }
    }
}