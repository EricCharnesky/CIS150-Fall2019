#include <iostream>

using namespace std;

int main()
{
	string name;
	int currentCredits;
	int totalCreditsNeeded;
	int creditsPerSemester;

	cout << "What is your name?" << endl;
	cin >> name;

	cout << name << " how many credits do you have?" << endl;
	cin >> currentCredits;

	cout << name << " how many credits do you need to graduate?" << endl;
	cin >> totalCreditsNeeded;

	cout << name << " how many credits do you take per semester?" << endl;
	cin >> creditsPerSemester;

	cout << name << " it will take you ";
	cout << (totalCreditsNeeded - currentCredits) / creditsPerSemester;
	cout << " semesters to graduate" << endl;

	system("pause");
	return 0;
}