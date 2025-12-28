#include<iostream>
using namespace std;

int ReverseArr(int a[], int n){
   int start = 0;
   int end = n-1;
   while(start <= end){

    // swap
    int temp;
    temp = a[start];
    a[start] = a[end];
    a[end]= temp;
     start++;
     end--;

   }
}
 void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
 }



int main(){
 int arr[]= {1,2,3,4,5,6};

 ReverseArr(arr , 6);
 print(arr , 6);

}