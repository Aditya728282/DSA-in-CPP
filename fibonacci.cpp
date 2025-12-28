
// Find out the fibonacci series to given Number by using Recursion.

#include<iostream>
using namespace std;

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cout<<"Enter the Number :  ";
    cin>>n;
    int ans=fib(n);
    cout<<"At "<<n<< "th term the Fibonacci Number is : "<<ans<<endl;

}