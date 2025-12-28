 // For Loop :
 // for(initialised; condition; updation){
 //code
 //}
 
 #include<iostream>
using namespace std;
int main(){
    int n , sum=0;
     cout<<"Enter a number: ";
    cin>>n;
     
// Sum of Natural Number :
   for(int i=0; i<=n; i++){
    sum=sum+i;
   }
   cout<<"Sum of given natural number is : "<<sum<<endl;
    cout<<endl;

 //Table of any Number :
    cout<<"Table of given number is :"<<endl;
    for(int i=1; i<=10; i++){
       cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    
    return 0;

}