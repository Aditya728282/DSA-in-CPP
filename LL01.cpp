#include<iostream>
using namespace std;

//    Head in starting Node Create 

class Node{
    public:
    int data;
    Node * next;

    // constructor
    Node(int data){
     this -> data = data ;
     this-> next = NULL;
    }
};

void insertAtHead(Node* & head , int d){
     
     Node * temp = new Node(d);
     temp -> next = head;
     head= temp;
}
  // Inserting node between two Nodes 
   void insertMid(Node *& head ,int position , int data ){

     if(position==1){
        insertAtHead(head, data);
        return;
     }
      Node * temp = head;
      int cnt=1;
      while(cnt<position-1){
        temp= temp->next;
        cnt++;
      }
      // creating a node
      Node* nodeToinsert= new Node(data);

      nodeToinsert ->next = temp->next;
      temp -> next = nodeToinsert; 
    }

void print(Node * &head){
    Node *temp= head;

    while(temp != NULL){
        cout<<temp->data <<" ";
        temp= temp-> next;
    }
    cout<<endl;

}

// Reverse Nodes Using loop 
Node*reverseLoop(Node* &head){
    Node * prev = NULL;
    Node * curr = head;
    
    while(curr != NULL){
        Node * forward = curr -> next;
        curr -> next = prev;
        prev= curr;
        curr= forward; 
    }
    return prev;
}

int main(){

    Node *n1 = new Node(10);

    //cout<<n1 -> data <<endl;
    //cout<<n1 -> next <<endl;

    //  point to now head 

    Node * head = n1;

    print(head);

    // new node create data = 12
    insertAtHead(head, 12);
    print(head);

   // one anothar node create data = 33

   insertAtHead(head, 33);
    print(head);

    insertMid(head , 2, 54);
    print(head);

   

    cout<<endl;
    cout<<"After the reverse Node : ";


  head = reverseLoop(head);
  print(head);
}
