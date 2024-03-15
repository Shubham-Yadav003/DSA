#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(){
    int x;
    struct Node* newnode = new Node;
    cout << "Enter data (-1 for no data): ";
    cin >> x;
    if(x == -1){
        return 0;
    }
    newnode->data = x;
    cout << "Enter left child of " << x << endl;
    newnode->left = create();
    cout << "Enter right child of " << x << endl;
    newnode->right = create();
    return newnode;
}

void preorder(struct Node* root){
    if(root == 0){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root){
    if(root == 0){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(struct Node* root){
    if(root == 0){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    struct Node* root;
    root = create();
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;
    return 0;
}

