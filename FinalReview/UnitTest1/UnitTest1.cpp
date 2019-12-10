#include "pch.h"
#include "CppUnitTest.h"
#include "..\FinalReview\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodLuckyNumber)
		{
			// Arrange
			int luckyDivisor = 3;
			int numberToCheck = 9;
			string expectedResult = "This number is lucky";

			// Act
			LuckyNumberChecker luckyNumberChecker(luckyDivisor);
			string actualResult = luckyNumberChecker.checkNumber(numberToCheck);

			// Assert
			Assert::AreEqual(expectedResult, actualResult);
		}

		TEST_METHOD(TestMethodMightBeLuckyNumber)
		{
			// Arrange
			int luckyDivisor = 3;
			int numberToCheck = 11;
			string expectedResult = "This number might be lucky";

			// Act
			LuckyNumberChecker luckyNumberChecker(luckyDivisor);
			string actualResult = luckyNumberChecker.checkNumber(numberToCheck);

			// Assert
			Assert::AreEqual(expectedResult, actualResult);
		}

		TEST_METHOD(TestMethodNotALuckyNumber)
		{
			// Arrange
			int luckyDivisor = 3;
			int numberToCheck = 14;
			string expectedResult = "This number is not lucky";

			// Act
			LuckyNumberChecker luckyNumberChecker(luckyDivisor);
			string actualResult = luckyNumberChecker.checkNumber(numberToCheck);

			// Assert
			Assert::AreEqual(expectedResult, actualResult);
		}
	};
}
