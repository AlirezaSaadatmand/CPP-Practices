#include <iostream>
using namespace std;

// Define the structure of a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Preorder Traversal: Root -> Left -> Right
void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " "; // Visit the root
    preorderTraversal(root->left); // Traverse left subtree
    preorderTraversal(root->right); // Traverse right subtree
}

// Inorder Traversal: Left -> Root -> Right
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left); // Traverse left subtree
    cout << root->data << " "; // Visit the root
    inorderTraversal(root->right); // Traverse right subtree
}

// Postorder Traversal: Left -> Right -> Root
void postorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    postorderTraversal(root->left); // Traverse left subtree
    postorderTraversal(root->right); // Traverse right subtree
    cout << root->data << " "; // Visit the root
}

int main() {
    // Create a sample tree
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6  
    //        \
    //         7
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(6);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(7);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
