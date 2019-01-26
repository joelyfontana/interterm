#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//declare variables
int weight;
int radius;
double fluidWeight = 62.4;
double volume;
double force;
const double PI = 3.14159;

//get input from user
cout << "Enter the weight of the sphere (in pounds): "<<endl;
cin >> weight;

cout << "Enter the radius of the sphere (in feet): "<<endl;
cin >> radius;

//calculate the volume of the sphere
volume = (4/3) * PI * (pow(radius,3));

//calculate the buoyant force
force = volume * fluidWeight;

//use if statements to check to see if the object floats or sinks
if (force > weight || force == weight)
	cout << "The object will float" <<endl;
else
	cout <<"The object will sink" <<endl;

return 0;
}
//issues: THE OBJECT NEVER SINKS
// had to make a variable pi and set it as a constant double otherwise
//pi didnt work
