#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    // Constructor

  Node(int data){
    this-> data= data;
    this-> next = NULL;
  }

};

void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Find the Length
 int getLength(Node*&head){
    int len=0;
    Node* temp = head; 
    while(temp != NULL){
        temp= temp->next;
        len++;
    }
    return len;
}

// Reverse linked-List by Kth Position 

Node * reveKNode(Node*&head , int k){
    if( head== NULL ){
       cout<<"LL is Empty :";
       return NULL;
    }

    if(head -> next == NULL){
     cout<<"Only one Node present:";
     return head;
    }

   int len = getLength(head);
    if(k>len){
        cout<<"Enter Valid Number of k";
    }
  //step A : Reverse logic
    Node* prev= NULL;
    Node * curr = head;
    Node * forw = curr -> next;
      int i=0;
    while(i < k){
     forw = curr->next;
     curr ->next =prev;
     prev= curr;
     curr= forw;
     i++;
   }

  // step B : Recursive call
   if(forw != NULL){
    head->next = reveKNode(forw , k);
   }

   // step C : Return Modified head 
  return prev;
}

int main(){

Node* first= new Node(10);
Node* second= new Node(20);
Node* third= new Node(30);
Node* fourth= new Node(40);
Node* fifth= new Node(50);
Node* sixth= new Node(60);

first -> next = second;
second -> next = third;
third -> next = fourth;
fourth -> next = fifth;
fifth -> next = sixth;
 
 print(first);

  cout<<endl;
 cout<<"Reverse Kth position" <<endl;
 first = reveKNode(first , 3);
 print(first); 
 
}