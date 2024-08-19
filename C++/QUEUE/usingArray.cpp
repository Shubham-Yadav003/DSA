// #include<iostream>
// using namespace std;

// struct Queue{
//     int size;
//     int front;
//     int rear;
//     int *Q;
// };

// void create(struct Queue*q, int size){
//     q->size=size;
//     q->front=q->rear=-1;
//     q->Q= new int[q->size];
// }

// void enqueue(struct Queue *q, int x){
//     if(q->rear==q->size-1){
//         cout<<"Queue is full"<< endl;
//     }
//     else{
//         q->rear++;
//         q->Q[q->rear]=x;
//     }
// }

// int  dequeue(struct Queue *q){
//     int x=-1;
//     if(q->front == q->rear){
//         cout<<"Queue is empty"<<endl;
//     }
//     else{
//         q->front++;
//         x=q->Q[q->front];
//     }

//     return x;
// }

// void Display(struct Queue q){
//     for(int i=q.front+1; i<=q.rear;i++){
//         cout<<q.Q[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     struct Queue q;
//     create(&q, 5);

//     enqueue(&q,10);
//     enqueue(&q,20);
//     enqueue(&q,30);
//     enqueue(&q,40);
//     Display(q);

//     cout<<dequeue(&q)<<endl;

// }

#include<iostream>
using namespace std;


class Queue{
private:
    int size;
    int front;
    int rear;
    int *Q;
public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};

Queue::Queue(int size){
    this->size=size;
    front=rear=-1;
    Q=new int[size];
}

Queue::~Queue(){
    delete [] Q;
}

bool Queue:: isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}

bool Queue:: isFull(){
    if(rear==size-1){
        return true;
    }
    return false;
}

void Queue::enqueue(int x){
    if(isFull()){
        cout<<"Queue Overflow"<<endl;
    }
    else{
        rear++;
        Q[rear]=x;
    }
}

int Queue:: dequeue(){
    int x=-1;
    if(isEmpty()){
        cout<<"Queue undrflow"<<endl;
    }
    else{
        front++;
        x=Q[front];
    }
    return x;
}

void Queue:: display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<flush;
        if(i<rear){
            cout<<"<-"<<flush;
        }
    }
    cout<<endl;
}

int main(){
    int A[]={1,2,3,4,5};
    Queue q(sizeof(A)/sizeof(A[0]));

    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        q.enqueue(A[i]);
    }

    q.display();

    q.dequeue();

    q.display();
}