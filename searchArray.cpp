// Q.  Checked given number present in array andt its inex print and
//               if not present then print -1.

#include<iostream>
#include<vector>
using namespace std;
int ans=0;
int search(vector<int> &nums, int target) {
    // Write your code here.
      
    for(int i=0; i<nums.size(); i++){
        if(target==nums[i]){
            ans=i;
            return ans;
        }
    }
    return -1;

}

int main(){
    vector<int>nums;
    int n;
    cout<<" Enter size ";
    cin>>n;

    int  notpresent=-1; 

    for(int i=0; i<n; i++){
       int ele; cin>>ele;
      nums.push_back(ele);   
    }

    int target; cin>>target;

  int result=search(nums,target );   // function call

    if(result!=-1){
        cout<<"result find at index "<< ans <<endl;
    }
    else{
        cout<<"not presnt this number : "<<notpresent<<endl;
    }
}