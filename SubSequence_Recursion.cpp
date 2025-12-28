// Include Or Exclude


#include<iostream>
using namespace std;

void Sub_Sequence(string str, string output , int i){
    // base case 
    if(i>str.length()-1){
        cout<<output<<" ";
        return;
    }

    // exclude
    Sub_Sequence(str, output , i+1);

    // Include
    output = output + str[i];
    Sub_Sequence(str, output , i+1);
}


int main()
{
  string str = "abc";
  string output= "";
  int i=0;
   
   Sub_Sequence(str, output , i);

}