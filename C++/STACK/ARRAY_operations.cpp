#include <iostream>
using namespace std;

class Stack{
private:
    int size;
    int top;
    int *S;
public:
Stack(int size);
void push(int x);
int pop();
int peek(int pos);
int isFull();
int isEmpty();
void display();
int stackTop();

};
Stack:: Stack(int size){
    this->size=size;
    top=-1;
    S=new int[size];
}
void Stack::push(int x){
    if(isFull()){
        cout<<"Stack overflow!"<<endl;
    }
    else{
        top++;
        S[top]=x;
    }
}
int Stack:: pop(){
    int x=-1;
    if(isEmpty()){
        cout<<"Stack Underflow!"<< endl;
    }
    else{
        x=S[top];
        top--;
    }
    return x;
}
int Stack:: peek(int pos){
    int x= -1;
    if(top-pos+1 <0 || top-pos+1 == size){
        cout<<"Invalid position"<< endl;
    }
    else{
        x=S[top-pos+1];
    }
    return x;
}
int Stack:: isFull(){
    if(top==size-1){
        return 1;
    }
    return 0;
}

int Stack:: isEmpty(){
 if(top==-1){
    return 1;
 }
 return 0;
}

void Stack::  display(){
    for(int i=top;i>=0;i--){
        cout<<S[i]<<"|"<<flush;
    }
    cout<<endl;
}

int Stack:: stackTop(){
    if(isEmpty()){
        return -1;
    }
    else{
        return S[top];
    }
}

int main(){
    int A[]={1,2,3,4,5,6};
    Stack stk(sizeof(A)/sizeof(A[0]));

    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        stk.push(A[i]);
    }
    //stk.push(11);

   // cout<<stk.isFull()<<endl;
   // cout<<stk.peek(1);
    //cout<<stk.peek(6);

    cout<<stk.stackTop();

    
}
