/* Example 7 : Find the Maximum number in array by using Recursion ? 
*/

#include<iostream>
#include<limits.h>
using namespace std;

void findmax(int arr[], int n, int i, int & maxi){

 // Base case 
 if(i>=n){
    return;
 }

 // 1 Case solve Kar do
 if(arr[i] > maxi ){
    maxi=arr[i];
 }

 // Baki Recursion Function sambhal lega 

 findmax(arr,n,i+1, maxi);


}



int main(){
int arr[]= {70, 22, 30 ,44, 66, 20};
int n=6;
int i=0;

int maxi = INT_MIN;
 findmax(arr , n, i , maxi);

 cout<<" The Maximum Number is: "<<maxi<<endl;
 
}