// total income
 // ask for an income, and add it to the total
// ask for for income until they tell us 0

// ask if they want to use the standard deduction
// if yes - AGI = total income - 12200
// if no - agi = total income
// start asking for deductions and agi -= deduction
 // loop until they tell us 0 for deduction

 // method 1

// if 0 < agi < 9700
 // taxesOwedAt10% = agi * .1
// else if agi > 9700
  // taxesOwedAt10% = 9700 * .1
// else
 // taxesOwedAt10% = 0

// if 9700 < agi < 39475
  // taxesOwedAt12% = ( agi - 9700 ) * .12
 // else if agi > 39475
  // taxesOwedAt12% = ( 39475 - 9700 ) * .12
 // else
 //  taxesOwedAt12% =0

 // totalTaxesOwed = taxesOwedAt10% + taxesOwedAt12% + ...
// taxesAsPercentageOfAGI = totalTax / AGI
// taxesAsPercentageOfGrossIncome = totalTax / totalIncome



// method 2

// if 0 < agi < 9700
 // taxesOwedAt10% = agi * .1
// taxesOwedAt12% = 0
// taxesOwedAt22%  = 0
// .....

// else if 9700 < agi < 39475
// taxesOwedAt10% = 9700 * .1
 // taxesOwedAt12% = (agi - 9700) * .12
// taxesOwedAt22% = 0

// else if 39475 < agi < 84200
// taxesOwedAt10% = 9700 * .1
 // taxesOwedAt12% = (39475 - 9700) * .12
// taxesOwedAt22% = agi - 39475 * .22



// method 3
// incomeToBeTaxed = AGI

// if incomeTOBeTaxed > 510300
  // taxesat37% =  (incomeTOBeTaxed - 510300) * .37
  // incomeToBedTaxed = 510300
// if incomeToBeTaxed > 204100
  // taxesat35% =  (incomeTOBeTaxed - 204100) * .35
  // incomeToBedTaxed = 204100
// if incomeToBeTaxed > 160725
  // taxesat32% =  (incomeTOBeTaxed - 160725) * .32
  // incomeToBedTaxed = 160725


#include <iostream>

using namespace std;

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
		taxesOwedAt37Percent = (incomeToBeTaxed - START_OF_37_PERCENT_BRACKET) * .37;
		incomeToBeTaxed = START_OF_37_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_35_PERCENT_BRACKET)
	{
		taxesOwedAt35Percent = (incomeToBeTaxed - START_OF_35_PERCENT_BRACKET) * .35;
		incomeToBeTaxed = START_OF_35_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_32_PERCENT_BRACKET)
	{
		taxesOwedAt32Percent = (incomeToBeTaxed - START_OF_32_PERCENT_BRACKET) * .32;
		incomeToBeTaxed = START_OF_32_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_24_PERCENT_BRACKET)
	{
		taxesOwedAt24Percent = (incomeToBeTaxed - START_OF_24_PERCENT_BRACKET) * .24;
		incomeToBeTaxed = START_OF_24_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_22_PERCENT_BRACKET)
	{
		taxesOwedAt22Percent = (incomeToBeTaxed - START_OF_22_PERCENT_BRACKET) * .22;
		incomeToBeTaxed = START_OF_22_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_12_PERCENT_BRACKET)
	{
		taxesOwedAt12Percent = (incomeToBeTaxed - START_OF_12_PERCENT_BRACKET) * .12;
		incomeToBeTaxed = START_OF_12_PERCENT_BRACKET;
	}

	if (incomeToBeTaxed > START_OF_10_PERCENT_BRACKET)
	{
		taxesOwedAt10Percent = (incomeToBeTaxed - START_OF_10_PERCENT_BRACKET) * .1;
		incomeToBeTaxed = START_OF_10_PERCENT_BRACKET;
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