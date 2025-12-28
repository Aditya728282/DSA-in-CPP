/*  Q. Reverse the array
    arr={5,6,3,4,9}
    after reverse = {9,4,3,6,5}*/ 

#include<iostream>
#include<vector>
using namespace std;

void ReverseArray(vector<int> &v , int n){
  int  start=0;
  int end=n-1;
  while(start<=end){
    swap(v[start],v[end]);
    start++;
    end--;
  }

}


int main(){
 vector<int> v;
  cout<<"Enter size Of array : ";
  int n ;
  cin>>n;
   
 cout<<"Enter the array element : ";
  for(int i=0; i<n; i++){
    int element; 
    v.push_back(element);
    cin>>v[i];
  }

  ReverseArray(v,n) ;
  for(int i=0; i<v.size(); i++){
    cout<<v[i];
  }
  return 0;
} 


