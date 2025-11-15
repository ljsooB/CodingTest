#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	string subject;
	float credit;
	string grade;

	map<string, float> grade_map = { {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0} };

	float sum = 0.0;
	float credit_sum = 0.0;

	int cnt = 20;
	for (int i = 0; i < 20; i++)
	{
		cin >> subject >> credit >> grade;

		if (grade == "P")
		{
			cnt--;

			continue;
		}

		sum += credit * grade_map[grade];
		
		credit_sum += credit;
	}

	cout << sum / credit_sum;
}