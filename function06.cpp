
// Print Odd number between a from b .

#include<iostream>
using namespace std;

int oddnumber(int a){
    return a;
}




int main(){
 int a,n;
 cout<<"Enter two number : ";
 cin>>a>>n;
 cout<<" Odd number is : ";
 for(int i=a; i<=n; i++){
    if(i%2!=0){
        cout<<oddnumber(i)<<" ";
    }
 }
return 0;
}