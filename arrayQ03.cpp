// find out the square of given array in sorting order.
//       [-5,-6,0,1,3]  ==  [0,1,9,25,36]
#include<iostream>
using namespace std;
int main(){

    int arr[]={-5,-6,0,1,3};
    int i=0; int n=5;
    int j=n-1;

    int ans[n];
    int k=n-1;
    
   while(i<n && j<n){
    if(abs(arr[i])<abs(arr[j])){
       ans[k]=arr[j]*arr[j];
       j--;
       k--;
    }
    else{
        ans[k]=arr[i]*arr[i];
        i++;
        k--;
    }
   }
   for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
   }
 return 0;
}