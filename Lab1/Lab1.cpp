#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int fourgallon = 0;
	int threegallon = 0;
	int input = 0;
	int temp = 0;

	cin >> input;

	if (input == 1)
	{
		/////////////////////////////////////////// 4 litrelik surahi dolduruldu.

		cout << endl;
		fourgallon = 4;
		cout << "4 litrelik surahi dolduruldu." << endl;
		cout << "4 litrelik surahideki Su Miktari:" << fourgallon << endl;
		cout << endl;
		cout << endl;

		/////////////////////////////////////////// 4 litrelik surahi 3 litrelik sürahiye bosaltildi.

		threegallon = 3;
		temp = threegallon;		
		threegallon = fourgallon;
		if (fourgallon >= 3)
		{
			threegallon = 3;
		}
		else
		{
			threegallon = fourgallon;
		}
		fourgallon -= temp;
		temp = 0;
		cout << fourgallon << endl;
		cout << "4 litrelik surahi 3 litrelik sürahiye bosaltildi."<< endl;
		cout << "4 litrelik surahideki Su Miktari:" << fourgallon << endl;
		cout << "3 litrelik surahideki Su Miktari:" << threegallon << endl;
		cout << endl;
		cout << endl;

		/////////////////////////////////////////// 3 litrelik surahideki su yere dokuldu.

		threegallon = 0;
		cout << "3 litrelik surahideki su yere dokuldu." << endl;
		cout << "3 litrelik surahideki Su Miktari:" << threegallon << endl;
		cout << endl;
		cout << endl;

		/////////////////////////////////////////// 4 litrelik surahi 3 litrelik surahiye bosaltildi.

		temp = 3 - threegallon;
		threegallon = fourgallon;

		if (threegallon >> 3)
		{
			threegallon = 3;
		}
		else
		{
			threegallon = fourgallon;
		}
		fourgallon -= temp;
		if (fourgallon <= 0 )
		{
			fourgallon = 0;
		}
		temp = 0;
		cout << "4 litrelik surahi 3 litrelik surahiye bosaltildi." << endl;
		cout << "4 litrelik surahideki Su Miktari:" << fourgallon << endl;
		cout << "3 litrelik surahideki Su Miktari:" << threegallon << endl;
		cout << endl;
		cout << endl;

		/////////////////////////////////////////// 4 litrelik surahi dolduruldu.

		fourgallon = 4;
		cout << "4 litrelik surahi dolduruldu." << endl;
		cout << "4 litrelik surahideki Su Miktari:" << fourgallon << endl;
		cout << endl;
		cout << endl;

		/////////////////////////////////////////// 4 litrelik surahi 3 litrelik surahiye bosaltildi.

		temp = 3 - threegallon;
		threegallon = fourgallon;

		if (threegallon >= 3)
		{
			threegallon = 3;
		}
		else
		{
			threegallon = fourgallon;
		}
		fourgallon -= temp;
		if (fourgallon <= 0)
		{
			fourgallon = 0;
		}
		temp = 0;
		cout << "4 litrelik surahi 3 litrelik surahiye bosaltildi." << endl;
		cout << "4 litrelik surahideki Su Miktari:" << fourgallon << endl;
		cout << "3 litrelik surahideki Su Miktari:" << threegallon << endl;
		cout << endl;
		cout << endl;

	}

}
