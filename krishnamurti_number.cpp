
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the factorial of any number
int factorial(int n)
{
	int fact = 1;
	while (n != 0) {
		fact = fact * n;
		n--;
	}
	return fact;
}

bool isKrishnamurthy(int n)
{
	int sum = 0;

	int temp = n;
	while (temp != 0) {
	
		sum += factorial(temp % 10);

		temp = temp / 10;
	}

	return (sum == n);
}

int main()
{
	int n = 145;
	if (isKrishnamurthy(n))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
