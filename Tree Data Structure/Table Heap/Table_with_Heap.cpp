#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Creating a table (vector) to represent data
    std::vector<int> dataTable = {4, 8, 12, 6, 10, 14, 2, 7, 9};

    // Convert the vector into a max-heap
    std::make_heap(dataTable.begin(), dataTable.end(), std::less<int>());

    // Print the original table and the max-heap
    std::cout << "Original Table:" << std::endl;
    for (int value : dataTable) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::cout << "\nMax-Heap:" << std::endl;
    for (int value : dataTable) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
