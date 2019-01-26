#include <iostream>
#include <cmath>
using namespace std;

//declare function before main
void triangle(float a,float b,float c,float& area,float& s);

//get input from users and declare local variables
int main()
{
	int a;
	int b;
	int c;
	float area;
	float s;
	cout << "Enter side 1: " << endl;
	cin >> a;
	cout << "Enter side 2: " << endl;
	cin >> b;
	cout << "Enter side 3: " << endl;
	cin >> c;
	// call the triangle function
	triangle(a,b,c,area,s);

return 0;
}

//since the function does not return anything, make it void
void triangle(float a,float b,float c,float& area,float& s)
{
//use if else statements to check to see if side measurements make a triangle
if(((a + b) > c) && ((b + c) > a) && ((a + c) > b))
	{
	//calucate the semiperimeter
	s = (a+b+c)/2;
	//use semiperimeter to calculate the area
	area = sqrt(s*((s-a)*(s-b)*(s-c)));
	cout << "The area of the triangle is " <<area<<endl;
	cout << "The perimeter of the triangle is " <<s*2<<endl;
	}
else
	{
		cout << "The values you entered do not make a triangle. Please try again." <<endl;
	}
}
//main issue: did a greater than sign instead of a less than so would always get the values do not make a triangle
