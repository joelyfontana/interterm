#include <iostream>
using namespace std;

class CounterType
{
private:
int mCount;

public:
void setCount(int count);
void increaseCount();
void decreaseCount();
int currentCount();
void outputCount();
};

int main()
{
  CounterType counter;
  counter.setCount(10);
  counter.increaseCount();
  counter.decreaseCount();
  int count = counter.currentCount();
  counter.outputCount();
}

void CounterType::setCount(int count)
{
  if (count >= 0)
  {
  mCount = count;
  }
  else
  {
    cout << "Enter a positive number.";
  }
}

void CounterType::increaseCount()
{
 mCount++;
}

void CounterType::decreaseCount()
{
  if (mCount >= 1)
  {
    mCount--;
  }
  else
  {
    cout << "The number will become negative.";
  }
}

int CounterType::currentCount()
{
  return mCount;
}

void CounterType::outputCount()
{
  cout << mCount << endl;
}
