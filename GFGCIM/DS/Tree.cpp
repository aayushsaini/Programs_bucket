#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node (int k) {
        key = k;
        left = right = NULL;
    }
};

void inOrder(Node *root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->key  << " ";
        inOrder(root->right);
    }
}

void preOrder(Node *root) {
    if (root != NULL) {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
    }
}



// void insert(Node *root) {
//     while(root->left != NULL) {
//         root = root->left;
//     }
// }



int main () {
    
    Node *root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(11);
    root->left->left = new Node(8);
    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    return 0;

}