#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Malachi's Pie Shop
		//Constants
	const float  CUPS_FLOUR = 2.5;
	const double  TBSP_SUGAR = 1.33333333;
	const float TBSP_SALT = .5;
	const float  CUPS_BUTTER = .875;
	const int  LARGE_EGGS = 1;

	cout << setprecision(2) << fixed << TBSP_SUGAR << endl;

		//Integers
	int totalPies;
	float cupsFlour;
	double tbspSugar;
	float tbspSalt;
	float cupsButter;
	int largeEggs;

	cout << "This program calculates the ingredients needed";
	cout << " to make Malachi's Pie Crust.\n";

	cout << "How many pies would you wish to make?";
	cin >> totalPies;

			//Amount of flour needed
		cupsFlour = CUPS_FLOUR * totalPies;

			//Amount of sugar needed
		tbspSugar = TBSP_SUGAR * totalPies;

			//Amount of salt needed
		tbspSalt = TBSP_SALT * totalPies;

			//Amount of butter needed
		cupsButter = CUPS_BUTTER * totalPies;

			//Amount of eggs needed
		largeEggs = LARGE_EGGS * totalPies;

		cout << "In order to make " << totalPies << " pie crusts,";
		cout << "you will need:" << endl;

		cout << cupsFlour << " Cups of Flour" << endl;
		cout << tbspSugar << " Tablespoons of Sugar" << endl;
		cout << tbspSalt << " Tablespoons of Salt" << endl;
		cout << cupsButter << " Cups of Butter" << endl;
		cout << largeEggs << " Large Eggs" << endl;

		return 0;
}