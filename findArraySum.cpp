/*  Q. WHEN TWO ARRAY IS GIVEN THEN FIND OUT THE SUM OF TWO ARRAY OF ELEMENT ???
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// function
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
 vector<int> ans;
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
   // Jab dono array ka size equal ho
    while(i >= 0 && j >= 0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
     // Jab array1 me element jyada ho
    while(i >= 0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
      // Jab array2 me element jyada ho
    while(j >= 0){
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    // jab dono element add karne ke bad carry bach jaye to use aise hi print kar do
    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() { 
    // For FIRST array input by user 
    vector<int> v1;
     int n;
     cout<<"ENTER SIZE OF FIRST ARRAY : ";
     cin>>n;
     cout<<"ENTER ELEMENT : ";
     for(int i=0; i<n; i++){
     int element;
     v1.push_back(element);
     cin>>v1[i];
    }

    // For second array input by user 
     vector<int> v2;
     int n2;
     cout<<"ENTER SIZE OF SECOND ARRAY : ";
     cin>>n2;
     cout<<"ENTER ELEMENT : ";
     for(int i=0; i<n2; i++){
     int element;
     v2.push_back(element);
     cin>>v2[i];
     }

   // FUNCTION CALL
   vector<int> result = findArraySum(v1, v1.size(), v2, v2.size());
    cout<<"SUM OF TWO ARRAY IS : ";
    for (int i=0; i<result.size(); i++) {
        cout<<result[i]<< " ";
    }
    
    cout << endl;
    return 0;
    
}