
// To find Minimum Number of coin to reach to Target sum .

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int MinTarget(vector<int>&arr, int  target){

    // base case
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }

    // 
     int mini = INT_MAX;
      
    for(int i=0; i<arr.size(); i++){
         int ans = MinTarget(arr , target - arr[i]);
         if(ans != INT_MAX){
            mini = min(mini , ans+1);
        }
    }
    return mini;

}


int main(){
    int target = 3;
    vector<int> arr{1,2};
    int mini = INT_MAX;
  int ans =  MinTarget(arr, target);
  cout<<"The Minimum Sum of Taregt to raech Is : "<<ans<<endl;
}
