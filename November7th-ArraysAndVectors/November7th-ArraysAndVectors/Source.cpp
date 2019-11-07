#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<vector<int>> twoDimensionalVector;
	vector<int> firstRow = { 1,2,3 };
	vector<int> secondRow = { 4,5,6 };
	vector<int> thirdRow = { 7,8,9 };

	twoDimensionalVector.push_back(firstRow);
	twoDimensionalVector.push_back(secondRow);
	twoDimensionalVector.push_back(thirdRow);

	vector<vector<int>> anotherTwoDimensionalVector = { {1,2,3}, {4,5,6}, {7,8,9} };

	cout << twoDimensionalVector.at(2).at(0) << endl;

	int twoDimensionalArray[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			twoDimensionalArray[row][column] = 1 + row * 3 + column;
		}
	}

	vector<vector<int>> multiplicationTable;

	for (int row = 1; row < 11; row++)
	{
		multiplicationTable.push_back(vector<int>());
		for (int column = 1; column < 11; column++)
		{
			multiplicationTable.at(row-1).push_back(row * column);
		}
	}

	for (vector<int> row : multiplicationTable)
	{
		row.push_back(42);
		for (int value : row)
		{
			cout << value << "\t";
		}
		cout << endl;
	}

	for (int rowIndex = 0; rowIndex < multiplicationTable.size(); rowIndex++)
	{
		for (int columnIndex = 0; columnIndex < multiplicationTable.at(rowIndex).size(); columnIndex++)
		{
			cout << multiplicationTable.at(rowIndex).at(columnIndex) << "\t";
		}
		cout << endl;
	}


	//char name[5] = { 'E', 'r', 'i', 'c', '\0' };
	string name = "Eric";
	string anotherName = "Charnesky";

	name = anotherName;

	anotherName.at(0) = 'Z';

	cout << name << endl;
	cout << anotherName << endl;

	return 0;
}