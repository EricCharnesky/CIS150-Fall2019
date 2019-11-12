#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double geometricSequenceSum(int n, double a, double r, vector<double>& values)
{
	for (int exponent = 0; exponent < n; exponent++)
	{
		values.push_back(a * pow(r, exponent));
	}
	double sum = 0;
	for (double value : values)
	{
		sum += value;
	}

	return sum;
}
int main()
{
	vector<double> values;
	cout << "The sum of the series 1*.5^n is: "
		<< geometricSequenceSum(100, 1, .5, values) << endl;

	cout << "The sequence is:" << endl;

	for (double value : values)
	{
		cout << fixed << setprecision(100) << value << endl;
	}

	return 0;
}