#include <iostream>
#include <vector>

using namespace std;

int sumOfArrayOfNumbers(int numbers[], int size)
{
	int sum = 0;
	for (int index = 0; index < size; index++)
	{
		sum += numbers[index];
	}
}

int main()
{
	const int NUMBER_OF_NUMBERS = 5;

	int numbers[NUMBER_OF_NUMBERS];

	numbers[0] = 42;
	numbers[1] = 43;
	numbers[2] = 44;
	numbers[3] = 45;

	int howMany;
	cout << "Enter how many: ";
	cin >> howMany;

	// sad - won't compile because it isn't constant
	// int someNumbers[howMany];

	vector<int> someNumbersThatWorks(howMany);
	
	for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
	{
		cout << numbers[index] << endl;
	}

	return 0;
}