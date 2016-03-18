#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

// This problem asks for the largest palindromic number as a product of two three-digit numbers.

int main()
{
	// First I declare an int for the answer, an int to compare against, and strings to hold the conversions of the respective ints.
	int number = 0;
	int tempNum = 0;
	int tempNumRev = 0;
	string numCharTemp, numCharRev;

	// Two for loops to capture everything from 001 * 001 to 999 * 999
	for (int i = 1; i < 1000; i++)
	{
		for (int j = 1; j < 1000; j++)
		{
			number = i*j;
			stringstream ss; //Generate a stringstream to convert the int to string
			ss << number;
			numCharRev = ss.str();
			ss.clear();
			
			numCharTemp = numCharRev;
			numCharRev.clear();

			for (int k = numCharTemp.length() - 1; k >= 0; k--)
			{
				numCharRev = numCharRev + numCharTemp[k];
			}


			ss.str(numCharTemp);
			ss >> tempNum;
			ss.clear();

			ss.str(numCharRev);
			ss >> tempNumRev;
			ss.clear();

			if (tempNum == tempNumRev) // Compare the number to its reverse
			{				
				if (tempNum > number)
				{
					number = tempNum;
				}
			}

		}
	}

	cout << "\n\nThe highest palindromic number is " << number << endl;

	return 0;
}