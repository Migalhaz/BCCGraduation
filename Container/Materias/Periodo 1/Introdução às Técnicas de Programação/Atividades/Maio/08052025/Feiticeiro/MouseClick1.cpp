#include <iostream>
#include <vector>

class Point
{
    public:
        int x;
        int y;
};

class MouseClick : Point
{
    public:

        using Point::x;
        using Point::y;
        char clickID;
        MouseClick(char id, int x, int y)
        {
            this->clickID = id;
            this->x = x;
            this->y = y;
        }
};

int main()
{
    int figurePointsCount;
    int mouseClickCount;

    std::cin >> figurePointsCount >> mouseClickCount;

    Point figurePoints[figurePointsCount];
    std::vector<MouseClick> clicksInside;

    for (int i = 0; i < figurePointsCount; ++i)
    {
        int x;
        int y;
        std::cin >> x >> y;
        
        Point newPoint = Point();
        newPoint.x = x;
        newPoint.y = y;

        figurePoints[i] = newPoint;
    }

    for (int i = 0; i < mouseClickCount; ++i)
    {
        char id;
        int x;
        int y;
        
        std::cin >> id >> x >> y;

        bool inImage = true;
        for (int pointIndex = 0; pointIndex < figurePointsCount; ++pointIndex)
        {
            Point currentPoint = figurePoints[pointIndex];
            int nextIndex = (pointIndex+1)%(figurePointsCount);
            Point nextPoint = figurePoints[nextIndex];



            int xDirectionToNextPoint = nextPoint.x - currentPoint.x;
            int yDirectionToNextPoint = nextPoint.y - currentPoint.y;

            int xDirectionToClick = x - currentPoint.x;
            int yDirectionToClick = y - currentPoint.y;

            int z = (xDirectionToNextPoint * yDirectionToClick) - (yDirectionToNextPoint * xDirectionToClick);
            if(z > 0)
            {
                inImage = false;
                break;
            }

        }
        if (inImage)
        {
            MouseClick inClick = MouseClick(id, x, y);
            clicksInside.push_back(inClick);
        }
    }
    for (MouseClick click : clicksInside)
    {
        std::cout << click.clickID << '\n';
    }

    return 0;
}