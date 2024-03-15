#include<iostream>
#include<stdlib.h> // deletion in between !!  
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



void DeleteAtEnd(struct Node** head){
	struct Node*p=*head;
	
	while(p->next->next!=NULL){
		p=p->next;
	}
	free(p->next);
	p->next = NULL;
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
	DeleteAtEnd(&head);
	
	cout<<"Linked_List:\n";
	PrintList(head);
}

