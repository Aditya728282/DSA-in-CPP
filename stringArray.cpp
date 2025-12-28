#include<iostream>
using namespace std; 

// Convert capital to small alphabetic number 
char toLowercase(char ch){
   if(ch>='a' && ch<='z'){
      return ch;
    }
    else{
      char temp = ch-'A'+'a';
      return temp;
    }

}

// Check the given number is Palindrome or Not 
bool CheckPalindrome(char a[] , int n){
   int s=0;
   int e=n-1;
   while(s<=e){
      if( toLowercase(a[s]) !=  toLowercase(a[e])){
        return 0;
      }
      else
      {
         s++;
         e--;
      }
   }
   return 1;

}


// REVERSE STRING ARRAY
void Reverse(char name[],int n){
int s=0;
int e=n-1;
while(s<e){
  swap(name[s], name[e]);
    s++;
    e--;
}
}


// This function used for length of character in array
int count = 0;
int getLength(char name[]){
   for(int i=0; name[i]!= '\0'; i++){
      count++;
   }

    return count ;
}


int main(){
// char array initilialized
char name[10]; 

cout<<"Enter the Your name :";
cin>>name;
cout<<"Your namme is : "<<name<<endl; 

// length of given word 
 int length = getLength( name);
 cout<<"length is : " <<length <<endl;
 
 // REVERSE FUNCTION CALL
Reverse( name,length);
 cout<<"Reverse answer is : "<<name<<endl;
 cout<<endl;

 
// check palindrome or not function
cout<<"check palindrome or not : "<< CheckPalindrome(name, length)<<endl;

}