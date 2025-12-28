// Q.   find the selection sort of given any array??

// this sortting technique is first sortin technique 

#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
      int  minIndex=i;             // assume i is minimum number 
      for(int j=i+1; j<n; j++){
        if(arr[j] < arr[minIndex]){  // if j is minimum then chenge it
            minIndex=j;              
        }
      }
      swap(arr[i],arr[minIndex]);    // aa[i] swap to arr[j]
    }
}
int main(){
    int arr[5]={5,3,2,1,6};
   selectionSort(arr,5);

   for(int i=0; i<5; i++){         // for show the sorting element 
    cout<<arr[i];
   }
   return 0;
}
