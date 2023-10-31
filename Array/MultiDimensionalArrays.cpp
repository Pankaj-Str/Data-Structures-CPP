#include <iostream>

int main() {
    // Declare and initialize two 2D arrays
    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };

    // Perform matrix addition
    int resultMatrix[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    std::cout << "Matrix1:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix2:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Result Matrix (Matrix1 + Matrix2):" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << resultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
