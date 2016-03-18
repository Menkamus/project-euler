#include <iostream>

using namespace std;

// This problem asks for the largest prime factor of 600851475143.

int prime(long long a) // Prime determinant function
{
	int z = 1;
	for (long long i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			z = 0;
			break;
		}
	}
	return z;
}


int main()
{
	long long input = 0;
	cout << "Please input the number you wish to find the prime factors of: " << endl; // Self-explanatory, asks for input of number to factor.
	cin >> input;
	cin.ignore();

	long long factor = 0;
		for (long long i = 2; i <= input; i++) //  Starting at 2, working up to half of the number (largest possible factor)
		{
			while (input % i == 0) // If mod returns 0, we know it's a factor.
			{
				input = input / i;
				if (prime(i) == 1) // If prime returns 1, we know it's a prime factor.
				{
					factor = i;
				}
			}
		}

		cout << "\nThe highest prime factor is "<< factor << "\n" << endl; // Eventually, the highest prime factor should be output here.

		cout << "\nThis problem is solved!" << endl;

	return 0;
}