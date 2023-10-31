#include <iostream>
#include <algorithm> // for sorting

int main() {
    // Declare and initialize an integer array
    int numbers[] = {12, 7, 23, 45, 9, 15, 30};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Print the original array
    std::cout << "Original array: ";
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Insert an element (e.g., 20) at a specific position (index 2)
    int insertValue = 20;
    int insertPosition = 2;
    for (int i = length; i > insertPosition; i--) {
        numbers[i] = numbers[i - 1];
    }
    numbers[insertPosition] = insertValue;

    // Print the updated array after insertion
    std::cout << "Array after insertion: ";
    for (int i = 0; i < length + 1; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Delete an element from a specific position (index 4)
    int deletePosition = 4;
    for (int i = deletePosition; i < length; i++) {
        numbers[i] = numbers[i + 1];
    }
    length--;

    // Print the array after deletion
    std::cout << "Array after deletion: ";
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Search for an element (e.g., 23)
    int searchValue = 23;
    int foundIndex = -1;
    for (int i = 0; i < length; i++) {
        if (numbers[i] == searchValue) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        std::cout << "Element " << searchValue << " found at index " << foundIndex << std::endl;
    } else {
        std::cout << "Element " << searchValue << " not found in the array" << std::endl;
    }

    // Sort the array in ascending order
    std::sort(numbers, numbers + length);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
