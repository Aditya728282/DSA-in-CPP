#include<iostream>
using namespace std;

int main(){
    int count=0 , n=5; 
    for(int i=1; i<=n; i++){
       if(n % i == 0){
         count++;
       }
    }
    if(count == 2){
        cout<<"Prime Number"<<endl;
    }

    else{
        cout<<"Not Prime"<<endl;
    }
}    