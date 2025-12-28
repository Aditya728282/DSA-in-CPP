
// Q. Find the Largest Rectangle In Histogram 

// This is very important Question (leetcode -Q.No.- 84)

#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;

// For Previous Smaller Element find 
// Its working Left to Right
vector<int>prevSmaller(vector<int>&input){
    stack<int>st;
    vector<int>ans(input.size());
    st.push(-1);

    for(int i=0; i<input.size(); i++){
        int curr = input[i];
       
       while(st.top() != -1 && input[st.top()] >= curr){
          st.pop();
       }

       ans[i] = st.top();

       st.push(i); 
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

     while(st.top() != -1 && input[st.top()] >= curr){
         st.pop();
        }

        if(!st.empty()){
        ans[i]= st.top();}
        st.push(i);
    }
 return ans;

}

// Find Histogram 
int getrectangularAreaHistogram(vector<int> & height){

   // step1 : Previous smaller element 
   vector<int> prev = prevSmaller(height) ;

   // step 2: Next smaller element
   vector<int>next = nextSmaller(height);

   //step3:
   int  maxArea= INT_MIN;

   for(int i=0; i<height.size(); i++){
    int length = height[i];

    if(next[i]== -1){
        next[i] = height.size();
    }

    int width = next[i] - prev[i] - 1 ;
    int area = length * width ;

    maxArea = max(area, maxArea);
   }

  return maxArea;
}

int main(){
  vector<int>v;
   v.push_back(2);
   v.push_back(1);
   v.push_back(5);
   v.push_back(6);
   v.push_back(2);
   v.push_back(3);


cout<<"Ans is: "<< getrectangularAreaHistogram(v);


}
