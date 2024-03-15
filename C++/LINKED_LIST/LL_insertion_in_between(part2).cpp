#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAtPosition(struct Node** head_ref, int position, int new_data) {
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = NULL;
    if (position == 1) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }
    struct Node*p=*head_ref;
	int i=1;
	while(i!=position-1)
	{
	p=p->next;
	i++;	
	}
	new_node->data=new_data;
	new_node->next=p->next;
	p->next=new_node;
}

//    struct Node* temp = head;
//    for (int i = 1; i < index - 1; i++) {
//        if (temp == NULL) {
//            cout << "Invalid position" << endl;
//            return;
//        }
//        temp = temp->next;
//    }
//    new_node->next = temp->next;
//    temp->next = new_node;
//}

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    int choice = 1;
    int data;
    int position;
    while (choice == 1) {
        cout << "Enter data for the new node: ";
        cin >> data;
        cout << "Enter position for the new node: ";
        cin >> position;
        if (position == 1) {
            insertAtBeginning(&head, data);
        }
        else {
            insertAtPosition(&head, position, data);
        }
        cout << "Do you want to add another node? (1 for Yes, 0 for No): ";
        cin >> choice;
    }
    cout << "Linked list: ";
    printList(head);
    return 0;
}

