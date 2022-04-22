//***************************************************
// Name: Noah Stern
// Purpose: Implement bowler class functions
// Date: 9/13/2020
// Class: CS355
//***************************************************
#include "Bowler.h"
#include <iostream>
#include <iomanip>
using namespace std;

Bowler::Bowler()
{
  firstName = "";
  lastName = "";
  game1 = 0;
  game2 = 0;
  game3 = 0;
}

Bowler::Bowler(string first, string last, int game1, int game2, int game3)
{
  firstName = first;
  lastName = last;
  this->game1 = game1;
  this->game2 = game2;
  this->game3 = game3;
}

void Bowler::setBowler(string first, string last, int game1, int game2, int game3)
{
  firstName = first;
  lastName = last;
  this->game1 = game1;
  this->game2 = game2;
  this->game3 = game3;
}

string Bowler::getFirstName() const
{
  return firstName;
}

string Bowler::getLastName() const
{
  return lastName;
}

int Bowler::getGm1() const
{
  return game1;
}

int Bowler::getGm2() const
{
  return game2;
}

int Bowler::getGm3() const
{
  return game3;
}

//***************************************************
// Name: print
// Purpose: Print bowlers and stats to screen
// Incoming: N/A
// Outgoing: N/A
// Return: N/A
//***************************************************
void Bowler::print() const
{
  cout << "Name: " << getFirstName() << " " << getLastName() 
  << "  Game 1: " << getGm1() << "  Game 2: " << getGm2() 
  << "  Game 3: " << getGm3() << "     Total: " << getTotal() 
  << "     Average: " << setprecision(3) << getAverage() << endl;
}

//***************************************************
// Name: getTotal
// Purpose: compute total of bowlers scores
// Incoming: N/A
// Outgoing: N/A
// Return: total
//***************************************************
int Bowler::getTotal() const
{
  int total = getGm1() + getGm2() + getGm3();
  return total;
}

//***************************************************
// Name: getAverage
// Purpose: compute average of bowlers scores
// Incoming: N/A
// Outgoing: N/A
// Return: average
//***************************************************
double Bowler::getAverage() const
{
  double average = getTotal() / 3.0;
  return average;
}

