#include <iostream>

// Recursive function to calculate the sum of digits of a number
int sumOfDigits(int n) {
    // Base case: if n is a single-digit number, return n
    if (n < 10) {
        return n;
    } else {
        // Recursive case: sum = last digit + sum of digits in the remaining part
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    // Example of sum of digits calculation
    int number = 12345;
    std::cout << "Sum of digits of " << number << " is: " << sumOfDigits(number) << std::endl;

    return 0;
}
