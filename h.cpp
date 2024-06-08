#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base cases for n = 1 and n = 2
    if (n == 1 || n == 2)
        return 1;

    // Recursive case for n > 2
    return fibonacci(n - 1) + fibonacci(n - 2);
}