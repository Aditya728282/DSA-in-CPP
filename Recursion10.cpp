
/* Example 10 : find the Target key is present at which index print their 
                index by using Recursion ???.

*/

#include<iostream>
using namespace std;

int checkKey(string str, int n, int i, char key){

    // base Case 
    if(i>=n){
        return -1;
    }

    // 1 case solve kar do 
    if(str[i]==key){
    cout<<"Fount At INdex : "<<i<<endl;
    }

    // Baki Recursion sambhal lega 
    return checkKey(str, n , i+1, key);

}


int main(){
    string str = "aditya";
    int n = str.length();
    int i = 0 ;
    char key = 'b';

    checkKey(str, n , i, key);

  return 0;

}