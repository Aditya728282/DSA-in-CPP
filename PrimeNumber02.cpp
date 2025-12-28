// C++ program to check if a 
// number is prime 
#include <iostream> 
#include <math.h> 
using namespace std; 

int main() 
{ 
	int n, flag = 1; 

	// Ask user for input 
	cout << "Enter a number: "; 

	// Store input number in a variable 
	cin >> n; 

	// Iterate from 2 to sqrt(n) 
	for (int i = 2; i <= sqrt(n); i++) { 

		// If n is divisible by any number between 
		// 2 and n/2, it is not prime 
		if (n % i == 0) { 
			flag = 0; 
			break; 
		} 
	} 

	if (n <= 1) 
		flag = 0; 

	if (flag == 1) { 
		cout << n << " is a prime number"; 
	} 
	else { 
		cout << n << " is not a prime number"; 
	} 

	return 0; 
} 

// This code is contributed by shivanisinghss2110.
