#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP
#include <vector>

int fib(int n);
int fib_tab(int n);
int fib_tab_opt(int n);
long long fib_mem(int n, std::vector<long long> &memo);

#endif
