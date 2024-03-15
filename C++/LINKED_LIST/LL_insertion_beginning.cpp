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

void printList(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    struct Node* head = NULL;
    int choice = 1;
    int data;
    while (choice == 1) {
        cout << "Enter data for the new node: ";
        cin >> data;
        insertAtBeginning(&head, data);
        cout << "Do you want to add another node? (1 for Yes, 0 for No): ";
        cin >> choice;
    }
    cout << "Linked list: ";
    printList(head);
    return 0;
}

