// Q. Given a vector array in increasing order of n size and an integer is x.
//    find the unique pair of that exist in array who abslute value exactly to x.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    int n=5;
    int i=0; int j=i+1;
   int x; 
   cout<<"enter x value : ";
   cin>>x;
   int ans=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==x){
            ans++;}
        }
    }
    cout<<ans;
    cout<<endl;

 // second method :

int result=0;
 while(i<n && j<n){
        if(arr[i]+arr[j] == x){
             i++;
             j--;
             result++;
        
        }
        else if(arr[i] + arr[j] < x){
            i++;
        }
        else{
            j--;
        }
    }
  cout<<result;

}