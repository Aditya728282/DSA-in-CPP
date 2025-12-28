#include <iostream>
using namespace std;
int reverse(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        // a[start]=a[end];
        // swap(a[start],a[end]);
        int temp;
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int even[] = { 1,2,3,4,5,6};
    int odd[] = {3, 5, 8, 9, 5};

    reverse(even, 6);
    printArr(even, 6);
    cout << endl;

    reverse(odd, 5);
    printArr(odd, 5);
}
