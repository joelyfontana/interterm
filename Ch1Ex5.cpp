#include <iostream>
using namespace std;

int main()
{
//declare all variables
int maxCap;
int numPeople;
//get user input and set it to variables
cout << "Enter the room's maximum capicity: ";
cin >> maxCap;
cout << "How many people are going to attend the meeting? ";
cin >> numPeople;
//using an if-else, calculate whether or not the meeting violates fire code
//within code: (also calculate how many more people can attend the meeting)
if (numPeople <= maxCap)
{
int morePeople = maxCap - numPeople;
cout << "The meeting is legal. " <<morePeople<< " more people can attend." << endl;
	}
//if the meeting violates code:
//determine how many people need to get kicked out to meet the fire code
else
{
int lessPeople = numPeople - maxCap;
cout << "The meeting violates fire regulations by " <<lessPeople<< " people." <<endl;
	}
return 0;
}
//ohmygoditworks?!?! this is the first program i've written 100% on my own
//and it worked beautifully the first time?? i think im crying this is the best day
//of my life but now I have no problems to write in the read me and this has
//never happened before its normally an essay
