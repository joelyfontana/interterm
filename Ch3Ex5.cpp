#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//declare variables and functions
double height;
double weight;
double age;
char anwser;
//use while loop to allow user to repeat calculations

//declare functions BEFORE the main function
// get information from the user
void getInfo()
{
	cout << "Enter you height in inches: " << endl;
	cin >> height;
	cout << "Enter your weight in pounds: " << endl;
	cin >> weight;
	cout << "Enter your age: " << endl;
	cin >> age;
}

//calculate users hat size (get parameters from getInfo?)
double hatSize(double weight, double height)
{
	int hatSize = (weight/height) * 2.9;
	return hatSize;
}

//calculate the jacket size
double jacket(double height,double weight,double age)
{
	double jacketSize = (height*weight)/double(288);
	//ajust the jacket size depending on age
	double ajustment = (age - 30)/10;
	jacketSize = jacketSize + .125 * double(ajustment);
	return jacketSize;
}
//calculate waist
double waist(double weight,double age)
{
double waist = weight/5.7;
if (age > 28 && fmod(age, 2) == 0);
	double addInch = (age - 28)/2;
	waist = waist + .1 * addInch;
	return waist;
}

//use the main function to call all of the other functions
int main()
{
	char answer = 'y';
	while (answer == 'y')
	{
	getInfo();
	double hat = hatSize(weight,height);
		cout << "Your hat size is " <<hat<< " inches." << endl;
	double jacketSize = jacket(height, weight, age);
			cout << "Your jacket size is " <<jacketSize<< " inches." << endl;
	double waistSize = waist(weight, age);
			cout << "Your waist size is " <<waistSize<< " inches." << endl;
	cout << "Would you like to enter different measurements? (y/n): " <<endl;
	cin >> answer;
	if (answer == 'y')
	{
		continue;
	}
	else
	{
		cout << "Goodbye!"<<endl;
		break;
  }
	return 0;
}
}
