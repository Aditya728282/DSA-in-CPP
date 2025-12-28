// Q. Given an integer a sorted in non decreasing order return square of each
//     element sorted in non decreasing order .


#include<iostream>
#include<vector>
using namespace std;
  void sorted(vector<int> &v){
    vector<int>ans;

   int left_ptr=0;
   int right_ptr=v.size();

   while(left_ptr<=right_ptr){
    if( abs(v[left_ptr]) < abs (v[right_ptr])){
          ans.push_back(v[right_ptr]*v[right_ptr]);
          right_ptr --; 
   }
   else{
    ans.push_back(v[left_ptr]*v[left_ptr]); 
    left_ptr++;
   }

   }
    //reverse(ans.begin(), ans.end());

   for(int i=v.size()-1; i>=0; i--){    // this function used to reverse given input 
    cout<<ans[i]<<" ";
  }
  
  }

int main(){

    vector<int> v;
    int n; cout<<"Enter size of Array : ";
    cin>>n;
    int ele;
    for(int i=0; i<n; i++){
      cout<<"Enter an Element "<<i<<": ";
      cin>>ele;
     v.push_back(ele);
    }
   sorted(v);
}