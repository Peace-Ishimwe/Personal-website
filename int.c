#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 2;
    int fib = fibonacci(n);
    
    printf("The 10th value of the Fibonacci series is: %d\n", fib);
    
    return 0;
}
