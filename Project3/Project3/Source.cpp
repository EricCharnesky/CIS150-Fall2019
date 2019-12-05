#include "Enigma.h"

#include <iostream>

int main()
{
	int rotorNumber1;
	int rotorNumber2;
	int rotorNumber3;

	int rotor1Position;
	int rotor2Position;
	int rotor3Position;

	cout << "Enter the 3 rotor numbers you want to use" << endl;
	cin >> rotorNumber1;
	cin >> rotorNumber2;
	cin >> rotorNumber3;

	cout << "Enter the 3 rotor positions you want to use" << endl;
	cin >> rotor1Position;
	cin >> rotor2Position;
	cin >> rotor3Position;

	string plugBoardPairs;

	cout << "Enter the plugboard pairs" << endl;
	cin >> plugBoardPairs;

	string message;
	string result;

	Enigma enimga(vector<int> { rotorNumber1, rotorNumber2, rotorNumber3},
		vector<int> { rotor1Position, rotor2Position, rotor3Position},
		plugBoardPairs);

	cout << "Enter a message to encode" << endl;
	cin >> message;
	result = enimga.tranlsate(message);
	cout << result;

	return 0;
}