#include "FileManager.hpp"

colors::Palette FileManager::GeneratePalleteFromFile(const std::string& filePath)
{
    std::ifstream file(filePath);
    if (!file.good())
    {
        throw std::logic_error("Erro ao abrir arquivo: " + filePath);
    }

    std::string currentLine;
    std::getline(file, currentLine);
    int colorCount = std::stoi(currentLine);

    colors::Palette newPalette;

    for (int i = 0; i < colorCount; ++i)
    {
        std::getline(file, currentLine);
        
        int spaceIndex = currentLine.find(' ');
        std::string colorHeightString = currentLine.substr(0, spaceIndex);
        double newColorHeight = std::stod(colorHeightString);

        currentLine = currentLine.substr(spaceIndex+1, currentLine.size());
        spaceIndex = currentLine.find(' ');
        std::string rString = currentLine.substr(0, spaceIndex);
        int newR = std::stoi(rString);

        currentLine = currentLine.substr(spaceIndex+1, currentLine.size());
        spaceIndex = currentLine.find(' ');
        std::string gString = currentLine.substr(0, spaceIndex);
        int newG = std::stoi(gString);

        currentLine = currentLine.substr(spaceIndex+1, currentLine.size());
        spaceIndex = currentLine.find(' ');
        std::string bString = currentLine.substr(0, spaceIndex);
        int newB = std::stoi(bString);

        colors::ColorMap newColor(newR, newG, newB, newColorHeight);
        newPalette.pushBackColorMap(newColor);
    }

    file.close();
    return newPalette;
}

void FileManager::ExportImage(colors::Image image, const std::string& filePath)
{
    std::cout << "Esrevendo arquivo!\n";
    std::ofstream newFile(filePath);
    
    const std::string headerTitle = "P3\n";

    int xSize = image.getX();
    int ySize = image.getY();
    const std::string imageSize = std::to_string(xSize) + " " + std::to_string(ySize) + '\n';
    
    const std::string maxColorIntensity = "255\n";

    newFile << headerTitle;
    newFile << imageSize;
    newFile << maxColorIntensity;

    for (int x = 0; x < xSize; ++x)
    {
        for (int y = 0; y < ySize; ++y)
        {
            colors::Color currentColor = image.getColor(x, y);
            int r = currentColor.getR();
            int g = currentColor.getG();
            int b = currentColor.getB();

            newFile << r << " " << g << " " << b << '\n';
        }
    }

    newFile.close();
}