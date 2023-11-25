#include <iostream>

// Node structure for a binary tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to perform an in-order traversal of the binary tree
void inOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        std::cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

// Function to insert a node into the binary tree
TreeNode* insertNode(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

int main() {
    // Creating an empty binary tree
    TreeNode* root = nullptr;

    // Inserting nodes into the binary tree
    root = insertNode(root, 10);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 3);
    root = insertNode(root, 7);

    // Performing an in-order traversal
    std::cout << "In-order traversal: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;
}
    // TreeNode is a structure representing a node in the binary tree.
    // insertNode is a function for inserting a new node into the binary tree based on the node's value.
    // inOrderTraversal is a function that performs an in-order traversal of the binary tree, printing the values of the nodes.