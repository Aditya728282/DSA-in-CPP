/* Example 09: Find Target Char is present in string or Not in given string 
                by using rrecursion ????.
*/

#include<iostream>
using namespace std;

bool checkKey(string str, int n, int i, char key){

    // base Case 
    if(i>=n){
        return false;
    }

    // 1 case solve kar do 
    if(str[i]==key){
        return true;
    }

    // Baki Recursion sambhal lega 
    return checkKey(str, n , i+1, key);

}


int main(){
    string str = "aditya";
    int n = str.length();
    int i = 0 ;
    char key = 'y';

   bool ans= checkKey(str, n , i, key);
   //cout<<"key is : "<<ans<<endl;

   if(ans){
     cout<<"Target Key is present : ";
   }
   else{
     cout<<"Target Key is not present : ";
   }

  return 0;
}