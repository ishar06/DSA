#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> preorder){
        idx++;
        if (preorder[idx] == -1){
            return NULL;
        }
        Node* root = new Node(preorder[idx]);
        root->left = buildTree(preorder);
        root->right = buildTree(preorder);
        return root;
};

void preorderTransversal(Node* root){
    if (root == NULL){
        return;
    }
    cout << root->data << " ";
    preorderTransversal(root->left);
    preorderTransversal(root->right);
}

void inorderTransversal(Node* root){
    if (root == NULL){
        return;
    }
    inorderTransversal(root->left);
    cout << root->data << " ";
    inorderTransversal(root->right);
}

void postorderTransversal(Node* root){
    if (root == NULL){
        return;
    }
    inorderTransversal(root->left);
    inorderTransversal(root->right);
    cout << root->data << " ";
}

int main(){
    vector<int> arr = {1,2,-1,-1,3,-1,-1};
    Node* root = buildTree(arr);

    cout << "Root: " << root->data << endl;
    cout << "Root Left Child: " << root->left->data << endl;
    cout << "Root Right Child: " << root->right->data << endl;

    preorderTransversal(root);

    return 0;
}