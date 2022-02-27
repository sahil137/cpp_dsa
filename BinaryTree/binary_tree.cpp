#include<iostream>
#include <queue>
using namespace std;
// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this -> data = data;
            left = nullptr;
            right = nullptr;
        }

};

// PreOrder building of tree
Node* buildTree() {
    int data;
    cin >> data;
    if (data == -1) {
        return nullptr;
    }

    Node* newNode = new Node(data);

    newNode -> left = buildTree();
    newNode -> right = buildTree();

    return newNode;

}

// PreOrder print
void printPreOrder(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root -> data << " ";

    printPreOrder(root -> left);
    printPreOrder(root -> right);
}

// Inorder print
void printInOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    printInOrder(root -> left);
    cout << root -> data << " ";
    printInOrder(root -> right);
}

// PostOrderPrint
void printPostOrder(Node* root) {
    if (root == nullptr) {
        return ;
    }
        printPostOrder(root -> left);
        printPostOrder(root -> right);
        cout << root -> data << " ";
}

// Level Order Print  
void printLevelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {

        Node* front = q.front();
        q.pop();

        if (front == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        } else {
            cout << front -> data << " ";
            if (front -> left) {
                q.push(front -> left);
            }
            if (front -> right) {
                q.push(front -> right);
            }
        }
    }

}

// Binary Tree Diameter
struct TreeInfo{
    int height;
    int diameter;
};

int binaryTreeDiameter(Node* root) {
    TreeInfo ans = binaryTreeDiameterHelper(root);
    return ans.diameter;
}

TreeInfo binaryTreeDiameterHelper(Node* root) {
    if (root == nullptr) {
        return {0,0};
    }

    TreeInfo left = binaryTreeDiameterHelper(root -> left);
    TreeInfo right = binaryTreeDiameterHelper(root -> right);

    int pathThroughRoot = left.height + right.height;
    int maxDiameter = max(left.diameter, right.diameter);
    int currDiameter = max(pathThroughRoot, maxDiameter);
    int currHeight = 1 +  max(left.height, right.height);

    return {currHeight, currDiameter};

}

int main () {
    Node* root = buildTree();
    printPreOrder(root);
    cout << endl;
    printInOrder(root);
    cout << endl;
    printPostOrder(root);
    cout << endl;
    printLevelOrder(root);
    cout << endl;

}