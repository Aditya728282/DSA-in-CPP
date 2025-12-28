#include<iostream>
using namespace std;
int main(){
    int n=6;
int arr[n]={1,2,4,55,66,4};
int key ,i;
cout<<"Enter number want u search : ";
cin>>key;
int found=0;
   for ( i=0; i<n; i++){
       if(arr[i]==key){

         cout<<"found at index : "<< i;
         found=1;
         break;
         }}

 if(i==n){
    cout<<" This element is not present in array "<<endl;
    cout<<" THANKS ";
 }         
}