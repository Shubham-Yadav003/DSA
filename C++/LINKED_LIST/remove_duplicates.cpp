#include<bits/stdc++.h>
using namespace std;
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}

void removeDuplicates(struct Node *p){
    struct Node *q=p->next;
    while(q!=NULL){ 
    if(q->data!=p->data){
        p=q;
        q=q->next;
    }
    else{
        p->next=q->next;
        delete q;
        q=p->next;
    }
}
}

int main()
{

 int A[]={10,20,20,40,50,50,50,60};
 create(A,8);


 removeDuplicates(first);
 Display(first);

 return 0;
}