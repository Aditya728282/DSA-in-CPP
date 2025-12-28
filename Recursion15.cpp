//   Example 15: Find the how many Number which can makes taget element and 
//                 what is their maximum Number?? 

#include<iostream>
#include<limits.h>
using namespace std;
int solve(int n, int x, int y, int z){

    // Base case
    if(n==0){
        return 0;
    }

    if(n<0){
        return INT_MAX;
    }

    // 1 case solve kar do
    int ans1 = solve(n-x, x, y, z)+1;
    int ans2 = solve(n-y, x, y, z)+1;
    int ans3 = solve(n-z, x, y, z)+1;

    // Baki Recursion Sambhal lega
    int ans= max(ans1, max(ans2, ans3));
    return ans;
}

int main(){
    int n=7;
    int x=5;
    int y=2;
    int z=2;
     
    
    int ans = solve(n, x, y, z);
    if(ans< 0){
        return 0;
    }
    cout<<"Max Ans Is : "<<ans<<endl;

}