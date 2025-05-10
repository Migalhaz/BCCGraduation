#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> sieve_of_eratosthenes(int n) {
    if (n < 2) return {};  // Não há primos menores que 2

    std::vector<bool> sieve(n + 1, true);  // Inicializa todos como primos
    sieve[0] = sieve[1] = false;           // 0 e 1 não são primos

    // Percorre até a raiz quadrada de n (otimização)
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (sieve[i]) {
            // Marca os múltiplos de i começando de i²
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }

    // Coleta os números primos
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (sieve[i]) primes.push_back(i);
    }

    return primes;
}

int main()
{
    int input;
    std::cin >> input;

    std::vector<int> primes = sieve_of_eratosthenes(input);

    for(int n : primes)
    {
        std::cout << n << ' ';
    }

    return 0;
}