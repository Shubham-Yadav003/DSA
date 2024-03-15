#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node* next;
};
struct Node*top=0;


void push(int x){
	struct Node* new_node=new Node;
	new_node->data=x;
	new_node->next=top;
	top=new_node;
}

void pop(){
	struct Node* temp;
	temp=top;
	if(top==0){
		cout<<"no data";
	}
	else{
		top=top->next;
		delete temp;
	}
}


void peek(){
	if(top==0){
		cout<<"no data";
	}
	else{
		cout<<top->data;
	}
}

void display(){
	struct Node* temp;
	temp=top;
	if(top==0){
		cout<<"no data";
	}
	else{
		while(temp!=0){
			cout<<temp->data;
			temp=temp->next;
		}
	}
}

int main(){
	push(1);
	push(2);
	push(3);
	pop();
	display();
}
