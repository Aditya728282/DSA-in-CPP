// Q. In Given stack the top most element push in buttom in stack.

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }

    // top ko pop kar do
    int topElement = s.top();
    s.pop();

    //Reverse calling 
    solve(s, target);

    // Back tracking (push kar do topElement)
    s.push(topElement);
}


void insertBottom(stack<int>&s, int n){

  // Step 1: top of most element take target can't insert at bottom  

    if(s.empty()){
        cout<<"stack is empty";
    }
    
   int target = s.top();
   s.pop();

   solve(s,target);
    
}

int main(){
stack<int>s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

insertBottom(s,5);

while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
return 0;
}