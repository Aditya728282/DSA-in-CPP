#include<iostream>
using namespace std;
void subsequence(string str, int i, string output){
  // base case 
  if(i >= str.size()){
    cout<<"The Subsequence is : "<<output<<endl;
    return; 
  }

  // exclude
   subsequence(str, i+1, output);

  // include
  subsequence(str, i+1, output + str[i] ) ;
   
}


int main(){
string str = "abc";
int i =0;
string output= "";
subsequence(str,i , output);
}