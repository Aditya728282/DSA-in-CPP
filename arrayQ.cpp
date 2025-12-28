// Q. Given two arr1 , arr2 merge a new array in both array are store in sorted manner .

#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2};
    int arr2[]={3,4,5,6};
     int m=2;
     int n=4;
     int mergeArr[m+n];
     int i=0 ;    // will help us iterate of array 1
     int j=0;     // will help us iterate of array 2
     int k=0;     // will help us iterate of array mergeArray
     
    while(i<m and j<n){
        if(arr1[i]<arr2[j]){
           mergeArr[k]=arr1[i];
            i++;
            k++;
        }
        else{
             mergeArr[k]=arr1[j];
            j++;
            k++;
        }
    }
    while(i<m){
       mergeArr[k]=arr1[i];
       i++;
       k++;
   }
   while(j<n){
       mergeArr[k]=arr2[j];
       j++;
       k++;
   }
   for(int i=0; i<m+n; i++) {
    cout<<mergeArr[i]<<" ";
   }
    return 0;
}
