// Example 16 : find the Last Occurance of any given string ??


#include<iostream>
using namespace std;

void lastOccurance(string &str, int i , char ch){

    // base case
    if(i < 0){         // concept searching by Right to left 
        return;
    }

    //  case solve kar do
    if(str[i] == ch){
        cout<<"Last Occurance Is : "<<i;
        return;
    }

    // bakirecursion sambhal lega
    lastOccurance(str, i+1, ch);

}
int main(){

    string str;
    cout<<"Enter String : ";
    cin>>str;

    char ch;
    cout<<"Enter Key : ";
    cin>>ch;

    int i=0;

   lastOccurance(str, i, ch);
   
   return 0;

}