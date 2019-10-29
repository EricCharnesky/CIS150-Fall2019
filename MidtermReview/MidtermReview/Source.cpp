#include <iostream>
#include <vector>

using namespace std;

// return the number of odd integers in a vector
int countOddNumbers(vector<int> numbers)
{
	int numberOfOdds = 0;

	for (int index = 0; index < numbers.size(); index++)
	{
		if (numbers.at(index) % 2 == 1)
		{
			numberOfOdds++;
		}
	}

	return numberOfOdds;

}
// return the number of even integers in a vector
int countEvenNumbers(vector<int> numbers)
{
	return numbers.size() - countOddNumbers(numbers);
}

// output random values from an vector given
// for each value in the vector, going backwards, 
//     multiply it by a random number 1-10
// if the result is even, output the number

void outputRandomNumbers(vector<int> numbers)
{
	for (int index = numbers.size(); index >= 0; index--)
	{
		int randomNumber = rand() % 10 + 1;
		int result = numbers.at(index) * randomNumber;
		if ( result % 2 == 0)
		{
			cout << numbers.at(index) << endl;
		}
	}
}

void printWordLetterByLetter(string word)
{
	for (int index = 0; index < word.size(); index++)
	{
		cout << word.at(index) << " ";
	}
	cout << endl;
}



void curve(vector<int> &scores)
{
	int max = scores.at(0);

	for (int index = 1; index < scores.size(); index++)
	{
		if (scores.at(index) > max)
		{
			max = scores.at(index);
		}
	}

	int difference = 100 - max;

	for (int index = 0; index < scores.size(); index++)
	{
		scores.at(index) += difference;
	}
	
}


void fizzBuzz(vector<int> numbers)
{
	for (int index = 0; index < numbers.size(); index++)
	{
		if (numbers.at(index) % 5 == 0 && numbers.at(index) % 3 == 0)
		{
			cout << "FIZZBUZZ" << endl;
		}
		else if (numbers.at(index) % 3 == 0)
		{
			cout << "FIZZ" << endl;
		}
		else if (numbers.at(index) % 5 == 0)
		{
			cout << "BUZZ" << endl;
		}
		else
		{
			cout << numbers.at(index) << endl;
		}
	}
}

void fizzBuzzAlternative(vector<int> numbers)
{
	for (int index = 0; index < numbers.size(); index++)
	{
		if (numbers.at(index) % 3 == 0)
		{
			cout << "FIZZ";
		}

		if (numbers.at(index) % 5 == 0)
		{
			cout << "BUZZ";
		}

		if (numbers.at(index) % 5 == 0 || numbers.at(index) % 3 == 0)
		{
			cout << endl;
		}
		else
		{
			cout << numbers.at(index) << endl; 
		}
	}
}

int main()
{
	vector<int> numbers = { 27, 93, 61, 78, 54 };

	curve(numbers);

	cout << "Expected value at index 0: 34, actual: " << numbers.at(0) << endl;
	cout << "Expected value at index 1: 100, actual: " << numbers.at(1) << endl;
	cout << "Expected value at index 2: 68, actual: " << numbers.at(2) << endl;
	cout << "Expected value at index 3: 85, actual: " << numbers.at(3) << endl;
	cout << "Expected value at index 4: 61, actual: " << numbers.at(4) << endl;
	
	cout << endl << endl;
	
	vector<int> fizzBuzzNumbers = { 3, 5, 7, 9, 11, 13, 15 };
	fizzBuzz(fizzBuzzNumbers);
	fizzBuzzAlternative(fizzBuzzNumbers);

	string someWord = "Ummmm";
	printWordLetterByLetter(someWord);

	cout << "\\" << endl;

	return 0;
}