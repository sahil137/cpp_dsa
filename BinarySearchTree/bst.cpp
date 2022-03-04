// #include<bits/stdc++.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this -> data = data;
        left = right = nullptr;
    }
};


Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root -> data) {
        root -> left = insert(root -> left, key);
    }

    if (key > root -> data) {
        root -> right = insert(root -> right, key);
    }

    return root;
}

Node* searchInbst (Node* root, int key) {
    if (root == nullptr) {
        return nullptr;
    } else if (key < root -> data) {
        Node* left = searchInbst(root -> left, key);
        return left;
    } else if (key > root -> data) {
        Node* right = searchInbst(root -> right, key);
        return right;
    }

    return root;
}

Node* findMin(Node* root) {
    while (root -> left != nullptr) {
        root = root -> left;
    }

    return root;
}

Node* deleteFromBst(Node* root, int key) {

    if (root == nullptr) {
        return nullptr;
    } else if (key < root -> data) {
        root -> left = deleteFromBst(root -> left, key);
    } else if (key > root -> data) {
        root -> right = deleteFromBst(root -> right, key);
    } else  {

        bool leftNull = root -> left == nullptr;
        bool rightNull = root -> right == nullptr;

        // Case 1
        // No Children
        if (leftNull and rightNull) {
            delete root;
            root = nullptr;
        // Case 2
        // 1 Child
        } else if (leftNull) {
            Node* temp = root;
            root = root -> right;
            delete temp;
        } else if (rightNull) {
            Node* temp = root;
            root = root -> left;
            delete temp;
        }
        // Case 3
        // 2 Children
         else {
             Node* temp = findMin(root -> right);
             root -> data = temp -> data;
             root -> right = deleteFromBst(root -> right, temp -> data);
        }

    }
       return root;


}

void printInorder (Node* root) {
    if (root == nullptr) {
        return;
    }

    printInorder(root -> left);
    cout << root -> data << " ";
    printInorder(root -> right);
}


int main () {
    Node* root = nullptr;
    int arr[] = {8,3,10,1,6,14,4,7,13};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    printInorder(root);

    cout << endl;
    int key;
    cin >> key;
    root = deleteFromBst(root, key);

    printInorder(root);
    
    return 0;
}