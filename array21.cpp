// Q. check we can partition array into two subarray with equal sum.
//       more formally check that the prefix sum a part of array is equall to
//        the suffix sum of rest array.??


#include<iostream>
#include<vector>
using namespace std;
  bool sum(vector<int > &v){
   int prefix_sum=0;
   int total_sum=0;

   for(int i=0; i<v.size(); i++){
    total_sum +=v[i];
   }
    for(int i=0; i<v.size(); i++){
        prefix_sum +=v[i];
        int suffix_sum=total_sum-prefix_sum;
        if(prefix_sum==suffix_sum){
            return true;
        }
    }
    return false;
  }

int main(){
    vector<int>v;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
          v.push_back(ele);
    }
    sum(v);
    return 0;
}