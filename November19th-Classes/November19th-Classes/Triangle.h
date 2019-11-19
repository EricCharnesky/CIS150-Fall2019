#pragma once

class Triangle
{
public:
	Triangle()
	{
		setBase(0);
		setHeight(0);
	}

	Triangle(double base, double height)
	{
		setBase(base);
		setHeight(height);
	}

	void setBase(double base)
	{
		if (base > 0)
		{
			this->base = base;
		}
		else
		{
			this->base = 0;
		}
		
	}

	void setHeight(double height)
	{
		if (height > 0)
		{
			this->height = height;
		}
		else
		{
			this->height = 0;
		}
	}

	double getBase()
	{
		return base;
	}

	double getHeight()
	{
		return height;
	}

	double getArea()
	{
		return .5 * base * height;
	}

private:
	double base;
	double height;
};