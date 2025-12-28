#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string>&ans , int open, int close,string output){
    // base case
    if(open == 0 && close == 0){
        ans.push_back(output);
      
        return;
   }

    // include open bracket
    if(open>0){
        output.push_back( '(' );
        solve(ans , open-1 , close , output);

     // backtraking
        output.pop_back();
   }


   // include close bracket
    if(open <  close){
        output.push_back(')');
       solve(ans , open, close-1, output);

       // backtracking 
       output.pop_back();
    }

}

int main(){
    vector<string>ans;
    int open= 2;
    int close= 2;

    string output = "";
   
   solve(ans , open , close , output );

   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<endl;
   }
   
   return 0;
}