#include <iostream>
#include <vector>
#include "include/fibonacci.hpp"

int main()
{
    int n, opcion;
    std::cout << "Introduce el valor de n: ";
    std::cin >> n;

    std::cout << "Elige el metodo para calcular Fibonacci:\n";
    std::cout << "1. Recursivo\n2. Tabulacion\n3. Tabulacion Optimizada\n4. Memorizacion\nOpcion: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1:
        std::cout << "fib(" << n << ") = " << fib(n) << "\n";
        break;
    case 2:
        std::cout << "fib_tab(" << n << ") = " << fib_tab(n) << "\n";
        break;
    case 3:
        std::cout << "fib_tab_opt(" << n << ") = " << fib_tab_opt(n) << "\n";
        break;
    case 4:
    {
        std::vector<long long> memo(n + 1, -1);
        std::cout << "fib_mem(" << n << ") = " << fib_mem(n, memo) << "\n";
        break;
    }
    default:
        std::cout << "Opción no valida.\n";
        break;
    }

    return 0;
}
