// Example 06 : Print Given Array by Using Recursion  

#include<iostream>
using namespace std;

void printArr(int arr[], int size, int i){
   // Base case 
    if(i >= size){
       return ;
    }

  // First case solve karado 
     cout<<arr[i]<<" ";

  // Baki Recursion Sambhal Lega 
  printArr(arr,size,i+1);


}

int main(){
     
    int arr[]= {10, 20, 30, 40, 50};
    int size=5;
    int i=0;
    printArr(arr, size, i);
    return 0;
}