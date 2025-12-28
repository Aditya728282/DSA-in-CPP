#include<iostream> 

using namespace std;
int main(){
   int arr[]= {2,3,4,2,59,4};
   int n=6;
   int ans=0;
   for(int i=0; i<n; i++){
      
      for(int j=i+1; j<n; j++){
         if(arr[i]> arr[j]){
          ans= arr[i];
         }
      }
   }
   cout<< ans<<endl;
}


