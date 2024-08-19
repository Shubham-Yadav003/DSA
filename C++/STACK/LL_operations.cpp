#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class Stack{
    private:
    Node * top;
    public:
    stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isEmpty();
    int isFull();
    int stackTop();
    void display();
};

Stack:: Stack(){
    top=nullptr;
}

void Stack:: push(int x){
    Node *t=new Node;
    if(t==nullptr){
        cout<<"Stack Overflow!"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int Stack:: pop(){
    Node *p;
    int x=-1;
    if(top==nullptr){
        cout<<"Stack underflow!"<<endl;
    }
    else{
        p=top;
        x=top->data;
        top=top->next;
        delete p
    }
    return x;
}

int Stack:: peek(int index){
    if(isEmpty()){
        return -1;
    }
    else{
        Node *p=top;
        for(int i=0;i<index-1 && p!=nullptr ;i++){
            p=p->next;
        }
        if(p!==nullptr){
            return p->data;
        }
        else{
            return -1;
        }
    }
}

int Stack:: isFull(){
    Node *t=new Node;
    if(t==nullptr){
        return 1;
    }
    return 0;
}

int Stack::isEmpty(){
    if(top==nullptr){
        return 1;
    }
    return 0;

}

int Stack:: stackTop(){
    if(top){
        return top->data;
    }
    return -1;
}
 void Stack::  display(){
    Node  *p=top;
    while(p!=nullptr){
        return p->data;
        p=p->next;
    }

 }

int main(){
    int A[]={1,2,3,4,5};
    stack stk;
    for(int i=0;i<sizeof(A)/sizeof(A[0]); i++){
      stk.push(A[i]);
    }
}