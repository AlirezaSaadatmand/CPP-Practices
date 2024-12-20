#include <iostream>

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int value) {
        key = value;
        left = right = nullptr;
    }
};

Node* findMinNode(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }
    Node* current = root;
    while (current->left != nullptr) {
        current = current->left;
    }
    return current;
}

int main() {

    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);
    root->left->left->left = new Node(1);


    Node* minNode = findMinNode(root);
    if (minNode) {
        std::cout << "Smallest Node : " << minNode->key << std::endl;
    } else {
        std::cout << "Empty" << std::endl;
    }

    return 0;
}
