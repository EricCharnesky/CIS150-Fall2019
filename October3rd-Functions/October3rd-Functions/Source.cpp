#include <iostream>

using namespace std;

int taxesOwedAtGivenBracketStart(double &incomeToBeTaxed, double startOfBracket, double taxRate)
{
	// also could just 
	// return (incomeToBeTaxed - startOfBracket) * taxRate;

	// this is nice for debugging
	double taxesOwed = (incomeToBeTaxed - startOfBracket) * taxRate;
	incomeToBeTaxed = startOfBracket;
	return taxesOwed;
	
}

int main()
{
	const int START_OF_10_PERCENT_BRACKET = 0;
	const int START_OF_12_PERCENT_BRACKET = 9700;
	const int START_OF_22_PERCENT_BRACKET = 39475;
	const int START_OF_24_PERCENT_BRACKET = 84200;
	const int START_OF_32_PERCENT_BRACKET = 160725;
	const int START_OF_35_PERCENT_BRACKET = 204100;
	const int START_OF_37_PERCENT_BRACKET = 510300;

	const int STANDARD_DEDUCTION = 12200;

	int taxesOwedAt10Percent = 0;
	int taxesOwedAt12Percent = 0;
	int taxesOwedAt22Percent = 0;
	int taxesOwedAt24Percent = 0;
	int taxesOwedAt32Percent = 0;
	int taxesOwedAt35Percent = 0;
	int taxesOwedAt37Percent = 0;

	double grossIncome = 0;
	double adjustedGrossIncome = 0;

	int income = -1;
	while (income != 0)
	{
		cout << "Enter your income or 0 to stop" << endl;
		cin >> income;
		grossIncome += income;
	}

	char useStandardDeduction;
	cout << "Do you want to use the standard deduction? Y/N" << endl;
	cin >> useStandardDeduction;
	adjustedGrossIncome = grossIncome;

	if (toupper(useStandardDeduction) == 'Y')
	{
		adjustedGrossIncome -= STANDARD_DEDUCTION;
	}
	else
	{
		int deduction = -1;
		while (deduction != 0)
		{
			cout << "Enter an itemized deduction or 0 to stop" << endl;
			cin >> deduction;
			adjustedGrossIncome -= deduction;
		}
	}

	double incomeToBeTaxed = adjustedGrossIncome;

	if (incomeToBeTaxed > START_OF_37_PERCENT_BRACKET)
	{
		taxesOwedAt37Percent = taxesOwedAtGivenBracketStart(incomeToBeTaxed, START_OF_37_PERCENT_BRACKET, .37);
		// avoid this if I pass incomeToBeTaxed by reference
		//incomeToBeTaxed = START_OF_37_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_35_PERCENT_BRACKET)
	{
		taxesOwedAt35Percent = taxesOwedAtGivenBracketStart(incomeToBeTaxed, START_OF_35_PERCENT_BRACKET, .35);
		//incomeToBeTaxed = START_OF_35_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_32_PERCENT_BRACKET)
	{
		taxesOwedAt32Percent = taxesOwedAtGivenBracketStart(incomeToBeTaxed, START_OF_32_PERCENT_BRACKET, .32);
		//incomeToBeTaxed = START_OF_32_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_24_PERCENT_BRACKET)
	{
		taxesOwedAt24Percent = taxesOwedAtGivenBracketStart(incomeToBeTaxed, START_OF_24_PERCENT_BRACKET, .24);
		//incomeToBeTaxed = START_OF_24_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_22_PERCENT_BRACKET)
	{
		taxesOwedAt22Percent = taxesOwedAtGivenBracketStart(incomeToBeTaxed, START_OF_22_PERCENT_BRACKET, .22);
		//incomeToBeTaxed = START_OF_22_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_12_PERCENT_BRACKET)
	{
		taxesOwedAt12Percent = taxesOwedAtGivenBracketStart(incomeToBeTaxed, START_OF_12_PERCENT_BRACKET, .12);
		//incomeToBeTaxed = START_OF_12_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_10_PERCENT_BRACKET)
	{
		taxesOwedAt10Percent = taxesOwedAtGivenBracketStart(incomeToBeTaxed, START_OF_10_PERCENT_BRACKET, .1);
		//incomeToBeTaxed = START_OF_10_PERCENT_BRACKET;
	}

	double totalTaxes = taxesOwedAt37Percent
		+ taxesOwedAt35Percent
		+ taxesOwedAt32Percent
		+ taxesOwedAt24Percent
		+ taxesOwedAt22Percent
		+ taxesOwedAt12Percent
		+ taxesOwedAt10Percent;

	double taxesOwedAsPercentageOfAGI = totalTaxes / adjustedGrossIncome;
	double taxesOwedAsPercentageOfGrossIncome = totalTaxes / grossIncome;

	cout << "Taxes owed at 10%: $" << taxesOwedAt10Percent << endl;
	cout << "Taxes owed at 12%: $" << taxesOwedAt12Percent << endl;
	cout << "Taxes owed at 22%: $" << taxesOwedAt22Percent << endl;
	cout << "Taxes owed at 24%: $" << taxesOwedAt24Percent << endl;
	cout << "Taxes owed at 32%: $" << taxesOwedAt32Percent << endl;
	cout << "Taxes owed at 35%: $" << taxesOwedAt35Percent << endl;
	cout << "Taxes owed at 37%: $" << taxesOwedAt37Percent << endl;

	cout << "Total taxes owed: $" << totalTaxes << endl;
	cout << "Taxes owed as percentage of AGI: " << taxesOwedAsPercentageOfAGI * 100 << endl;
	cout << "Taxes owed as percentage of Gross Income: " << taxesOwedAsPercentageOfGrossIncome * 100 << endl;

	return 0;
}