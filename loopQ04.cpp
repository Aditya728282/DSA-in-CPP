// PRINT FACTORIAL OF GIVEN NUMBER : 
// n! = n*(n-1)!
// 1! = 1
// 2! = 2*1!
// 3! = 3*2!
// 4! = 4*3!
// 5! = 5*4!


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;  
    int factorial=1;
    cout<<"factorial of given number is : "<<endl;
    for(int i=1; i<=n; i++){
        factorial=factorial*i;
        
        cout<<factorial<<endl;
    }
  return 0;
}