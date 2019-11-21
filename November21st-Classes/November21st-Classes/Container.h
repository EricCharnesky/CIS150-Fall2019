#pragma once
class Container
{
public:
	Container(double maxVolumeInMililiters)  // : currentVolumeInMililiters(0)
	{
		if (maxVolumeInMililiters > 0)
		{
			this->maxVolumeInMililiters = maxVolumeInMililiters;
		}
		else
		{
			this->maxVolumeInMililiters = 0;
		}
		// same as using the : above
		currentVolumeInMililiters = 0;
	}

	bool add(double volumeInMililiters)
	{
		if (currentVolumeInMililiters + volumeInMililiters <= maxVolumeInMililiters)
		{
			currentVolumeInMililiters += volumeInMililiters;
			return true;
		}
		return false;
	}

	bool remove(double volumeInMililiters)
	{
		if (currentVolumeInMililiters - volumeInMililiters >= 0)
		{
			currentVolumeInMililiters -= volumeInMililiters;
			return true;
		}
		return false;
	}

	double getMaxVolumeInMililiters()
	{
		return maxVolumeInMililiters;
	}

	double getCurrentVolumeInMililiters()
	{
		return currentVolumeInMililiters;
	}

private:
	double maxVolumeInMililiters;
	double currentVolumeInMililiters;
};