// Q. find the square root of any number ? 


#include<iostream>
using namespace std;
int sqrt(int n){
    int s=0;
    int e=n;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<e){
      int  sqr=m*m;
    if(sqr==n){
        return m;
    } 
    if(sqr<n){
        ans=m;
        s=m+1;
    }
    else{
       
        e=m-1;
    }
    m=s+(e-s)/2;
    }
    return ans;
}
int main(){
int n;
cout<<"enter a number :";
cin>>n;
cout<<sqrt(n);
}
