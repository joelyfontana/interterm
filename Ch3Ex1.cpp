#include <iostream>
using namespace std;

//declare functions before main
double milesPerGallon(int liters, int milesTraveled);

//declare all the variables
double liters;
double milesTraveled;
double mpg;
char answer;

int main()
{
//use a while loop to allow user to repect calculation
while (true)
	{
	//get information from user and set it to variables
	cout << "Enter the number of liters of gas your car takes: " <<endl;
	cin >> liters;
	cout << "Enter the number of miles your car has traveled: "<< endl;
	cin >> milesTraveled;
	cout << "The car gets " << milesPerGallon(liters, milesTraveled) << " miles per gallon."<< endl;
	//ask the user is they would like to go again
	cout << "Would you like to enter different information? y/n: "<< endl;
	cin >> answer;
	if (answer == 'y')
		continue;
	else
		cout << "You have exited the program." << endl;
		break;
	}
return 0;
}
//create a separate function to calculate the miles per gallon traveled
double milesPerGallon(int liters, int milesTraveled)
{
	double const gallons = (liters * .264179);
	double mpg = milesTraveled/gallons;
	return mpg;
}

//issue: keep getting y is not in the scope - asked google - use ' ' instead
// of " "
// kept getting 0 miles per gallon - needed to add arguments in milesPerGallon in
// main function
