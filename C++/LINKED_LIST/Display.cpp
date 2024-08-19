#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

};

int main(){
    int A[5]={1,2,3,4,5};
    Node* head=new Node;
    Node* temp;
    Node* last;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;

        last->next=temp;
        last=temp;
    }

    Node *p =head;
     cout<<"Data:";
    while(p!=nullptr){
       
        cout<<p->data;
        p=p->next;
    }

    return 0;
}