//Print all values between 1 to 50 expect the Multiple of 3.
#include <iostream>
using namespace std;
int main(){
    int n;
    for(int i=1; i<=50; i++){
        if(i%3==0){
            continue; // skip all item which are divisible by 3
        }
       cout<<i<<endl; 
    }
}