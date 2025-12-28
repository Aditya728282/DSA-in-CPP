
// Q. find the square root of given any arrray element ?

#include<iostream>
using namespace std;
long long int Sqrtofbinary(int n){
    int  s=0;
    int e=n;
    long long int mid= s+(e-s)/2;
    int square=mid*mid;
    long long int ans=-1;

    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
           ans=mid;
            s=mid+1;
         }
            else{
                e=mid-1;
            }
           mid= s+(e-s)/2;
    }

 return ans;
}
int main(){
    int number;
    cout<<"enter a number : ";
    cin>>number;

 cout<<Sqrtofbinary( number );

}