#include <iostream>
#include <vector>

using namespace std;

const int ARRAY_SIZE = 10;

double getScoreForStudent(vector<string>& students, vector<double>& scores)
{
	string name;
	cout << "Enter a student's name:" << endl;
	cin >> name;

	// this works but is awkward
	/*int index = 0;
	for (string student : students)
	{
		if (name == student)
		{
			return scores.at(index);
		}
		index++;
	}
	*/

	for (int index = 0; index < students.size(); index++)
	{
		if (name == students.at(index))
		{
			return scores.at(index);
		}
	}
	cout << "Not found!" << endl;
	return -1;
}

void printScores(double scoreArray[])
{
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		cout << scoreArray[index] << endl;
	}
}

int main()
{
	//vector<char> scores(10);

	//for (int letterIndex = 0; letterIndex < 10; letterIndex++)
	//{
	//	char letter;
	//	cout << "Enter a letter:" << endl;
	//	cin >> letter;
	//	scores.at(letterIndex) = letter;
	//}

	//for (int index = 0; index < scores.size(); index++)
	//{
	//	scores.at(index) = toupper(scores.at(index));
	//	cout << scores.at(index);
	//}
	//cout << endl;

	//// read only loop
	//for (char letter : scores)
	//{
	//	letter = tolower(letter);
	//	cout << letter;
	//}
	//cout << endl;

	//// creates a vector with 10 entries, with a starting value of -1
	//vector<double> averages(10, -1);

	//vector<char> name = { scores.at(5), scores.at(2), 'I', 'C' };

	vector<string> names;
	vector<double> scores;

	
	string name = "";

	while (name != "QUIT")
	{
		cout << "Enter a name" << endl;
		cin >> name;
		
		if (name != "QUIT")
		{
			names.push_back(name);
		}
	}

	for (int nameIndex = 0; nameIndex < names.size(); nameIndex++)
	{
		cout << "Enter the score for " << names.at(nameIndex) << endl;
		double score;
		cin >> score;
		scores.push_back(score);
	}

	cout << getScoreForStudent(names, scores) << endl;

	//vector<double> backwardsScores(scores.size());
	//for (int index = 0; index < scores.size(); index++)
	//{
	//	backwardsScores.at(scores.size() - 1 - index) = scores.at(index);
	//}

	//// a little slow, but maybe cleaner?
	//vector<double> anotherBackwardsScores;
	//for (int index = scores.size()-1; index >= 0; index--)
	//{
	//	anotherBackwardsScores.push_back(scores.at(index));
	//}

	for (int index = 0; index < scores.size() / 2; index++)
	{
		double temp = scores.at(index);
		scores.at(index) = scores.at(scores.size() - 1 - index);
		scores.at(scores.size() - 1 - index) = temp;
	}

	//scores = backwardsScores;

	for (int index = 0; index < scores.size(); index++)
	{
		cout << scores.at(index) << endl;
	}

	double scoresArray[ARRAY_SIZE];

	for (int scoreIndex = 0; scoreIndex < ARRAY_SIZE; scoreIndex++)
	{
		double score;
		cin >> score;
		scoresArray[scoreIndex] = score;
	}

	for (double score : scoresArray)
	{
		cout << score << endl;
	}

	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		cout << scoresArray[index] << endl;
	}

	printScores(scoresArray);
	cout << scoresArray[10] << endl;
	scoresArray[10] = 100;

	cout << "Hello world" << endl;
	return 0;
}