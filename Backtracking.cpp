#include<iostream>
using namespace std;
void printPermutation(string str, int i){

    // base case
    if(i>= str.length()){
        cout<< str <<" ";
        return;
    }
   
   // 1 case solve kar do
    for(int j=i; j<str.length(); j++){

        // swap 
        swap(str[i], str[j]);
        printPermutation(str, i+1);

        // Backtracking --------->>>>> to recreate the Original value
        swap(str[i], str[j]);

    }

}


int main(){
  string str= "abc";
  int i=0; 
  printPermutation( str ,i);

}