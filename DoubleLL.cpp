#include<iostream>
using namespace std;
// DOUBLE LINKED LIST INSERTION (At head, At Tails , In Middle), DELETION 
class Node{
    public:

    int data;
    Node*next;
    Node*prev;

   Node(int data){
      this-> data = data;
      this-> next = NULL;
      this-> prev = NULL;
   }
};


// print node
void print(Node * &head){
    Node *temp= head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp= temp-> next;
    }
    cout<<endl;
}


// Find the of Length of Node
int LengNode(Node*head){
    Node*temp= head;
    int leng=0;
    while( temp!=NULL){
    temp= temp->next;
    leng++;
   }
   return leng;
}
// Insertion at Head 
void insertAtHead(Node *&head, Node * &Tail, int data){
    if(head==NULL){
        Node * newNode= new Node(data);
        head = newNode;
        Tail = newNode;
    }

    else{

        // step 1: create a Node
        Node * newNode= new Node(data);
        // step 2:
        newNode ->next= head;
        head->prev = newNode;
        head= newNode; 
    }
}

// Node Insert At Tail
void insertAtTail(Node*&head, Node *&Tail , int data){
    if(head== NULL){
        Node*newNode= new Node(data);
        head = newNode;
        Tail= newNode;
    }
    else{
     // create new node
     Node* newNode= new Node(data);
     newNode ->prev= Tail;
     Tail-> next = newNode;
     Tail= newNode;
    }
}

// Node Insert at Middle

void insertAtPosition( Node*&head, Node* &Tail , int position, int data){
 if(head== NULL){
   Node *newNode= new Node(data);
   head= newNode;
   Tail = newNode;
  }
  

  // Position is 1 so call the Head funtion
  if(position == 1){
     insertAtHead(head, Tail, data);
     return;
  }

 // Position is greater than length of Node so call the Tails function
   int len = LengNode(head);
   if(position>= len){
     insertAtTail(head, Tail, data);
     return;
  }

  //step 1 : Find the Previous Node or Current Node
   int i=1;
   Node*prevNode = head;
    while(i<position-1){
        prevNode =  prevNode ->next;
        i++;
    } 
    
    Node*curr = prevNode ->next;

    // step 2; create a new node
    Node* newNode= new Node(data);
     prevNode ->next =newNode;
     newNode -> prev = prevNode;

     newNode-> next = curr;
     curr-> prev = newNode;
    
}

// Deletion of node to any position
void DelefromPosition(Node * & head, Node * & Tail, int position){
    if ( head== NULL){
        cout<<"Empty Node can't be Deleted: ";
        return;
    }

    if(head -> next == NULL){
      // single node
      Node * temp = head;
      head->next = NULL;
      Tail -> next = NULL;
      delete temp;
    }
    // If Positon first node is delete
    if( position == 1){
      Node * temp =head;
      head= head->next;
      temp-> next = NULL;
      head -> prev= NULL;
      delete temp;
      
    }

    //position last is delete
    int len = LengNode(head);
    if(position == len){
       
       Node * temp = head;
       temp = Tail;
       Tail = Tail->prev;
       Tail-> next = NULL;
       temp-> next= NULL;
       temp->prev = NULL;
       delete temp;
       return;
    }

    // In middle position Nodde is Delete

      int i=1;
      Node* left= head;
      while( i < position-1){
         left = left-> next;
         i++;
       }

     // find current node Or Right Node
      Node* curr = left->next;
      Node* right = curr ->next;

      left-> next = right;
      curr-> prev = NULL;

      right ->prev= left;
      curr -> next= NULL;
}

int main(){
 Node * n1= new Node(20);
 Node* n2 = new Node(30);
 Node * n3= new Node(40);
 Node * n4= new Node(50);

 Node*head= n1;
 Node* Tail= n4;


 n1 ->next =n2;
 n2-> prev= n1;

 n2-> next= n3;
 n3->prev = n2;

 n3->next= n4;
 n4-> prev = n3;
 print(n1);

 cout<<endl;
 cout<<"Insert AT HEAD: " <<endl;
  
 insertAtHead(head, Tail, 44);
 print(head);

 cout<<endl;

 cout<<"Isert At Tail: "<<endl;
 insertAtTail(head, Tail , 33);
 print(head);

 cout<<endl;

 cout<<"Isert At Midd: "<<endl;
 insertAtPosition(head, Tail , 2, 701);
 print(head);


 cout<<endl;
  int n;
 cout<<"Which position Node Want TO delete: ";
 cin>>n;
 
 DelefromPosition(head, Tail , n);
 print(head);
 cout<<"At "<<n<<"  position Node is deleted";

}