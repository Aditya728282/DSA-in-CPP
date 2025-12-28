#include<iostream>
using namespace std;

// Inset Node At Tails OR We can say After the main NOde of Head Node . 

class Node{
     public:
     int data;
      Node*next;

      // constructor;
      Node(int data){
         this ->data = data;
         this -> next= NULL;
        }
    };

   void insertAtTail(Node* &Tail ,int data){

        // create a new node
        Node * temp= new Node(data);

        // Point to head
        Tail-> next = temp;
        temp= Tail;
    }

   void print(Node* & Tail){
      Node*temp = Tail;

      while(temp != NULL){
          cout<< temp-> data <<" ";
          temp = temp-> next; 
        }
      cout<<endl;
   }


  int main(){ 
     Node *n1 = new Node(17);

      //cout<<n1 -> data <<endl;
      //cout<<n1 -> next <<endl;

   

      Node * Tail = (n1);
      print(Tail);

      // new node create data = 19
      insertAtTail(Tail, 19);
      print(Tail);

     // one anothar node create data = 33

     insertAtTail(Tail, 33);
     print(Tail);

     insertAtTail(Tail, 42);
     print(Tail);

     return 0;
    }
