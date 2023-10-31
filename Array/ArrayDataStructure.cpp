#include <iostream>

int main() {
    // Declare and initialize an integer array
    int numbers[] = {12, 7, 23, 45, 9, 15, 30};

    // Calculate the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Print the array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Accessing elements
    int thirdElement = numbers[2];
    std::cout << "Third element: " << thirdElement << std::endl;

    // Find the maximum element
    int max = numbers[0];
    for (int i = 1; i < length; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}
