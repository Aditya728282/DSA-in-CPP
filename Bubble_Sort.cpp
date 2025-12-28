#include<iostream>

using namespace std;


// Acending order
int Acending_sort(int arr[], int n){
  for(int i=0; i<n; i++){
     for(int j=0; j<n-1; j++){
       if(arr[j] > arr[j+1]){
         swap(arr[j] , arr[j+1]);
       }
     }
  }
}

// Decending order
int Decending_sort(int arr[], int n){
  for(int i=0; i<n; i++){
     for(int j=0; j<n-1; j++){
       if(arr[j] < arr[j+1]){
         swap(arr[j] , arr[j+1]);
       }
     }
  }
}


int main(){
  int n;
  cin>>n;
  
  int arr[n];
  
  for(int i=0; i<n; i++){
   cin>>arr[i];
}
  
 Acending_sort(arr , n);
  for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
}
  cout<<endl;

   Decending_sort(arr , n);
  for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
}
  
  return 0;
}
