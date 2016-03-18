#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// This problem asks for the sum of Fibonnaci sequence values that are even and less than 4 million.

int main()
{
	int first = 1, second = 2, null = 0, sum = 2;

	while (1)
	{
		if ((first + second) >= 4000000)
		{
			break;
		}
		else if ((first + second) % 2 == 0)
		{
			sum += (first + second);
			null = first;
			first = second;
			second = (null + first);
		}
		else
		{
			null = first;
			first = second;
			second = (null + first);
		}
	}
	cout << sum << "\nThis problem is solved!\n" << endl;
	return 0;
}