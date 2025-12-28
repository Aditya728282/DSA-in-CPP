#include<iostream>
#include<vector>
using namespace std;
 void Mergesort(int arr1[], int n, int arr2[], int m , int arr3[]) {
   int i=0;
   int j=0;
   int k=0;
   while(i<n && j<m){
       if(arr1[i] < arr2[j]){
        arr3[k]=arr1[i];
         k++;
         i++;
       }
       else{
        arr3[k]=arr2[j];
        k++;
        j++;
       }
   }
       //first array remaining element store in array 3rd
       while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
       }
      //second array remaining element store in array 3rd
       while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
       }
   }

   // print function

   void print(int mergeArray[], int size){
    for(int i=0; i<size; i++){
        cout<<mergeArray[i]<<" ";
    }
   }
 

int main(){
int arr1[5]={4,2,3,6,8};
int arr2[3]={7,9,1};

int arr3[8]={0};                      // this array in store value;

Mergesort(arr1  ,5 ,  arr2 ,3,  arr3); // first function call

print(arr3,8);                       // print function call

   return 0;
}

