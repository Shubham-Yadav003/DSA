#include<iostream>
using namespace std;
# define N 5
int queue[N];
int front =-1;
int rear=-1;
void enqueue(int x){
	if(rear==N-1){
		cout<<"overflow";
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
}

void dequeue(){
	
	if(front==-1 && rear==-1){
		cout<<"underflow";
	}
	
	else if(front==rear){
		front=rear=-1;
	}
	
	else{
		
		front++;
	}
}

void display(){
	if(front==-1 && rear==-1){
		cout<<"No Data:";
	}
	else{
		int i=front;
		while(i!=rear+1){
			cout<<"display"<<queue[i];
			i++;
		}
		}
	}


void peek(){
	if(front==-1 && rear==-1){
		cout<<"underflow";
	}
	else{
		cout<<"peek:"<<queue[front];
	}
}

int main(){
	enqueue(2);
	enqueue(4);
	enqueue(6);
	peek();
	cout<<endl;
	dequeue();
	dequeue();
	display();
}
