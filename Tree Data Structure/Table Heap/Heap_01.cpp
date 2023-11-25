#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Creating a table (vector of vectors) to represent a 2D array
    std::vector<std::vector<int>> table = {
        {4, 8, 12},
        {6, 10, 14},
        {2, 7, 9}
    };

    // Flatten the table into a 1D vector
    std::vector<int> flatTable;
    for (const auto& row : table) {
        flatTable.insert(flatTable.end(), row.begin(), row.end());
    }

    // Convert the 1D vector into a max-heap
    std::make_heap(flatTable.begin(), flatTable.end(), std::less<int>());

    // Print the table and the max-heap
    std::cout << "Original Table:" << std::endl;
    for (const auto& row : table) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMax-Heap (from flattened table):" << std::endl;
    for (int value : flatTable) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
