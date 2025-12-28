#include<iostream>
#include<stack>
using namespace std;


int main(){
 stack<char>st;
 string name = "ram";


 for(int i=0; i<name.length(); i++){
    st.push(name[i]);
 }

  cout<<"Reverse is: ";
  while(!st.empty()){
   cout<<st.top()<<" ";
    st.pop();
  }
}