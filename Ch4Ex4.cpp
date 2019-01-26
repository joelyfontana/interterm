#include <iostream>
using namespace std;

//declare functions before!!!! main function
void input(double& feet, double& inches);
void calc(double feet, double inches, double& meters, double& centimeters);

int main()
//put while loop in main function
{
  double feet;
  double inches;
  double meters;
  double centimeters;
  char answer = 'y';
  while (answer == 'y')
  {
  input(feet, inches);
  calc(feet, inches, meters, centimeters);
  cout << "The length in meters is " <<meters<< endl;
  cout << "The length in centimeters is " <<centimeters<< endl;
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

//get the input from the user and return it
void input(double& feet, double& inches)
//do NOT need to declare variables in function since they are declared above
{
  cout << "Enter a length in feet: " << endl;
  cin >> feet;
  cout << "Enter a length in inches: " << endl;
  cin >> inches;
}

//calculate the meters and centimeters and return the value
void calc(double feet, double inches, double& meters, double& centimeters)
{
  //do NOt declare meters and centimeters
 meters = feet * .3048;
 centimeters = (inches/12) * 30.48;
}



//Issue: KEEP GETTING 0 WHAT THE HECK
