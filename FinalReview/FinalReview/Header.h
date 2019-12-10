#pragma once

#include <string>

using namespace std;


//Include a constructor that accepts an integer named luckyDivisor

// Add a method named checkNumber that accept an integer named number and returns a string

// If the number argument is evenly divisible by the luckyDivisor, return "This number is lucky"
// otherwise, if the number is odd, return "This number might be lucky"
// otherwise, return "this number is not lucky"
class LuckyNumberChecker
{
public:
	LuckyNumberChecker(int luckyDivisor)
	{
		this->luckyDivisor = luckyDivisor;
	}

	string checkNumber(int number)
	{
		if (number % luckyDivisor == 0)
		{
			return "This number is lucky";
		}
		if (number % 2 == 1)
		{
			return "This number might be lucky";
		}
		return "This number is not lucky";
	}
private:
	int luckyDivisor;

};