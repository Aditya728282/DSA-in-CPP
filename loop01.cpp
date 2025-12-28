#include <iostream>
using namespace std;
int main(){

    // while loop :
    // while(condition){
      //code  
      // updation
    // }


    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum=0;
    int i=1;   //loop variable
    while(i<=n){ // condition
    sum=sum+i;  
    i++ ;      // updation
    }
      cout<<sum<<endl;
return 0;
}