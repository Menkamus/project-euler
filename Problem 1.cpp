#include <iostream>

using namespace std;

int main()
{

	// This problem asks for the sum of multiples of 3 and 5 that are less than 1000.

	int count = 1;
	int sum;
	while (count < 1000)
	{
		if (count % 3 == 0)
		{
			sum += count;
			count++;
		}
		else if (count % 5 == 0)
		{
			sum += count;
			count++;
		}
		else
			count++;
	}
	
	cout << sum << "\nThis has been solved!\n" << endl;

	return 0;
}