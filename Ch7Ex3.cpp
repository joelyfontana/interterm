#include <iostream>
using namespace std;

//have both public and private variables in the class
//class is supposed to be counter but turned into CounterType because it wanted to be unique
class CounterType
{
private:
  float mCounter;
  float mMax;


public:
  void reset();
  void incr1(int amount);
  void incr10(int amount);
  void incr100(int amount);
  void incr1000(int amount);
  float getCount();
  bool Overflow();
  CounterType(float Max);
};

int main()
{
  //set the max of the counter
  CounterType counter(99.99);
  cout << "Press" <<endl;
  cout << "a to increment cents" << endl;
  cout << "s to increment dimes" << endl;
  cout << "d to increment dollars" << endl;
  cout << "f to increment tens" << endl;
  cout << "o for overflow" << endl;

bool works = false;
//make a while loop for the overflow and to choose between the cases
while (!works)
//while not false
{
  char choose;
  int amount;
  cout << "The counter is at " << counter.getCount() << endl;
  cout << "Please choose a letter: ";
  cin >> choose;
  cout << "Please enter the number of times you would like to increment: ";
  cin >> amount;
  switch (choose)
  {
    case 'a':
      counter.incr1(amount);
      works = counter.Overflow();
      break;
    case 's':
      counter.incr10(amount);
      works = counter.Overflow();
      break;
    case 'd':
      counter.incr100(amount);
      works = counter.Overflow();
      break;
    case 'f':
      counter.incr1000(amount);
      works = counter.Overflow();
      break;
    case 'o':
      works = counter.Overflow();
      break;
  }
}


}

void CounterType::reset()
{
  mCounter = 0;
}
//amount is the amount of times one presses the counter

void CounterType::incr1(int amount)
{
  mCounter = mCounter +.01 * amount;
}
void CounterType::incr10(int amount)
{
  mCounter = mCounter +.1 * amount;
}
void CounterType::incr100(int amount)
{
  mCounter = mCounter + 1 * amount;
}
void CounterType::incr1000(int amount)
{
  mCounter = mCounter + 10 * amount;
}
//make a function to return the count
float CounterType::getCount()
{
  return mCounter;
}

//make a constructor defination
CounterType::CounterType(float Max)
{
  mCounter = 0;
  mMax = Max;
}

bool CounterType::Overflow()
{
  if (mCounter > mMax)
  {
    return true;
  }
  else
  {
    return false;
  }
}
