//  Example 17 : Find reversse of any string given by using of Recursion .

#include<iostream>
using namespace std;

void ReverseString(string & str, int s, int e){

    // Base Case
    if(s>=e){
        return;
    }

    // 1 case solve kar do
    
     swap(str[s] , str[e]);
     
    
    // baki Recursion sambhal lega
    ReverseString( str , s+1 , e-1);
    

}


int main(){
 string str;
 cout<<"Enter the String : ";
 cin>>str;
 int s=0;
 int e=str.size()-1;

 ReverseString(str,s ,e);
 cout<<"Reverse String Is: "<<str<<" ";
  
 return 0;
}