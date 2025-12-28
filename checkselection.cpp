// find the selection sort of any gien array ? 

#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
         for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
             swap(arr[j],arr[i]);
             
            }
         }
    }
}

int main(){
    int arr[]={3,4,2,9,1};
   selectionSort(arr, 5);
   for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}