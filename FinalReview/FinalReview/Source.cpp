// Write c++ code that declares a dynamic array of characters called letters sized 26.  
// Add the characters A-Z to the dynamic array in any way you choose.
// Delete the array when you are done

#include <iostream>
#include <vector>
using namespace std;





//For every value on a ‘white’ square, add it to the sum, 
// and for ever value on a black square, subtract the value.

int sumOfWhiteMinusBlackSquares(vector<vector<int>> values)
{
	int sum = 0;
	// on even rows - evens are black
	// on odd rows - odds are black
	for (int rowIndex = 0; rowIndex < values.size(); rowIndex++)
	{
		// set to true for even rows
		bool isBlackSquare = true;
		if (rowIndex % 2 == 0)
		{
			for (int columnIndex = 0; columnIndex < values.at(rowIndex).size(); columnIndex++)
			{
				if (isBlackSquare)
				{
					// subtracct
				}
				else
				{
					// add
				}
				isBlackSquare = !isBlackSquare;

				if (columnIndex % 2 == 0)
				{
					sum -= values.at(rowIndex).at(columnIndex);
				}
				else
				{
					sum += values.at(rowIndex).at(columnIndex);
				}
			}
		}
		else
		{
			for (int columnIndex = 0; columnIndex < values.at(rowIndex).size(); columnIndex++)
			{
				if (columnIndex % 2 == 0)
				{
					sum += values.at(rowIndex).at(columnIndex);
				}
				else
				{
					sum -= values.at(rowIndex).at(columnIndex);
				}
			}
		}
	}

	return sum;
}


int main()
{
	char* letters = new char[26];
	char currentLetter = 'A';
	for (int index = 0; index < 26; index++)
	{
		letters[index] = currentLetter;
		currentLetter++;
	}

	delete[] letters;

	vector<vector<int>> numbers = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,0}
	};

	int expectedValue = 16;
	int actualValue = sumOfWhiteMinusBlackSquares(numbers);

	if (expectedValue != actualValue)
	{
		cout << "TEST FAILED! Expected: " << expectedValue << " got: " << actualValue << endl;
	}
	else
	{
		cout << "sumOfWhiteMinusBlackSquares test passed!" << endl;
	}

}
