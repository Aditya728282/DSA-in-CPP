//    Q. Pattern Bassed Pyramid And reverse PYRAMID QUESTION

#include<iostream>
using namespace std;
int main(){
  // Pyramid Pattern
    int n=12;
    //outer loop
    for(int i=0; i<n; i++){
       
     //  space 
     for(int j=0; j<n-i-1; j++){
        cout<<" ";
     }
     // star
     for(int k=0; k<i+1; k++){
        cout<<"* ";
     }
     cout<<endl;
   }
  
   

   // Reverse Pyramid Pattern
   for(int i=0; i<n; i++){
      
      //space 
      for(int j=0; j<i; j++){
         cout<<" ";
      }

     // Star
     for(int k=0; k<n-i; k++){
        cout<<"* ";
     }
     cout<<endl;
   }
}