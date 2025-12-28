#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* FindMID(Node* head) {
    Node* slow = head;
    Node* fast = head;
   //mid value finding 
    while (fast != NULL && fast->next != NULL) {

        // if empty node then
        if(head == NULL){
            cout<< "empty Node:"<<endl;
        }

       //If only one Node is Present
       if(head ->next == NULL){
        cout<<" midd Node is "<<head->data <<endl;
       }

        fast = fast->next;
        if(fast != NULL){
          fast = fast ->next;
          slow = slow->next;
        }
      
    }

    return slow;
}


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
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    Node* n6 = new Node(60);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    print(head);

    Node*middNode=FindMID(head);
    cout<<"Middle Node is: " <<middNode ->data <<" ";
} 