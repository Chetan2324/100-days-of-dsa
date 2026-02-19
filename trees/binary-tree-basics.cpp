// Binary Tree Basics - Node Creation and Linking

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int main() {

    Node* root = new Node(5);

    root->left = new Node(4);
    root->right = new Node(6);

    cout << root->data << endl;
    cout << "The data on left is: " << root->left->data << endl;
    cout << "The data on right is: " << root->right->data << endl;

    return 0;
}
