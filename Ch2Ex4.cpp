#include <iostream>
using namespace std;

int main()
{
//write a program that prints all prime numbers between 3 and 100
//declare the variables
int startVal = 3;
int endVal = 100;
//need two loops - use for loops to iterate through numbers 
//for loops can have more than one parameter!!
//make current value variable and set it to the inital value 
for (int currentVal = startVal; currentVal < endVal; currentVal++)
{
	//use second for loop to make variable and check to see if number
	// is prime
	for (int checkNum = 2; checkNum < currentVal; checkNum++)
	{
	int remainder = currentVal % checkNum;
	bool isPrime = true;
	//if remainder is equal to 0, the number is not prime and end loop
	if (remainder == 0)
	{
		isPrime = false;
		break;
	}
	//check to see if number is prime and print if it is
	if (isPrime = true && checkNum == (currentVal - 1))
	{
		cout << "The number " <<currentVal<< " is prime." << endl;
	}
	}
}
return 0;
}
//issues: semicolons after for and if statements - not supposed to
//checkNum was not capitalized properly
