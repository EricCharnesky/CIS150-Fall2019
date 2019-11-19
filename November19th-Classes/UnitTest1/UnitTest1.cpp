#include "pch.h"
#include "CppUnitTest.h"
#include "..\November19th-Classes\Square.h"
#include "..\November19th-Classes\Triangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSquareConstructor)
		{
			// AAA - Arrange - Act - Assert
			
			// Arrange - setup variables you need to test
			double expectedWidth = 0;

			// Act - call the code you are testing
			Square newSquare;
			double actualWidth = newSquare.getWidth();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedWidth, actualWidth);
		}

		TEST_METHOD(TestSquareSetWidth)
		{
			// AAA - Arrange - Act - Assert

			// Arrange - setup variables you need to test
			double expectedWidth = 5;

			// Act - call the code you are testing
			Square newSquare;
			newSquare.setWidth(expectedWidth);
			double actualWidth = newSquare.getWidth();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedWidth, actualWidth);
		}

		TEST_METHOD(TestSquareGetArea)
		{
			// AAA - Arrange - Act - Assert

			// Arrange - setup variables you need to test
			double width = 5;
			double expectedArea = 25;

			// Act - call the code you are testing
			Square newSquare;
			newSquare.setWidth(width);
			double actualArea = newSquare.getArea();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedArea, actualArea);
		}

		TEST_METHOD(TestTriangleConstructor)
		{
			// AAA - Arrange - Act - Assert

			// Arrange - setup variables you need to test
			double expectedBase = 0;
			double expectedHeight = 0;

			// Act - call the code you are testing
			Triangle triangle;
			double actualBase = triangle.getBase();
			double actualHeight = triangle.getHeight();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedBase, actualBase);
			Assert::AreEqual(expectedHeight, actualHeight);
		}

		TEST_METHOD(TestTriangleConstructorWithParameters)
		{
			// AAA - Arrange - Act - Assert

			// Arrange - setup variables you need to test
			double expectedBase = 4;
			double expectedHeight = 4;

			// Act - call the code you are testing
			Triangle triangle(expectedBase, expectedHeight);
			double actualBase = triangle.getBase();
			double actualHeight = triangle.getHeight();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedBase, actualBase);
			Assert::AreEqual(expectedHeight, actualHeight);
		}

		TEST_METHOD(TestTriangleSetBase)
		{
			// AAA - Arrange - Act - Assert

			// Arrange - setup variables you need to test
			double expectedBase = 5;

			// Act - call the code you are testing
			Triangle triangle;
			triangle.setBase(expectedBase);
			double actualBase = triangle.getBase();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedBase, actualBase);
		}

		TEST_METHOD(TestTriangleSetHeight)
		{
			// AAA - Arrange - Act - Assert

			// Arrange - setup variables you need to test
			double expectedHeight = 5;

			// Act - call the code you are testing
			Triangle triangle;
			triangle.setHeight(expectedHeight);
			double actualHeight = triangle.getHeight();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedHeight, actualHeight);
		}

		TEST_METHOD(TestTriangleGetArea)
		{
			// AAA - Arrange - Act - Assert

			// Arrange - setup variables you need to test
			double base = 5;
			double height = 5;
			double expectedArea = 12.5;

			// Act - call the code you are testing
			Triangle triangle;
			triangle.setBase(base);
			triangle.setHeight(height);
			double actualArea = triangle.getArea();

			// Assert - have the computer check the results
			Assert::AreEqual(expectedArea, actualArea);
		}
	};
}
