
/* Example 08 : Find the MINImum Number In array by using th Recursion ??
*/

#include<iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[], int n, int i, int& mini){

    // base Case
    if(i>=n){
        return ;
    }

    // 1 case solve dar do 
    mini = min(arr[i], mini);


    // Baki Recursion Sambhal Lega
    findMin(arr , n, i+1, mini );

}


int main(){
    int arr[]= {10, 20, 6, 30, 55};
    int mini= INT_MAX;
    int n = 5;
    int i=0;

    findMin(arr, n, i, mini);
    cout<<"The minimum Number is : "<<mini<<endl;
    return 0;
}