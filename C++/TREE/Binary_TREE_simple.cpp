#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        this->data=d;
        this->left=this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    root= new node(data);

    
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
     cout<<"Enter data for inserting in right of "<<data << endl;
    root->right=buildTree(root->right);
    return root;

}

void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data << " ";
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<< root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

void levelOrderTraversal(node* root){

    if(root==NULL){
        return ;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout<<temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
}

void buildFromLevelOrder(node * &root){
    queue <node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;

    root=new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp= q.front();
        q.pop();

        cout<<"enter left node for:"<< temp->data << endl;
        int leftData;
        cin>> leftData;

        if(leftData !=-1){
            temp->left= new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){

     node* root = NULL;
    root= buildTree(root);

    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);


    inorder(root);
    preorder(root);
    postorder(root);
}