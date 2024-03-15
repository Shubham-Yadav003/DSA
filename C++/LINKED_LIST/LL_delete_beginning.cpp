#include<iostream>
#include<stdlib.h> // insertion at the end !! 
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



void deletefirst(struct Node** head_ref){
	struct Node* ptr=*head_ref;
	*head_ref=(*head_ref)->next;
	free(ptr);
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
	deletefirst(&head);
	
	cout<<"Linked_List:\n";
	PrintList(head);
}

