#include <iostream>
#include "MyMath.h"
#include "ConsoleHandler.h"

void ExplainFloor()
{

}

void ExplainCeil()
{

}

void ShowFloorExample()
{
    ClearConsole();
    ExplainFloor();
    double input;
    GetInput(input, "Insira um valor quebrado: ");
    double result = MyMath::Floor(input);
    std::cout << "O resultado da operacao eh: " << result << '\n';
    AwaitInput();
}

void ShowCeilExample()
{
    ClearConsole();
    ExplainCeil();
    double input;
    GetInput(input, "Insira um valor quebrado: ");
    double result = MyMath::Ceil(input);
    std::cout << "O resultado da operacao eh: " << result << '\n';
    AwaitInput();
}