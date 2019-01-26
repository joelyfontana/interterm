#include <iostream>
using namespace std;

int main()
{
//declare variables
	double cerealWeight;
	const double ton = 35273.92;

//get input from user and set it to variable
	cout << "What is the weight of the box of cereal in ounces?\n";
	cin >> cerealWeight;

//divide cereal weight by ton to get the weight in tons and print to user
	double totalTon = cerealWeight/ton;
	cout << totalTon << endl;

//figure out how much cereal you need to make a ton
	int numBox = ton/cerealWeight;
	cout << " You will need " <<numBox<< " boxes of cereal to weigh a ton\n";
	return 0;
}

