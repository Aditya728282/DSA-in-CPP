#include<iostream>
using namespace std;

//    Head / in starting Node Create 

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

// Inserting Head Node
void insertAtHead(Node* & head , Node *&Tail, int data){
     
     if(head==NULL){

        Node * newNode = new Node(data);
        head = newNode;
        Tail = newNode;
        return ;
     }

     Node * temp = new Node(data);
     temp -> next = head;
     head= temp;
}
// Inserting Tail nodes
void insertAtTail(Node * &head, Node* &Tail ,int data){
        if(head==NULL){

        Node * newNode = new Node(data);
        head = newNode;
        Tail = newNode;
        return ;
     }
        // create a new node
        Node * temp= new Node(data);
        // Point to head
        Tail-> next = temp;
        temp= Tail;
}

void insertMid(Node *& head ,Node* &Tail, int position , int data ){
        if(head==NULL){
            Node*newNode = new Node(data);
            head= newNode;
            Tail= newNode;
            return;
        }
      Node * temp = head;
      int cnt=1;
      while(cnt<position){
        temp = temp->next;
        cnt++;
      }
      // creating a node
      Node* nodeToinsert= new Node(data);

      nodeToinsert ->next = temp->next;
      temp -> next = nodeToinsert; 
    }

    void DeleteHead(int position , Node* &head , Node *& Tail){
        if(head== NULL){
            cout<<"Empty Node Cant Delete";
        }
        Node*temp= head;
        if( position== 1)
        head = head->next;
        temp-> next= NULL;
        delete(temp);
    }

void print(Node * &head){
    Node *temp= head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp= temp-> next;
    }
    cout<<endl;
}


int main(){

    Node * head = NULL;
    Node * Tail = NULL;

    insertAtHead(head , Tail, 20);
    insertAtHead(head , Tail, 50);
    insertAtHead(head , Tail, 60);
    insertAtHead(head , Tail, 90);
    insertAtTail(head , Tail, 77);

    print(head);

   cout<<endl;

    insertMid(head, Tail,2, 55);
    cout<<"After Inserting Mid Node: ";
    print(head);
    cout<<endl;
    
    DeleteHead(1, head, Tail);
    print(head);
}