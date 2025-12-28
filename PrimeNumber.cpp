/*Q. Given an integer n, return the number of prime numbers that are 
   strictly less than n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/

// leetcode problem 

#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
    

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int cnt = 0;

    for (int i = 2; i * i < n; i++) {
        if (prime[i]) {
            for (int j = i * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int n;
    cout<<" Enter number to count of Prime NO. : ";
    cin>>n;

    int primeCount = countPrimes(n);
    cout << "The number of primes less than " << n << " is: " << primeCount << endl;
    return 0;
}
