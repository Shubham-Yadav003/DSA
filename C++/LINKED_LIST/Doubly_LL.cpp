#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
}*first=nullptr;

void create(int A[], int n){
    struct Node *t,*last;
    int i;
    first=new Node;
first->data=A[0];
first->prev=first->next=nullptr;
last=first;

for(int i=1;i<n;i++){
t=new Node;
t->data=A[i];
t->next=nullptr;
t->prev=last;
last->next=t;
last=t;

}
}

void Display(struct Node* p) {
    while (p != nullptr) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}

int length(struct Node *p){
 int len=0;
    while(p){
    len++;
    p=p->next;
    }
    return len;
}


/* HIP HIP HURRAY !!*/
int main(){
    int A[]={10,20,30,40,50};
    create(A,5);

    int x=length(first);
    cout<<x<<endl;

    Display(first);

}

