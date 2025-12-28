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

  // 2. Delete / remove
  void pop(){
      if(top == -1){
        // empty element 
        cout<<"Stack is Empty :"<<endl;
      }
      else{
        // not empty
        top--;
       
      }
    }

 // 3. Find top element 
  int  getTop(){
     if(top ==-1){
        // empty element 
        cout<<"Stack is Empty :"<<endl;
        return -1;
      }
      else{
       return arr[top];
      }
    }
 

 
    // 4. Check if stack is empty
    bool empty() {
        return top == -1;
    }
 
 // 5. Find the size present int stack
  int getSize(){
    return top+1;
  }

};

int main() {
    stack st(9);

    // Insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while (!st.empty()) {
        cout << st.getTop() << " ";
        st.pop();
    }

    return 0;
}
