//   Q. Find Reverse string by using stack 

#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str= "RAM";
    

    // create a char stack;
    stack<char>ch;

  // push each character in stack
  for(int i=0; i<str.length(); i++){
    ch.push(str[i]);
  }

   cout<<"Reverse is: ";
  while(!ch.empty()){
   cout<<ch.top()<<" ";
    ch.pop();
  }
  
}