// Q. Find Middle element in stack 

#include<iostream>
#include<stack>
using namespace std;

void FindMidd(stack<int> &s , int &size){
    // base case
    if(s.size() == size/2 +1){
        cout<<"middle element Is: "<<s.top()<<endl;
        return;
    }

    // store in temp variable
    int temp = s.top();
    // delete
    s.pop();

    // recursive funnction call
    FindMidd(s, size);

    //backtraking
    s.push(temp);
}


int main(){
 stack<int> s;

 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);

  int size = s.size();
 FindMidd(s, size);

}