//Reverse of any given number :  
// 54321 = 12345

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;  //4321
     int rev=0;
     while(n>0){
        int lastDigit=n%10; // 1
        rev=rev*10+lastDigit; // 0*10+1 = 1 
        n=n/10;
     }
     cout<<"Rverse of given number is : "<<rev<<endl;
}