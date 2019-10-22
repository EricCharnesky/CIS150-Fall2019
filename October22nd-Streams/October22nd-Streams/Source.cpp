#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	/*string info = "Eric Charnesky Computer & Information Science";
	istringstream inputStringStream(info);

	string firstName;
	string lastName;
	string department;

	inputStringStream >> firstName;
	inputStringStream >> lastName;
	getline(inputStringStream, department);

	cout << firstName << lastName << department << endl;*/

	ifstream inputFileStream;
	vector<int> scores;

	string fileName;

	do
	{
		cout << "Enter a file name to open: ";
		cin >> fileName;

		inputFileStream.open(fileName);

		if (!inputFileStream.is_open())
		{
			cout << "Can't find the file!" << endl;
		}
	} while (!inputFileStream.is_open());


	int score;

	while (!inputFileStream.eof())
	{
		inputFileStream >> score;
		scores.push_back(score);
	}

	inputFileStream.close();

	for (int index = 0; index < scores.size(); index++)
	{
		cout << scores.at(index) << endl;
	}

	int sum = 0;

	for (int score : scores)
	{
		sum += score;
	}

	int average = sum / scores.size();
	int difference = 100 - average;

	ofstream outputFileStream;
	outputFileStream.open("newScores.txt");

	if (!outputFileStream.is_open())
	{
		cout << "Something went wrong!!!!" << endl;
		return 1;
	}

	for (int score : scores)
	{
		outputFileStream << score + difference << endl;
	}

	outputFileStream.close();

	return 0;
}