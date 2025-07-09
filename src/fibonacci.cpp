#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int fib_tab(int n) {
    if (n <= 1) return n;
    vector<int> table(n + 1, 0);
    table[0] = 0;
    table[1] = 1;
    for (int i = 2; i <= n; i++) {
        table[i] = table[i - 1] + table[i - 2];
    }
    return table[n];
}
//ahorramos coste espacial a cambio de perder la solucion a los subproblemas en un vector
int fib_tab_opt(int n)
{
    if (n <= 1)
        return n;
    int prev2 = 0, prev1 = 1, current;
    for (int i = 2; i <= n; ++i)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

long long fib_mem(int n, vector<long long> &memo) {
    if(memo[n] != -1)
        return memo[n];
    if(n <= 1)
        memo[n] = n;
    else
        memo[n] = fib_mem(n - 1, memo) + fib_mem(n - 2, memo);
    return memo[n];
}
