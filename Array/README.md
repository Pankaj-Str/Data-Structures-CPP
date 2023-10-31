# C++ Data Structures and Algorithms - Array

## Introduction to Arrays
- Arrays are fundamental data structures in C++ used for storing a collection of elements of the same data type in contiguous memory locations.
- Arrays offer efficient random access to elements through index-based referencing.
- In C++, arrays have a fixed size determined at compile-time, making them suitable for scenarios where the size remains constant during program execution.

## Declaring Arrays
- Arrays are declared with a specific data type and size.
- The size must be a non-negative integer and is determined at compile-time.

  ```cpp
  data_type array_name[array_size];
  ```

  **Example:**
  ```cpp
  int numbers[5];
  ```

## Initializing Arrays
- Arrays can be initialized either during declaration or afterward.

  During declaration:
  ```cpp
  data_type array_name[array_size] = {element1, element2, ..., elementN};
  ```

  After declaration:
  ```cpp
  data_type array_name[array_size];
  array_name[index] = value;
  ```

## Accessing Array Elements
- Elements of an array are accessed using an index, starting from 0.
- Array indexing provides fast, constant-time access to elements.

  **Example:**
  ```cpp
  int element = numbers[2]; // Accesses the third element (index 2)
  ```

## Array Operations
- Common array operations include insertion, deletion, searching, and sorting.

## Dynamic Arrays (std::vector)
- C++ offers dynamic arrays through the `std::vector` container from the Standard Template Library (STL).
- Vectors can dynamically resize during runtime, making them a flexible alternative to fixed-size arrays.

  **Example:**
  ```cpp
  #include <vector>
  std::vector<int> dynamicArray;
  dynamicArray.push_back(1);
  dynamicArray.push_back(2);
  ```

## Multi-dimensional Arrays
- C++ supports multi-dimensional arrays, such as 2D arrays, which are arrays of arrays.
- Elements are accessed using both row and column indices.

  **Example:**
  ```cpp
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };
  int element = matrix[1][2]; // Accesses the element in the second row and third column (value: 6)
  ```

## Common Array Algorithms
- Array algorithms include traversing, finding max/min elements, reversing, searching (linear and binary search), and sorting.

  **Example: Linear Search**
  ```cpp
  int array[] = {3, 5, 1, 7, 2};
  int target = 5;
  for (int i = 0; i < 5; i++) {
      if (array[i] == target) {
          // Element found at index i
          break;
      }
  }
  ```

## Array Complexity
- Time complexity for common array operations:
  - Access: O(1) (constant time).
  - Insertion/Deletion (at the end):
    - O(1) for dynamic arrays like `std::vector`.
    - O(n) for fixed-size arrays.
  - Search:
    - Linear Search: O(n).
    - Binary Search (for sorted arrays): O(log n).

## Best Practices
- Use `std::vector` for dynamic arrays.
- Consider time complexity when selecting data structures and algorithms.
- Ensure array bounds are respected to prevent accessing out-of-bounds memory.
