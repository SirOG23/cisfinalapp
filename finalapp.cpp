#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char again = 'Y' ;
    while (again == 'y' || again == 'Y' )
    {
	cout << "    $$$  Welcome To The Tip & Dip Caculator $$$ " << endl;
	double meal;
	cout << "      Enter You Meal Price , Then Press Enter ";
		cin >> meal;
	cout << setprecision(2) << fixed;
	cout << " Meal : $" << setw(10) << meal << endl;

	double taxpercentage;
	double tax;
	taxpercentage = 0.085;
	tax = meal * taxpercentage;
	cout << fixed;
	cout << " Tax  : $ " << setw(9) << tax << endl;

	double tippercentage;
	double tip;
	tippercentage = 0.2;
	tip = (meal + tax) * tippercentage;
	cout << fixed;
	cout << " Tip  : $" << setw(10) << tip << endl;
	double total;
	total = tax + tip + meal;
	cout << fixed;
	cout << "Total : $" << setw(10)<< total << endl;
	cout << "GO agin? (y/n) ";
	cin >> again;
    }
    
	cout << " Have A Great Day!!! "<< endl;
	

	return 0;

}
