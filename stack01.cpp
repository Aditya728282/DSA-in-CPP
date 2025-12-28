#include<iostream>
#include<stack>
using namespace std;


int main(){
 stack<int>st;

// Insertion 
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);



 // deletion
 st.pop();

 // This tells about Top
 cout<<"Top element is: "<<st.top()<<endl;

 // size of stack 
 cout<<"size of Stack Is: "<<st.size()<<endl;

 // checking stack is empty or not 
 if(st.empty()){
    cout<<"Stack is Empty"<<endl;
 }
 else{
    cout<<"stack is not empty "<<endl;
 }

}