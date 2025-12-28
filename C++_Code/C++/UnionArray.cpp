#include<iostream>
#include<vector>
using namespace std;

int main(){

   // Array A
    int arra[]= {1,2,3,4,5,6};
    int n=6;


   // Array B
    int arrb[] = {7,8,9};
    int m=3;

    vector<int> ans;

    for(int i=0; i<n; i++){
        ans.push_back(arra[i]);
    }

    for(int j=0; j<m; j++){
        ans.push_back(arrb[j]);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


}
