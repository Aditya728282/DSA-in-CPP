//   Print 3*3 matrix using 2D-Array .

#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"enter size of M*N :" ;
    cin>>n>>m;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}