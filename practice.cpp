#include<iostream>
using namespace std;

class stack{
    public:
    int * arr;
    int top ;
    int size;


 // constructor
  stack(int size){
     arr = new int[size];
     this->size = size;
     top = -1;
    } 

  // 1. Push /Insert
  void push(int data){
    if(size - top > 1){
     top++;
     arr[top]=data;
    }

    else{
        // space is not available
        cout<<"Stake Overflow "<<endl;
    }
  }
  void pop(){
    if(top == -1){
        cout<<"All ready is stack empty"<<endl;
    }
    else{
        top--;
    }
  }
  int size(){
    top+1;
  }
  int getTop(){
   arr[top];
  } 
  bool empty(){
   if(top ==-1){
   return true;
   }
   else{
    return false;
   }
  }

};


int main(){
 stack s(10);
 s.push(5);
 s.push(6);
 s.push(7);
 s.push(8);
 s.push(9);
 s.push(1);

  while(!s.empty()){
    cout<< s.getTop()<<" ";
    s.pop();
  }

}