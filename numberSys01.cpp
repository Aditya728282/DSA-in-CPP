// Decimal to convert binary number


#include <iostream>
using namespace std;
 int main(){
    int ans=0;
    int n;
    cout<<"enter a decimal number : ";
    cin>>n;
    int power=1;
    while(n>0){
        int paritydigit=n%2;
        ans+= paritydigit*power;
        power*=10;
        n/=2;
    }
    cout<<ans;
    return 0;

    }

 
