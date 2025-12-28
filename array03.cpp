#include<iostream>
using namespace std;
int main(){
    char vowel[5];
   cout<<"Enter vowels: ";
    for(int i=0; i<5; i++){ // taken input from user
        cin >> vowel[i];
    }

    cout<<"Vowel is : "; // print all vowel
    for(int i=0; i<5; i++){
        cout<<vowel[i]<<" ";
    }

return 0;
}