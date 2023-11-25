#include <iostream>
#include <unordered_map>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to build a binary tree and hash its elements
void buildTreeAndHash(TreeNode* &root, std::unordered_map<int, int> &hashTable) {
    // Inserting nodes into the binary tree and hashing their values
    root = new TreeNode(10);
    hashTable[10] = 1;

    root->left = new TreeNode(5);
    hashTable[5] = 2;

    root->right = new TreeNode(15);
    hashTable[15] = 3;
}

int main() {
    TreeNode* root = nullptr;
    std::unordered_map<int, int> hashTable;

    // Build a binary tree and hash its elements
    buildTreeAndHash(root, hashTable);

    // Accessing values using keys from the hash table
    std::cout << "Value corresponding to key 10: " << hashTable[10] << std::endl;
    std::cout << "Value corresponding to key 5: " << hashTable[5] << std::endl;
    std::cout << "Value corresponding to key 15: " << hashTable[15] << std::endl;

    return 0;
}
