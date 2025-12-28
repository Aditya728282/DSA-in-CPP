
#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    //constructor
    stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
      if(top2 - top1 ==1){
       //stack overfull
       cout<<"stack1 is overflow :"<<endl;
       }
       else{
        top1++;
        arr[top1]=data;
       }
    }

    void push2(int data){
       if(top2 -top1== 1){
        cout<<"stack2 is over flow"<<endl;
       }
       else{
        top2--;
        arr[top2]=data;
       }
    }

    void pop1(){
      if(top1 == -1){
        // empty stack;
        cout<<"stack 1 is allrready empty"<<endl;
      }
      else{
        arr[top1]= 0;
        top1--;
      }
    }

    void pop2(){
       if(top2 == size){
        // empty stack;
        cout<<"stack 1 is allrready empty"<<endl;
      }
      else{
        arr[top2]=0;
        top2++;
      }
    }
    void print(){
        for(int i=0; i<size; i++){
           cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

 stack s(10);
  s.push1(1);
  s.push1(2);
  s.push1(3);
  s.push1(4);

  s.push2(10);
  s.push2(11);
  s.push2(12);
  s.push2(13);
  s.push2(14);
 
 //s.print();


cout<<endl;
 s.pop1();
 s.pop1();
  s.pop2();

 s.print();
}

