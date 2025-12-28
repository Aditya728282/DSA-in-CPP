#include<iostream>
using namespace std;

 int func(int arr[],int num){

    for(int i=0; i<num; i++){
        if(arr[i]>arr[i-1]){
         return 0;
        }
        return 1;
 }
 }
  int main(){
    
  int arr[]={1,2,3,4,5};
    bool sortedflag=func(arr,5);
    if(sortedflag){
        cout<<"GIven array is sorted : ";
    }
    else
    cout<<"Given array is not sorted : ";
  func(arr,5);
  }

  

