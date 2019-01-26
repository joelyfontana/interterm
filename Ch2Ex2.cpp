#include <iostream>
using namespace std;

int main()
{
// declare variables
int stereoCost = 1000;
double monthlyInterest = 0.015;
int monthlyPay = 50;
//initalize the total amount of interest
double totalInterest = 0;
int numMonths = 0;
double debt = stereoCost;

while(debt > 0)
{
	totalInterest = (debt * monthlyInterest) + totalInterest;
	//remember: add one to monthly interest!!
	debt = (debt * (monthlyInterest + 1)) - monthlyPay;
	numMonths ++;
}

//print results to user
cout << "It  will take " <<numMonths<< " months to pay off the debt." <<endl;
cout << "The total interest is " <<totalInterest<< endl;
return 0;
}
