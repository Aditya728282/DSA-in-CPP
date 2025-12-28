// Given an sorted array order of n size integer
//   x find the exist number of array whose sum is exactly to x.

 //    1.  arr = [-1,0,1,2,3,4]  x=2
 //              ans= Yes
 //    2. arr 2= [1,2,3,4]      x=9
 //                ans= No

#include<iostream>
#include<vector>
using namespace std;
bool hasPairWithSum(const std::vector<int>& arr, int x) {
    int left = 0;
    int right= arr.size()-1;

    while(left<right){
        int currentsum=(arr[left]+arr[right]);
        if(x == currentsum){
            return true;
        }

        else if(currentsum<x){
           left ++;
        }
        else{
            right--;
        }

    }
    return false;
}



int main(){
    int n; cout<<"enter size of array : ";cin>>n;
vector<int> arr(n);
for(int i=0; i<n; i++){
    int ele; cin >>ele;
    arr.push_back(ele);
}int key; cout<<"enter key : "; cin>>key;

 bool result=hasPairWithSum(arr,key);
 
if(result){
    cout<<"YES " <<endl;
}
else{
    cout<<"NO "<<endl;
}
}