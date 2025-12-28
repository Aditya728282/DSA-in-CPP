#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


//  #1   Find if a loop is present in the linked list
bool LoopFind(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        if (fast == slow) {
            return true;
        }
    }
    return false;
}

// #2  Find the starting point of the loop in the linked list
Node* StartingPoint(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow) {
            slow = head;
            break;
        }
    }

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return fast;  // also write slow ans will be same 
}


//  #3. Remove the LOOP from Linked - list
Node* RemoveLoopNode(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow) {
            slow = head;
            break;
        }
    }
    
    Node* prev = fast;
    while (slow != fast) {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }

    return prev->next = NULL;
}

// print function 
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* nineth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = nineth;
    nineth->next = fifth;

    cout << endl;

    cout << "Loop is present or not: " << LoopFind(head) << endl;
    cout << "Starting point of loop is: " << StartingPoint(head)->data << endl;
    cout << "REMOVE the LOOP From LL : " <<endl; 
    
    RemoveLoopNode(head) ;
    cout << "Loop is present or not: " << LoopFind(head) << endl;
    print(head);


    return 0;
}
