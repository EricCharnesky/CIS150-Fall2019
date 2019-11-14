#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	Car(string color, double gasTankCapacityInLiteres, double kilometersPerLiter, string make, string model)
	{
		this->numberOfWheels = 4;
		this->gasInTankInLiters = 0;
		this->make = make;
		this->model = model;
		setColor(color);
		setGasTankCapacityInLiters(gasTankCapacityInLiteres);
		setKilometersPerLiter(kilometersPerLiter);
	}

	void addGas(double litersOfGas)
	{
		if (litersOfGas > 0)
		{
			gasInTankInLiters += litersOfGas;
			if (gasInTankInLiters > gasTankCapacityInLiters)
			{
				gasInTankInLiters = gasTankCapacityInLiters;
				cout << "You spilled some gas!" << endl;
			}
		}
	}

	void drive(double kilometers)
	{
		if (kilometers > 0)
		{
			gasInTankInLiters -= kilometers / kilometersPerLiter;
			if (gasInTankInLiters <= 0)
			{
				gasInTankInLiters = 0;
				cout << "You run out of gas!" << endl;
			}
		}
		
	}

	void setGasTankCapacityInLiters(double liters)
	{
		if (liters > 0)
		{
			gasTankCapacityInLiters = liters;
		}
	}

	void setColor(string color)
	{
		this->color = color;
	}

	void setKilometersPerLiter(double kilometersPerLiter)
	{
		if (kilometersPerLiter > 0)
		{
			this->kilometersPerLiter = kilometersPerLiter;
		}
	}

	double getGasInTankInLiters()
	{
		return gasInTankInLiters;
	}

private:
	int numberOfWheels;
	string color;
	double gasTankCapacityInLiters;
	double gasInTankInLiters;
	double kilometersPerLiter;
	string make;
	string model;
};



void bell()
{
	cout << "Bell here!" << endl;
}

void bar()
{
	cout << "Bar here!" << endl;
	bell();
}

void foo()
{
	cout << "Foo here!" << endl;
	bar();
}

double calculateMinutes(double hours, double minutes)
{
	return hours * 60 + minutes;
}

int calculateMinutes(int hours, int minutes)
{
	return hours * 60 + minutes;
}

int calculateMinutes(string hours, string minutes)
{
	return calculateMinutes(stoi(hours), stoi(minutes));
}

void countDown(int number)
{
	cout << number << endl;
	if (number > 0)
	{
		countDown(number - 1);
	}
}

int main()
{
	//foo();

	//cout << calculateMinutes(.5, .5) << endl;

	//countDown(1000);

	Car jetta("dark green", 14, 20, "Volkswagon", "Jetta");
	//jetta.setColor("dark green");
	//jetta.setGasTankCapacityInLiters(14);
	//jetta.setKilometersPerLiter(20);

	jetta.addGas(14);
	jetta.drive(280);
	

	return 0;
}