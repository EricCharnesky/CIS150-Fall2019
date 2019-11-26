#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int theAnswer = 42;

	int* numberPointer = &theAnswer;
	int anotherAnswer = theAnswer;

	cout << "theAnswer: " << theAnswer << endl;
	cout << "&theAnswer: " << &theAnswer << endl;

	cout << "numberPointer: " << numberPointer << endl;
	cout << "*numberPointer: " << *numberPointer << endl;

	cout << "anotherAnswer: " << anotherAnswer << endl;
	cout << "&anotherAnswer: " << &anotherAnswer << endl;


	cout << "What is the answer?" << endl;
	cin >> theAnswer;

	cout << "theAnswer: " << theAnswer << endl;
	cout << "&theAnswer: " << &theAnswer << endl;

	cout << "numberPointer: " << numberPointer << endl;
	cout << "*numberPointer: " << *numberPointer << endl;

	cout << "anotherAnswer: " << anotherAnswer << endl;
	cout << "&anotherAnswer: " << &anotherAnswer << endl;

	cout << "Let's change the number pointer!" << endl;

	cin >> *numberPointer;

	cout << "theAnswer: " << theAnswer << endl;
	cout << "&theAnswer: " << &theAnswer << endl;

	cout << "numberPointer: " << numberPointer << endl;
	cout << "*numberPointer: " << *numberPointer << endl;


	int numbers[100000];
	int* numberDynamicArray = new int[theAnswer];
	cout << "numberDynamicArray: " << numberDynamicArray << endl;
	cout << "*numberDynamicArray: " << *numberDynamicArray << endl;

	for (int canIMakeThisCrash = 0; canIMakeThisCrash < 100; canIMakeThisCrash++)
	{
		numberDynamicArray = new int[theAnswer];
		delete []numberDynamicArray;
	}
	

	cout << "numbers: " << numbers << endl;
	cout << "numberDynamicArray: " << numberDynamicArray << endl;
	// can't access the deleted value
	cout << "*numberDynamicArray: " << *numberDynamicArray << endl;

	for (int index = 0; index < 10; index++)
	{
		numbers[index] = index;
	}

	for (int index = 0; index < theAnswer; index++)
	{
		numberDynamicArray[index] = index;
	}

	for (int index = 0; index < theAnswer; index++)
	{
		cout << numberDynamicArray[index] << endl;
	}

	vector<int> vectorNumbers = { 0, 1, 2, 3, 4 };
	

	return 0;
}