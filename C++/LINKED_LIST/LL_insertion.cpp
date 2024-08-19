// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node *next;
// }*first=nullptr;

// void create(int A[], int n){
//     int i;
//     struct Node  *t, *last;
//     first=new Node;
//     first->data=A[0];
//     first->next=nullptr;
//     last=first;

//     for(int i=1;i<n;i++){
//         t=new Node;
//         t->data=A[i];
//         t->next=nullptr;
//         last->next=t;
//         last=t;
//     }
// }

// int count(struct Node* p) {
//     int cnt = 0;
//     while (p != nullptr) {
//         cnt++;
//         p = p->next;
//     }
//     return cnt;
// }


// void insert(struct Node *p, int index, int x)
// {
//     struct Node* t;
//     int i;
//    if(index<0 || index> count(p)){
//     return ;
//    }
//     t=new Node;
//     t->data=x;
//     if(index==0){
//         t->next=first;
//         first=t;
//     }

//     else{
//         for(int i=0;i<index-1;i++){
//            p=p->next;
//            t->next=p->next;
//            p->next=t;
//         }
//     }
// }

// void display(struct Node *p){
//     cout<<"data:";
//     while(p!=NULL){
//         cout<<" "<<p->data;
//         p=p->next;
//     }
// }

// int main(){
//     int A[]={10,20,30,40,50};
//     create(A,5);

//     insert(first,3,5);
//     display(first);



// }


#include <iostream>

struct Node {
    int data;
    Node* next;
}*first=nullptr;

void create(int A[], int n) {
    Node* t;
    Node* last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; ++i) {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void Display(struct Node* p) {
    while (p != nullptr) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}




// void Insert(struct Node * p, int index, int x) {
//     Node* t = new Node;
//     t->data = x;

//     if (index == 0) {
//         t->next = p;
//         p = t;
//     } 
    
//     else {
//         for (int i = 0; i < index - 1; ++i){ 
//             p = p->next;
//         }
//         t->next = p->next;
//         p->next = t;
//     }
// }

void Insert(Node*& p, int index, int x) {
    Node* t = new Node;
    t->data = x;

    if (index == 0) {
        t->next = p;
        p = t; // Update the actual first pointer
    } else {
        for (int i = 0; i < index - 1; ++i) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}


int main() {
    int A[] = {10, 20, 30, 40, 50};
   // Node* first = nullptr;
    create( A, 5);

    Insert(first, 0, 5);
    Display(first);

    // Clean up memory (not shown in the original code)
    Node* temp;
    while (first != nullptr) {
        temp = first;
        first = first->next;
        delete temp;
    }

    return 0;
}
