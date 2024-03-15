#include<iostream>
#include<string.h>
using namespace std;
#define N 5
int stack[N];
int top=-1;

void push(){
	int x;
	cout<<"enetr data:";
	cin>>x;
	if(top==N-1){
		cout<<"overflow";
	}
	else{
		top++;
		stack[top]=x;
	}
}

void pop(){
	int item;
	if(top==-1){
		cout<<"underflow";
	}
	else{
		item=stack[top];
		top--;
		cout<<top;
	}
}

void peek(){
	if(top==-1){
		cout<<"underflow";
	}
	else{
		cout<<stack[top];
	}
}

void display(){
	for(int i=top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
}

int main(){
	int ch;
	do{
		cout<<"\nenter choice: 1:push 2:pop 3:peek 4:display:";
		cin>>ch;
		switch(ch){
			case 1: push();break;
			case 2: pop(); break;
			case 3: peek(); break;
			case 4: display(); break;
			default: {
			cout<<"invalid choice";
			}
			
		} 
	}while(ch!=0);
}
