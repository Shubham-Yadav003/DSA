#include<iostream>
#include<stdlib.h> // deletion at beginning !!  
using namespace std;

struct Node{
  int data;
  struct Node*next;	
};	

void insertatbeginning(struct Node**head_ref, int new_data){
	struct Node* new_node= new Node;
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;

}



void deletebetween(struct Node**head, int index){
	struct Node*p=*head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	struct Node*q=p->next;
	p->next=q->next;
	free(q);
}


void PrintList(struct Node* node){
	while(node!=NULL){
		cout<<node->data<<" ";
		node=node->next;
	}
}



int main(){
	struct Node*head=NULL;
	insertatbeginning(&head,1);
	insertatbeginning(&head,2);
	insertatbeginning(&head,3);
	deletebetween(&head,1);
	
	cout<<"Linked_List:\n";
	PrintList(head);
}

