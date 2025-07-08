#include "FileManager.hpp"

int main()
{    
    std::string filePath;
    std::cout << "Insira o caminho do arquivo a ser inscrito: ";
    std::cin >> filePath;

    int maxX = 14;
    int maxY = 9;

    colors::Image image(maxX, maxY);

    colors::Color blue(0, 0, 255);
    colors::Color white(255, 255, 255);
    colors::Color red(255, 0, 0);

    std::cout << "Gerando imagem!\n";
    for (int x = 0; x < maxX; ++x)
    {
        for(int y = 0; y < maxY; ++y)
        {
            colors::Color *currentColor = nullptr;
            
            if (y < 3)
            {
                currentColor = &red;
            }
            else if (y < 6)
            {
                currentColor = &white;
            }
            else
            {
                currentColor = &blue;
            }
            std::cout << "Cor para: " << x << ":" << y << " = ";
            std::cout << (*currentColor).getR() << ' ' << (*currentColor).getG() << ' ' << (*currentColor).getB() <<'\n';
            image.setColor(*currentColor, x, y);
        }
    }

    std::cout << "Salvando arquivo!\n";
    FileManager::ExportImage(image, filePath);

    system("pause");
    return 0;
}