#include <iostream>

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    // Example of factorial calculation
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    // Example of Fibonacci sequence
    int fibNum = 6;
    std::cout << "Fibonacci number at position " << fibNum << " is: " << fibonacci(fibNum) << std::endl;

    return 0;
}
