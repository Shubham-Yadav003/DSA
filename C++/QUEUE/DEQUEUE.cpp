#include<iostream>
using namespace std;
#define N 5 
int dequeue[N];
int front=-1;
int rear=-1;

void enqueuefront(int x){
	if(( front==0 && rear==N-1) || (front==rear+1)){
		cout<<"dequeue is full";
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		dequeue[front]=x;
	}
	else if(front==0){
		front=N-1;
		dequeue[front]=x;
	}
	else{
		front--;
		dequeue[front]=x;
	}
	
}

void enqueuerear(int x){
	if(( front==0 && rear==N-1) || (front==rear+1)){
		cout<<"dequeue is full";
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		dequeue[front]=x;
	}
	else if(rear==N-1){
		rear=0;
		dequeue[rear]=x;
	}
	else{
		rear++;
		dequeue[rear]=x;
	}
}

void dequeuefront(){
 if (front==-1 && rear==-1){
 	cout<<"dequeue empty:";
 }
 else if(front==rear){
 	front=rear=-1;
 }
 else if(front==N-1){
 	front=0;
 }
 else{
 	front++;
 }	
}

void dequeuerear(){
	if (front==-1 && rear==-1){
 	cout<<"dequeue empty:";
 }
 else if(front==rear){
 	front=rear=-1;
 }
 else if(rear==0){
 	rear=N-1;
 }
 else{
 	rear--; 
 }
 
}

void display(){
	int i=front;
	while(i!=rear){
		cout<<"elements:"<<dequeue[i]<<" ";
		i=(i+1)%N;
	}
	cout<<"last"<<dequeue[rear];
}
int main(){
	enqueuerear(1);
	enqueuerear(2);
	enqueuerear(3);
	display();
}
