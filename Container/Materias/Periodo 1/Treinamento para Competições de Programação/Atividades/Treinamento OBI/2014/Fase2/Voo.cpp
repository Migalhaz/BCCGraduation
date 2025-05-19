#include <bits/stdc++.h>
using namespace std;

void SetHourAndMin(string str, int& hora, int& minuto)
{
    hora = stoi(str.substr(0, 2));
    minuto = stoi(str.substr(3, 2));
}

int main()
{
    string horarios[4];
    for (int i = 0; i < 4; ++i)
    {
        cin >> horarios[i];
    }

    int h_pA, m_pA;
    SetHourAndMin(horarios[0], h_pA, m_pA);
    int t_pA = m_pA + (h_pA * 60);

    int h_cB, m_cB;
    SetHourAndMin(horarios[1], h_cB, m_cB);
    int t_cB = m_cB + (h_cB * 60);

    int h_pB, m_pB;
    SetHourAndMin(horarios[2], h_pB, m_pB);
    int t_pB = m_pB + (h_pB * 60);

    int h_cA, m_cA;
    SetHourAndMin(horarios[3], h_cA, m_cA);
    int t_cA = m_cA + (h_cA * 60);

    double flyDurationInMinutes = (t_cB + t_cB - t_pA - t_pB) * 0.5;
    double delta = (t_cB - t_pA - flyDurationInMinutes);
    cout << flyDurationInMinutes << ' ' << delta << '\n';

    return 0;
}