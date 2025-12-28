// Q. Given integer array a retun prefix sum  without creating a new array???
//      eg:- [5,4,1,2,3]
//      ans:- [5,9,10,12,15]

#include<iostream>
#include<vector>
using namespace std;
 void prefixnum(vector<int> &v){
   for(int i=1; i<v.size(); i++){
    v[i]=v[i-1]+v[i];                 // v[i-1]=5 , v[i]=4   then add
   } 
   return ;
 }
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    prefixnum(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}