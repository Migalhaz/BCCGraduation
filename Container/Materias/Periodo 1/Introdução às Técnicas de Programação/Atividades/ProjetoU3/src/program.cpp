#include "FileManager.hpp"

int main()
{    
    std::string filePath;
    std::cout << "Insira o caminho do arquivo a ser inscrito: ";
    std::cin >> filePath;

    int maxX = 3;
    int maxY = 2;

    colors::Image image(3, 2);

    colors::Color blue(0, 0, 255);
    colors::Color white(255, 255, 255);
    colors::Color red(255, 0, 0);

    std::cout << "Gerando imagem!\n";
    for (int x = 0; x < maxX; ++x)
    {
        for(int y = 0; y < maxY; ++y)
        {
            colors::Color *currentColor = nullptr;
            switch (x)
            {
            case 0:
                currentColor = &blue;
                break;
            case 1:
                currentColor = &white;
                break;
            case 2:
                currentColor = &red;
                break;
            default:
                break;
            }

            colors::Color a = *currentColor;
            std::cout << "Cor para: " << x << ":" << y << " = ";
            std::cout << a.getR() << ' ' << a.getG() << ' ' << a.getB() <<'\n';

            image.setColor(a, x, y);
        }
    }

    std::cout << "Salvando arquivo!\n";
    FileManager::ExportImage(image, filePath);

    system("pause");
    return 0;
}