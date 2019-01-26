#include <iostream>
using namespace std;

class GasPump
{
private:
  double mDispense;
  double mCharged;
  double mCost = 3;


public:
  //include the class thingy
  GasPump();
  double getDispense();
  double getCharged();
  double getCost();
  void display();
  void dispense();
};

int main()
{
  GasPump shell;
  shell.dispense();
  shell.display();
}

GasPump::GasPump()
{
  mDispense = 0;
  mCharged = 0;
}

void GasPump::display()
{
    cout << "The amount of gas dispensed was " << getDispense() << " gallons." << endl;
    cout << "The amount charged was " << getCharged() << " dollars." <<endl;
    cout << "The amount per gallon was " << getCost() << " dollars." <<endl;
}

void GasPump::dispense()
{
  mDispense = mDispense + 1;
  mCharged = mDispense * mCost;
}

//accessor funtions
double GasPump::getDispense()
{
  return mDispense;
}

double GasPump::getCharged()
{
  return mCharged;
}

double GasPump::getCost()
{
  return mCost;
}
