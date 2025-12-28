
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

void print (Node * head){
     Node* temp = head;
     while(temp != NULL){
        cout<<temp->data<<" ";
        temp =temp ->next;
    }
}

void SortZeroOneTwo(Node *&head){
 
 // Step 1: Find the count opf zers , ones and twos

  int zero= 0;
  int one= 0;
  int two = 0;
  Node *temp = head;
  while( temp != NULL){

     if (temp ->data == 0){
         zero++;
       }

     else if(temp ->data == 1){
         one++;
        }
     else if(temp ->data == 2){
         two++;
        }
     temp = temp->next;
    }

 // Step 2: Fill 0s , 1s , 2s in Original LL

       temp = head;


        // Fill Zeros
        while(zero--){
            temp -> data = 0;
            temp = temp ->next;
        }

        // fill Ones
        while(one--){
            temp -> data = 1;
            temp = temp ->next;
        }

        // fill Twos
        while(two--){
            temp ->data= 2;
            temp = temp ->next;
        }

}


int main(){
    Node * head = new Node(1);
    Node * first = new Node(2);
    Node * second= new Node(2);
    Node * third = new Node(0);
    Node * fourth= new Node(0);
    Node * fifth = new Node(0);

    head ->next = first;
    first ->next = second;
    second->next = third;
    third ->next = fourth;
    fourth->next = fifth;

    cout<<"Input LL is: ";
    print(head);
   cout<<endl;
  
   SortZeroOneTwo(head);
   cout<<"Output LL is: ";
   print(head);

}