#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

   // constructor
    Node(int data){
        this ->data = data;
        this -> next= NULL;
    }
};

// Reverse Funtion 
Node* reverse(Node*head){
  Node * prev = NULL;
  Node* curr = head;
  Node * forw = curr ->next;
    
  while(curr != NULL){
     forw = curr ->next;
     curr ->next= prev;
     prev = curr;
     curr = forw;
  }
 return prev;
}

// Print function
void print (Node * head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp =temp ->next;
    }
}

Node * Add(Node*head1 , Node* head2){

 // step 1: Reverse Both LL
    head1 = reverse(head1);
    head2 = reverse(head2);


 // step 2: Add Both LL

   Node * anshead = NULL;
   Node * ansTail = NULL;

   int carry = 0;
   // when both LL size In equal 
   while(head1 != NULL && head2 != NULL){
    // calculate sum of LL
    int sum = carry + head1 ->data + head2 ->data ;

    // Find the digit
    int digit = sum % 10;

    // find carry 
    carry = sum / 10;
    
    // create new node for digit
    Node * newNode = new Node(digit);
     if(anshead == NULL){
        anshead = newNode;
        ansTail = newNode;
    }

    else{
      ansTail ->next = newNode;
      ansTail = newNode;
    }

    head1 = head1->next;
    head2 = head2->next;
  }

 // When First LL is more greater nodes to seconds LL
  while( head1 != NULL ){
    int sum = carry + head1->data;
    int digit = sum % 10 ;
    carry = sum / 10 ;
    Node * newNode = new Node(digit);
    ansTail ->next = newNode;
    ansTail = newNode;
    head1= head1 ->next;
  }

 // When in scond  LL is more greater nodes to first LL
  while( head2 != NULL ){
    int sum = carry + head2->data;
    int digit = sum % 10 ;
    carry = sum / 10 ;
    Node * newNode = new Node(digit);
    ansTail ->next = newNode;
    ansTail = newNode;
    head2 = head2 ->next;
  }

  // handle carry ko alg kar do
  while(carry != 0){
    int sum = carry;
    int digit = sum % 10;
    carry = sum / 10 ;

    Node * newNode = new Node(digit);
    ansTail ->next = newNode;
    ansTail = newNode;
  }

 // step 3 : Reverse Answer LL 
   anshead = reverse(anshead);
   return anshead;
}

int main(){

Node * head1 = new Node(2);
Node* first1 = new Node(4);

head1 ->next = first1;


Node * head2 = new Node(2);
Node * first2 = new Node(3);
Node *second2 = new Node(4);

head2-> next = first2;
first2 -> next= second2;

Node* ans = Add(head1 , head2);
print(ans);

}