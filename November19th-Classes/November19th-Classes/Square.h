#pragma once
class Square
{
public:
	Square()
	{
		setWidth(0);
	}

	Square(double width)
	{
		setWidth(width);
	}

	void setWidth(double width)
	{
		if (width > 0)
		{
			this->width = width;
		}
		else
		{
			this->width = 0;
		}
	}
	double getWidth()
	{
		return width;
	}

	double getArea()
	{
		return width * width;
	}

	Square operator+(const Square& rightHandSide)
	{
		Square newSquare(width + rightHandSide.width);
		return newSquare;
	}

	bool operator==(const Square& rightHandSide)
	{
		return width == rightHandSide.width;
	}

	bool operator>(const Square& rightHandSide)
	{
		return width > rightHandSide.width;
	}

	bool operator>=(const Square& rightHandSide)
	{
		// don't worry too  much about this *this
		return (*this) == rightHandSide || (*this) > rightHandSide;
	}

	bool operator<(const Square& rightHandSide)
	{
		return !((*this) == rightHandSide) && !((*this) > rightHandSide);
	}

private:
	double width;
};