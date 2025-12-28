#include<iostream>
using namespace std;
int main(){

    // example 01
    int first=8;
    int second =18;
    int *ptr=&second;
    *ptr=9;
    cout<<first<<" "<<second<<endl;

    // example 2;
    int num1=6;
    int *ptr1= &num1;
    cout<<(*ptr1)++<<" ";
    cout<<num1<<endl<<endl;

    // Example 3;
     int first1=8;
     int second1=11;
     int *third=&second1;
     cout<<first1<<" "<<second1<<endl;


   // Example 4
    float f = 11.5;
    float h = 21.5;
    float *p=&f;
    (*p)++;
    *p=h;
    cout<<*p<<" "<<f<<" "<<h<<endl;

  // Example5
  int arr[5];
  int *ptr2;
  cout<<sizeof(arr)<<" "<<sizeof(ptr2)<<endl;


  // Example 6
  int arr1[]={11, 5,6,7};                 // Arr = First Location of Array
  cout<<*(arr1)<<" "<<*(arr1+1)<<endl<<endl;    //*arr = Element on zero Location

  // Example 7
  int arr2[3]={11,21,31};
  int *ptr3=arr2;
  cout<<  ptr3[2] <<endl;


  // Example 8
  char ch='a';
  ch++;
  char *ptr4=&ch;
  cout<<*ptr4<<endl;


  // Example 9
  char arr3[]="abcde";
  char *ptr5=&arr3[0];          // In char Point cannot take adress 
  cout<<ptr5<<endl;

 // Example 10
  char arr4[]="RAMJI";
  char *ptr6= arr4;
  cout<<arr4[0]<<" "<<ptr6[0]<<endl;

  // Example 11
  int first2=110;
  int *ptr7= &first2;
  int **q=&ptr7;
  int second2=(((**q)++)+9);
  cout<<first2<<" "<<second2<<endl;
  return 0;
}