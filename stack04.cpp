#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

  // constructor

  stack(int size){
    arr = new int [size];
    this -> size = size;
    top1= -1;
    top2= size;

  }

  // function 

  void push1(int data){
    if(top2 - top1 == 1){
        // stack 1 have not space available
       cout<<"Overflow in stack: "<<endl;
    }

    else{
        // stack1 is empty then insert
         top1++;
         arr[top1]= data;
    }
  }

  void pop1(){
    
    if(top1 == -1){
        //empty stack1
        cout<<"empty stack1 : "<<endl;
    }

    else{
       // stack 1 is not empty 
        top1--;
    }
  }

  void push2(int data){
    if(top2 - top1 == 1){
        // stack 2 is not space available
        cout<<"Overflow in stack 2"<<endl;
    }
    else{
        // empty stack2 then insert
        top2--;
        arr[top2]= data;
    }
  }

  void pop2(){
     // Empty in stack 2
     if(top2 == size){
        cout<<"Underflow stack 2: "<<endl;
     }
     else{
     // stack2 is not empty
        top2++;
     }
  }


   void print(){
    cout<<endl;
    cout<<"top1 :" <<top1<<endl;
    cout<<"top2 :"<<top2<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
  } 
};

int main(){
 stack s(8);

    // Insertion
    s.push1(10);
     s.print();
    s.push1(20);
     s.print();
    s.push1(30);
     s.print();
    s.push1(40);
     s.print();

    s.push2(100);
     s.print();
    s.push2(110);
     s.print();
    s.push2(120);
     s.print();
    s.push2(130);
     s.print();

   // remove all print and final one print call;
}
