#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

   Node(int data){
      this ->data = data;
      this -> next = NULL;
  }
};

Node * reverse(Node * head){
    Node * prev = NULL;
    Node * curr = head;
    Node * forw = head->next;

    while(curr != NULL){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }

  return prev;
}

bool CheckPalindrome(Node* & head){
    if(head == NULL){
      cout<<"LL is Empty: "<<endl;
      return true;
    }

    if(head -> next == NULL ){
      cout<<"Palindrome : ";
      return true;
    }

  //find middle node
  Node* slow = head;
  Node * fast = head;
  while(fast != NULL){
    fast = fast ->next;
    if(fast != NULL){
     fast = fast -> next;
     slow = slow ->next;
    }
  }

  Node * reverseLLHead = reverse(slow ->next);
  slow -> next = reverseLLHead;

  // comparision temp1 or temp2

  Node * temp1 = head;
  Node * temp2 = reverseLLHead;

  while(temp2 != NULL){
    if(temp1 -> data != temp2->data){
     // Not a palindrome 
      return false;
    }
    else{
      // if data is equal then next 
      temp1 = temp1 ->next;
      temp2 = temp2 ->next;
    }

  }

  return true;
}


int main(){

Node * head= new Node(10);
Node * second= new Node(20);
Node * third= new Node(30);
Node * fourth= new Node(20);
Node * fifth= new Node(10);

head  -> next = second;
second-> next = third;
third -> next = fourth;
fourth-> next = fifth;
fifth -> next = NULL;

bool isPalindrome =CheckPalindrome(head);

if(isPalindrome){
   cout<<"LL is valid Palindrome"<<endl;
}
else{
    cout<<"Not Palindrome "<<endl;
}
}