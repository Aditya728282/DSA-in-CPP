/* Example 14 : Find the Number / coins to make target number / target coins
           then after give which takes minimum time to implement the target elment .
*/
// very Importtant Question 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve( vector<int> & arr ,int target ){
    
    // base case
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini = INT_MAX;



    for(int i=0; i<arr.size(); i++ ){
       int ans= solve(arr, target-arr[i]);
    

     if(ans != INT_MAX)
       mini = min(mini, ans+1);
     
    }

  return mini;
}

int main(){
    vector<int> arr{1,2,3};
    int i=0;
    int target=5;
   

    int ans = solve(arr, target);

    cout<<"Ans is : "<<ans<<endl;

}
