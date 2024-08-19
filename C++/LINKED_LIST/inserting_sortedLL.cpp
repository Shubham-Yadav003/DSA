#include <stdio.h>
#include <stdlib.h>
using namespace  std;
struct Node
{
 int data;
 struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
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

void sortedinsert(struct Node *p, int x){
    struct Node *t, *q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;

    if(first==NULL){
        first=t;
    }

    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);

    //cout<<sortedinsert(first,15);
    sortedinsert(first,55);
    Display(first);
}