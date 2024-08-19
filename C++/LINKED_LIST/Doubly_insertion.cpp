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

int length(struct Node *p){
 int len=0;
    while(p){
    len++;
    p=p->next;
    }
    return len;
}


void insert(struct Node *p, int index, int x){
    Node *t;
    if(index<0 || index>length(p)){
        return ;

    }
    if(index==0){
       t=new Node;
       t->data=x;
       t->prev=nullptr;
       t->next=first;
       first->prev=t;
       first=t;

    }

    else{

        for(int i=0;i<index-1;i++){
            p=p->next;

        }

        t=new Node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next){
            p->next->prev=t;
        }
        p->next=t;
    }
}

void Display(struct Node* p) {
    while (p != nullptr) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}



/* HIP HIP HURRAY !!*/
int main(){
    int A[]={10,20,30,40,50};
    create(A,5);

insert(first,1,1);


    

    Display(first);

}

