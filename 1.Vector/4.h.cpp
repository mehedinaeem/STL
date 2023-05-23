#include <iostream>

// Class representing a node in the binary tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Class representing the binary tree
class BinaryTree {
public:
    Node* root;

    // Constructor
    BinaryTree() {
        root = nullptr;
    }

    // Method to insert a value into the binary tree
    void insert(int value) {
        root = insertRecursive(root, value);
    }

    // Method to perform an in-order traversal of the binary tree and print the elements
    void inOrderTraversal(Node* currentNode) {
        if (currentNode == nullptr) {
            return;
        }

        inOrderTraversal(currentNode->left);
        std::cout << currentNode->data << " ";
        inOrderTraversal(currentNode->right);
    }

    // Method to display the elements of the binary tree using in-order traversal
    void display() {
        std::cout << "Binary Tree elements (in-order traversal): ";
        inOrderTraversal(root);
        std::cout << std::endl;
    }

private:
    // Recursive method to insert a value into the binary tree
    Node* insertRecursive(Node* currentNode, int value) {
        if (currentNode == nullptr) {
            currentNode = new Node(value);
        } else if (value <= currentNode->data) {
            currentNode->left = insertRecursive(currentNode->left, value);
        } else {
            currentNode->right = insertRecursive(currentNode->right, value);
        }
        return currentNode;
    }
};

int main() {
    // Create a binary tree
    BinaryTree tree;

    // Insert values into the binary tree
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);

    // Display the elements of the binary tree
    tree.display();

    return 0;
}
