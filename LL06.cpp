#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insert at Head 
void insertAtHead(Node*& head, Node*& Tail, int data) {

    if (head == NULL) {
        Node* temp = new Node(data);
        head = temp;
        Tail = temp;
        return;
    }

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Insert at Tail;
void insertAtTail(Node*& head, Node*& Tail, int data) {
    if (head == NULL) {
        Node* temp = new Node(data);
        head = temp;
        Tail = temp;
        return;
    }

    Node* temp = new Node(data);
    Tail->next = temp;
    Tail = temp;
}

// print node 
void print(Node*& head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Find the mid Node searching the mid Node in this list;
Node* MidNode(Node*& head) {
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    Node* head = NULL;
    Node* Tail = NULL;

    insertAtHead(head, Tail, 10);
    insertAtHead(head, Tail, 20);
    insertAtHead(head, Tail, 30);
    insertAtHead(head, Tail, 35);
    insertAtHead(head, Tail, 39);
    insertAtTail(head, Tail, 40);
    insertAtTail(head, Tail, 50);
    cout << "Original List: ";
    print(head);

    Node* Midd = MidNode(head);
    if (Midd != NULL)
        cout << "Middle Node is: " << Midd->data << endl;
    else
        cout << "The list is empty." << endl;

    return 0;
}

