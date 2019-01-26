#include <iostream>
using namespace std;

//declare functions before main but for the love of god please actually remember to put them in the main this time
void deleteRepeats(char * letters, int& size);
void moveForward(char * aRay, int& spaces);

int main()
{
  // make size of array a separate integer
int size = 6;
// elements in array must be equal to size
char letters[size] = {'a','b','c','d','e','a'};
deleteRepeats(letters,size);
moveForward(letters,size);
for (int index = 0; index < size; index++)
  {
    cout << letters[index] << " "<<endl;
  }
}

void deleteRepeats(char * letters, int& size)
{
  for (int index = 0; index < size; index++)
  {
    char tempVariable = letters[index];
    //set i to index + 1 in order to keep the original index
    for (int i = index+1; i < size; i++)
    {
      if (tempVariable == letters[i])
      {
        letters[i] = NULL;
      }
    }
  }
}

void moveForward(char * aRay, int& spaces)
{
  //index - 1 to move forward?
for (int index = 0; index < spaces; index++)
{
  //create a variable to become a placeholder for the empty index space
  int empty  = -1;
  if (aRay[index] == NULL);
  {
    empty = index;
    for (int i = index + 1; i < spaces; i++)
    {
      if (aRay[i] != NULL)
      {
        aRay[empty] = aRay[i];
        aRay[i] = NULL;
        break;
      }
    }
  }
}
}
