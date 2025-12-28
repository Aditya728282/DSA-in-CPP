

// Example 18 : Check given string is Palindrome Or Not bby using of Recursion.??

#include<iostream>
using namespace std;

void isPalindrome(string str, int start , int end){
    // base case
   if(start>=end){
    return ;
   }

   // 1 case solve kar do 
   if( str[start] == str[end] ){
      cout<<"Given string is Palindrome"<<endl;
      return;
   }
   else{
    cout<<"Not Palindrome"<<endl;
    return;
   }

   // Baki Recursion sambhal lega 
   isPalindrome( str, start , end);
}

int main(){
  string str;
  cout<<"Enter the string ";
  cin>>str;

  int start=0; 
  int end=str.size()-1;
  isPalindrome(str, start , end);

}