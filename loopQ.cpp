 // DIGIT COUNT FOR ANY GIVEN NUMBER :
 

 #include<iostream>
using namespace std;
int main(){
    int n;  //58734
    cout<<"Enter any digit number : ";
    cin>>n;
   int digit=0;
   while(n>0){
    
    n=n/10;     // logic 58734/10=5873
    digit++;   //5
   }
   cout<<digit<<endl;
    return 0;
    }
