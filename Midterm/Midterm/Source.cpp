#include <iostream>
#include <vector>

using namespace std;

vector<int> MakeAverageScore100(vector<int> scores)
{
	int sum = 0;

	for (int index = 0; index < scores.size(); index++)
	{
		sum += scores.at(index);
	}

	int average = sum / scores.size();

	int difference = 100 - average;

	for (int index = 0; index < scores.size(); index++)
	{
		scores.at(index) += difference;
		if (scores.at(index) > 100)
		{
			scores.at(index) = 100;
		}
	}

	return scores;
}

bool AreNumbersAllEvenOrAllOdd(vector<int> numbers)
{
	bool allEven = true;
	bool allOdd = true;

	int numberOfEvens = 0;
	int numberOfOdds = 0;

	for (int index = 0; index < numbers.size(); index++)
	{
		if (numbers.at(index) % 2 == 0)
		{
			allOdd = false;
			numberOfEvens++;
		}
		else
		{
			allEven = false;
			numberOfOdds++;
		}
	}

	return numberOfEvens == 0 || numberOfOdds == 0;
	return allEven || allOdd;
		
}

int main()
{
	vector<int> scores = { 60, 70, 80, 90, 100 };
	vector<int> updatedScores = MakeAverageScore100(scores);

	cout << "Expected score at index 0: 80 - Acutual: " << updatedScores.at(0) << endl;
	cout << "Expected score at index 1: 90 - Acutual: " << updatedScores.at(1) << endl;
	cout << "Expected score at index 2: 100 - Acutual: " << updatedScores.at(2) << endl;
	cout << "Expected score at index 3: 100 - Acutual: " << updatedScores.at(3) << endl;
	cout << "Expected score at index 4: 100 - Acutual: " << updatedScores.at(4) << endl;

	return 0;
}