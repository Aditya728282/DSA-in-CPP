#include<iostream>
using namespace std;

 void counting(int n){


 // Base Condition
   if(n==0){
     return ;
    }

  cout<<n<<endl;

 //Recursive Relation
  return counting(n-1);


}
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    counting(n);
  

}