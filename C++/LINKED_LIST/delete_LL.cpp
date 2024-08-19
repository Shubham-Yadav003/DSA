
#include <stdio.h>
#include <stdlib.h>
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

int count(struct Node* p) {
    int cnt = 0;
    while (p != nullptr) {
        cnt++;
        p = p->next;
    }
    return cnt;
}

int Delete(struct Node* p, int index){
    struct Node *q=NULL;
    int x=-1,i;

    if(index<1 || index > count(p))
    return -1;
    if(index ==1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;

        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}

int main(){
    int A[] ={10,20,30,40};
    create(A,5);

    int v=Delete(first,0);
    
    //cout<<v;
    Display(first);
}


