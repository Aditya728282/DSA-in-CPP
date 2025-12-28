// Print Prime number between a from b .

#include<iostream>
using namespace std;
bool primenumber(int n){
  for(int i=2; i<=(n-1); i++ ){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
  }
}  
 // better is prime number 
 bool betterprime(int n){
    for(int i=2; i*i<=n; i++){
    if (n%i==0){
        return false ;
    }
    return true;
 } 

}
int main(){
int a ,b;
cout<<"Enter two number : ";

cin>>a>>b;
cout<<" prime number is : ";
for(int i=a; i<=b; i++ ){
    
        if(betterprime(i)){
            cout<<i<<" ";
        }
    }

return 0;
}