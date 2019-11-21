#include "pch.h"
#include "CppUnitTest.h"
#include "..\November21st-Classes\Container.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodConstructorSetsNegativeMaxToZero)
		{
			// Arrange
			double expectedMaxVolumeInMililiters = 0;
			double attemptedMaxVolumneInMililiters = -5;

			// Act
			Container container(attemptedMaxVolumneInMililiters);
			double actualMaxVolumneInMililiters = container.getMaxVolumeInMililiters();

			// Assert
			Assert::AreEqual(expectedMaxVolumeInMililiters, actualMaxVolumneInMililiters);
		}
		
		TEST_METHOD(TestMethodGetMaxVolumeInMililiters)
		{
			// Arrange
			double expectedMaxVolumeInMililiters = 50;

			// Act
			Container container(expectedMaxVolumeInMililiters);
			double actualMaxVolumneInMililiters = container.getMaxVolumeInMililiters();

			// Assert
			Assert::AreEqual(expectedMaxVolumeInMililiters, actualMaxVolumneInMililiters);
		}

		TEST_METHOD(TestMethodAddSuccessful)
		{
			// Arrange
			double maxVolumeInMililiters = 50;
			double expectedActualVolumeInMililiters = 25;

			// Act
			Container container(maxVolumeInMililiters);
			bool addResult = container.add(expectedActualVolumeInMililiters);
			double actualCurrentVolumneInMililiters = container.getCurrentVolumeInMililiters();
			
			// Assert
			Assert::IsTrue(addResult);
			Assert::AreEqual(expectedActualVolumeInMililiters, actualCurrentVolumneInMililiters);
		}

		TEST_METHOD(TestMethodAddUnsuccessful)
		{
			// Arrange
			double maxVolumeInMililiters = 25;
			double expectedActualVolumeInMililiters = 0;
			double volumeToAddInMililiters = 50;

			// Act
			Container container(maxVolumeInMililiters);
			bool addResult = container.add(volumeToAddInMililiters);
			double actualCurrentVolumneInMililiters = container.getCurrentVolumeInMililiters();

			// Assert

			// this is fine too 
			// Assert::AreEqual(false, addResult);
			Assert::IsFalse(addResult);
			Assert::AreEqual(expectedActualVolumeInMililiters, actualCurrentVolumneInMililiters);
		}

		TEST_METHOD(TestMethodRemoveSuccessful)
		{
			// Arrange
			double maxVolumeInMililiters = 50;
			double actualVolumeInMililiters = 25;
			double mililitersToRemove = 10;
			double expectedRemainingCurrentVolumeInMililiters = 15;

			// Act
			Container container(maxVolumeInMililiters);
			container.add(actualVolumeInMililiters);
			bool removeResult = container.remove(mililitersToRemove);
			double actualCurrentVolumneInMililiters = container.getCurrentVolumeInMililiters();

			// Assert
			Assert::IsTrue(removeResult);
			Assert::AreEqual(expectedRemainingCurrentVolumeInMililiters, actualCurrentVolumneInMililiters);
		}

		TEST_METHOD(TestMethodRemoveUnsuccessful)
		{
			// Arrange
			double maxVolumeInMililiters = 25;
			double expectedActualVolumeInMililiters = 0;
			double volumeToRemoveInMililiters = 10;

			// Act
			Container container(maxVolumeInMililiters);
			bool removeResult = container.remove(volumeToRemoveInMililiters);
			double actualCurrentVolumneInMililiters = container.getCurrentVolumeInMililiters();

			// Assert
			Assert::IsFalse(removeResult);
			Assert::AreEqual(expectedActualVolumeInMililiters, actualCurrentVolumneInMililiters);
		}
	};
}
