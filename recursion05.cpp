 /*  Question:  A person can climb stair at once time only one 
                stair climb and another time two stair climb find 
                out the how many methods to climb nth stair ???       */

#include<iostream>
using namespace std;

int stairClimb(int n){

    // Base Case
    if(n==0 || n==1){
        return 1;
    }

    // Recursive Relation 
    return stairClimb(n-1) + stairClimb(n-2);
}



int main(){
    int n;
     cout<<"Enter Number : ";
    cin>>n;
    int ans = stairClimb(n);
    cout<<"There Are methods to stairClimb : "<<ans<<endl;
}