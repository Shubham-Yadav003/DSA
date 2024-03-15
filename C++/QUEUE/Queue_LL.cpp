#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
struct Node* front=0;
struct Node* rear=0;

void enqueue(int x)
{
	struct Node*newnode=new Node;
	newnode->data=x;
	newnode->next=0;
	
	if(front==0 && rear==0){
		front=rear=newnode;
	}
	
	else{
		rear->next=newnode;
		rear=newnode;
	}
	
}

void display(){
	struct Node* temp;
	if(front==0 && rear==0){
		cout<<"empty";
	}
	else{
		temp=front;
		cout<<"display:";
		while(temp!=0){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
}

void dequeue(){
	if(front==0 && rear==0){
		cout<<"empty";
	}
	else{
		struct Node*p=front;
		front=front->next;
		delete p;
	}
}

void peek(){
	if(front==0 && rear==0){
		cout<<"empty";
	}
	else{
		cout<<"peek:"<<front->data;
	}
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	dequeue();
	dequeue();
	peek();
	cout<<endl;
	display();
}
