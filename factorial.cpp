
// Factorial find by Using of Recursion
#include<iostream>
using namespace std;

int factorial(int n){

    // Base condition
    if(n==0){
        return 0;
    }
    if( n==1){
        return 1;
    }

  // Recursive Relation
  return n * factorial(n-1);

}

int main(){
   int n;
   cout<<"Enter The Number : ";
   cin>>n;
   int ans= factorial(n);
   cout<<ans<<endl;
}