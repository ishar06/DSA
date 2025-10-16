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
    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(arr);


    inorderTransversal(root);

    return 0;
}