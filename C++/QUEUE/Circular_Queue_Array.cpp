#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x){
	if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%N==front){
		cout<<"queue is full";
	}
	else {
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		cout<<"no data";
	}
	else{
		cout<<"dequed element:"<<queue[front];
        front=(front+1)%N;	
       } 
}

void display(){
	if(front==-1 && rear==-1){
		cout<<"no data:";
	}
	else{
		int i=front;
		while(i!=rear){
			cout<<queue[i];
			i=(i+1)%N;
		}
	}
	cout<<queue[rear];
}

int main(){
	display();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	cout<<endl;
	dequeue();
	enqueue(9);
		cout<<endl;
	display();
	cout<<endl;
	enqueue(7);
	
}
