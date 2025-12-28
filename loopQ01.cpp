// sum of given number:
// 7332 = 2+3+3+7 = 15


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int sum=0;
    while(n>0){
       int lastDigit=n%10;
       sum=sum+lastDigit;
       n=n/10;
    }
    cout<<"sum of given number is : "<<sum<<endl;
    return 0;
}