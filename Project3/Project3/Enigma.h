#pragma once
#include <vector>
#include <string>
using namespace std;

class Rotor
{
public:
	Rotor(int seed = 0, string plugBoardPairs = "")
	{
		srand(seed);
		position = 1;
		if (plugBoardPairs.size() == 0)
		{
			string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			while (alphabet.length() > 0)
			{
				char firstCharacter = alphabet.at(0);
				int randomIndex = rand() % (alphabet.length() - 1) + 1;
				char secondCharacter = alphabet.at(randomIndex);
				vector<char> pair = { firstCharacter, secondCharacter };
				pairs.push_back(pair);
				vector<char> secondPair = { secondCharacter, firstCharacter };
				pairs.push_back(secondPair);
				alphabet.replace(randomIndex, 1, "");
				alphabet.replace(0, 1, "");
			}
		}
		else
		{
			while (plugBoardPairs.size() > 0)
			{
				char firstCharacter = plugBoardPairs.at(0);
				char secondCharacter = plugBoardPairs.at(1);
				
				// I feel bad this isn't a function =(
				vector<char> pair = { firstCharacter, secondCharacter };
				pairs.push_back(pair);
				vector<char> secondPair = { secondCharacter, firstCharacter };
				pairs.push_back(secondPair);

				plugBoardPairs.replace(0, 2, "");
			}
		}
	}

	char tranlsate(char inputCharacter)
	{
		for (int index = 0; index < pairs.size(); index++)
		{
			if (pairs.at(index).at(0) == toupper(inputCharacter))
			{
				return pairs.at(index).at(1);
			}
		}

		return inputCharacter;
	}

	void rotate(int times = 1)
	{
		for (int index = 0; index < pairs.size(); index++)
		{
			pairs.at(index).at(0) = pairs.at(index).at(0) + times;
			pairs.at(index).at(1) = pairs.at(index).at(1) + times;

			if (pairs.at(index).at(0) > 'Z')
			{
				pairs.at(index).at(0) -= 26;
			}
			if (pairs.at(index).at(1) > 'Z')
			{
				pairs.at(index).at(1) -= 26;
			}
		}
		position += times;
		if (position > 26)
		{
			position -= 26;
		}
	}

	int getPosition()
	{
		return position;
	}

private:
	vector<vector<char>> pairs;
	int position;
};

class Enigma
{
public:
	Enigma(vector<int> rotorNumbers, vector<int> startingPositions, string plugBoardPairs)
	{
		for (int index = 0; index < rotorNumbers.size(); index++)
		{
			Rotor rotor(rotorNumbers.at(index));
			rotor.rotate(startingPositions.at(index));
			rotors.push_back(rotor);
		}
		rotors.push_back(Rotor());

		plugBoard = Rotor(0, plugBoardPairs);
	}
	string tranlsate(string toTranslate)
	{
		string toReturn = "";
		for (char letter : toTranslate)
		{
			letter = plugBoard.tranlsate(letter);
			for (int rotorIndex = 0; rotorIndex < rotors.size(); rotorIndex++)
			{
				letter = rotors.at(rotorIndex).tranlsate(letter);
			}
			for (int rotorIndex = rotors.size() - 2; rotorIndex >= 0; rotorIndex--)
			{
				letter = rotors.at(rotorIndex).tranlsate(letter);
			}
			letter = plugBoard.tranlsate(letter);
			toReturn += letter;

			rotors.at(0).rotate();
			bool previousRotorRotatedTo1 = (rotors.at(0).getPosition() == 1);
			int rotorToRototeIndex = 1;
			while (previousRotorRotatedTo1 && rotorToRototeIndex < rotors.size() - 1)
			{
				rotors.at(rotorToRototeIndex).rotate();
				previousRotorRotatedTo1 = rotors.at(rotorToRototeIndex).getPosition() == 1;
				rotorToRototeIndex++;
			}
		}

		return toReturn;
	}
private:
	vector<Rotor> rotors;
	Rotor plugBoard;
};