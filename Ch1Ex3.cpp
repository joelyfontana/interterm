#include <iostream>
using namespace std;

int main()

{
// declare the variables 
	double preSalary;
	const double payIncrease = 1.076;

//get input from user and set to variable
	cout << "Enter the employee's previous yearly salary before the raise: ";
	cin >> preSalary;
//calculate the retroactive pay
	double newPay = (preSalary/2) * payIncrease;
	cout << "The employee's new salary is " <<newPay<< endl;
//calculate the annual pay
	double annualPay = newPay + (preSalary/2);
	cout << "The annual pay is " <<annualPay<< endl;
//calculate the monthly pay
	double monthlyPay = annualPay/12;
	cout << "The monthly pay is " <<monthlyPay<< endl;
	return 0;
}
//problems: forgot to declare variables and some spacing issues and forgot a 
//semicolon


