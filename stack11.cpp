
// Q . Find the Next Smaller element and Previous Smaller element 

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

// For Previous Smaller Element find 
// Its working Left to Right
vector<int>prevSmaller(vector<int>&input){
    stack<int>st;
    vector<int>ans(input.size());
    st.push(-1);

    for(int i=0; i<input.size(); i++){
        int curr = input[i];
       
       while(st.top() >= curr){
          st.pop();
       }

       ans[i] = st.top();

       st.push(curr); 
    }
    return ans;
}

// For Next Smaller Element find 
// Its working Right to Left
vector<int>nextSmaller(vector<int>& input){
   stack<int>st;
   st.push(-1);
    vector<int>ans(input.size());
   for(int i=input.size()-1; i>= 0; i--){
     int curr = input[i];

     while(!st.empty() && st.top() >= curr){
         st.pop();
        }

        if(!st.empty()){
        ans[i]= st.top();}
        st.push(curr);
    }
 return ans;

}

int main(){
    vector<int>v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

   
    vector<int>ans1 =nextSmaller(v);

    cout<<"priting 1 :"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<ans1[i]<<" ";
    }
    cout<<endl<<endl;


  vector<int> ans2 = prevSmaller(v);
   cout<<"printing 2: "<<endl;
  for(int i=0; i<v.size(); i++){
    cout<<ans2[i]<<" ";
  } 
  cout<<endl;
}