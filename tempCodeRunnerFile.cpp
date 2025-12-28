#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &nums, int target) {
    // Write your code here.
    cin>>target;
    for(int i=0; i<nums.size(); i++){
    
        if(target==nums[i]){
            cout<<i;
        }
    }
}
int main(){
    int n;
    cout<<" enter size ";
    cin>>n;

    for(int i=0; i<n; i++){
      int ele; cin>>ele;
      nums.push_back(ele);
    }
    int key;
     cin>>key;
    search(nums,key);
   
}