#include<iostream>
using namespace std;

int main(){
  /*  char ch[10]= {"apple"}; // initialized character 
    cout<<ch<<endl;           // print out charactrer

    int i=0;
    while(ch[i]!='\0'){
        cout<<ch[i];
        i++;
    }
    cout<<endl;
*/



    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Initializing array with proper size after getting n
    char arr[n];

    cout << "Enter characters: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool check = true;

    // Check for palindrome
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i]) {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "The given characters is a palindrome." << endl;
    } else {
        cout << "The given characters is not a palindrome." << endl;
    }

    return 0;
}

