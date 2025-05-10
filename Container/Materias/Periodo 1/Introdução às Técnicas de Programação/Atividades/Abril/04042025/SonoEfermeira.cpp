#include <iostream>

int main()
{
    int horaUm;
    int minutosUm;
    int horaDois;
    int minutosDois;

    std::cin >> horaUm;
    std::cin >> minutosUm;
    std::cin >> horaDois;
    std::cin >> minutosDois;

    int intervaloDeHoras = (horaDois - horaUm);
    int intervaloDeMinutos = (minutosDois - minutosUm);

    int intervaloTotalEmMinutos = intervaloDeHoras * 60 + intervaloDeMinutos;
    std::cout << intervaloTotalEmMinutos << "\n";

    return 0;
}