#include<iostream>
using namespace std;

// Find The InterSection 

class Node{
    public:
    int data;
    Node*next;

    // constructor
    Node(int data){
      this->data = data;
      this->next = NULL;
    }

};

// Find the Intersection of LL 
Node * getIntersection(Node* &headA , Node* &headB){

    Node *temp1= headA;
    Node *temp2 = headB;

    while(temp1 != NULL && temp2 != NULL){

      // step 1 : if dono ka length same ho 
        if(temp1 == temp2 ){
            return temp1;
        }
        temp1 = temp1 ->next;
        temp2 = temp2 ->next;
    }

    // step 2 : If headA ki size greater then HeadB
      if(temp1 !=NULL && temp2==NULL){
        // jab temp1 ka length jyada to to find how much length
        int temp1_len = 0;
        while(temp1 != NULL){
           temp1_len ++;
           temp1= temp1->next;
        }
       // step 3: Jinta length ho temp1 ka utna bar headA ko next ko do 
       while(temp1_len--){
         headA= headA ->next;
       }   
    }

    else{
       // If headB ki size greater then HeadA
       int temp2_len = 0;
        while(temp2 != NULL){
           temp2_len ++;
           temp2= temp2->next;
        }
       // step 3: Jinta length ho temp2 ka h utna bar headB ko next kar do 
       while(temp2_len--){
         headB= headB ->next;
       } 
    }
    
    // step 4 : ab dono Head ko compare kar lo
    while(headA != headB){
        headA= headA->next;
        headB = headB->next;
    }
    return headA;
  
}

// print Function

void print(Node * head ){
    Node *temp = head;
     while(temp != NULL){
       cout<<temp->data <<" ";
       temp = temp ->next;
     }
     cout <<endl;
}

int main(){

// head A
Node * head1= new Node(1);
Node * second1= new Node(2);


// head 2
Node * head2= new Node(3);
Node * second2= new Node(4);
Node * third2= new Node(5);
Node * fourth= new Node(6);
Node * fifth= new Node(7);
Node * sixth= new Node(8);

head1 ->next = second1;
second1 ->next = third2;


head2 ->next = second2;
second2 ->next = third2;
third2 ->next = fourth;
fourth ->next = fifth;
fifth ->next = sixth;
Node *head = getIntersection(head1 , head2);
cout<<"Intersection Node between headA , headB is: ";
print(head);

}