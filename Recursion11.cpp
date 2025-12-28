/* Example 11 : Find Digit of Any GIVEN NUMBER BY USING RECURSION ?? .
*/

#include<iostream>
using namespace std;

void printDigit(int n){
    
   // base case
   if(n==0){
    return ;
   }

   // 1 case solve kar do
  int  digit = n % 10;
   
   // cout<<digit<<" ";

    int newValueN = n/10;

   // Baki recursion sambhal lega 
    printDigit(newValueN);

    cout<<digit<<" ";

}

int main(){
    int n= 647;


    if(n==0){
        cout<<n<<endl;
    }


    printDigit(n);

    return 0;

}
