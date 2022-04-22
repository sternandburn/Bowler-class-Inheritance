//***************************************************
// Name: Noah Stern
// Purpose: Implementation file for JuniorBowler that extends Bowler
// Date: 9/15/2020
// Class: CS355
//***************************************************
#include <iostream>
#include "JuniorBowler.h"
using namespace std;

//constructor
JuniorBowler::JuniorBowler()
{
  firstName = "";
  lastName = "";
  game1 = 0;
  game2 = 0;
  game3 = 0;
  age = 0;
  rails = true;
  gender = 'M';
}
//constructor
JuniorBowler::JuniorBowler(string first, string last, int gm1, int gm2, int gm3, int age2, bool rails2, char gender2)
{
  firstName = first;
  lastName = last;
  game1 = gm1;
  game2 = gm2;
  game3 = gm3;
  age = age2;
  rails = rails2;
  gender = gender2;
}

//setJuniorBowler
void JuniorBowler::setJuniorBowler(string first, string last, int gm1, int gm2, int gm3, int age2, bool rails2, char gender2)
{
  Bowler::setBowler(first, last, gm1, gm2, gm3);
  firstName = first;
  lastName = last;
  game1 = gm1;
  game2 = gm2;
  game3 = gm3;
  age = age2;
  rails = rails2;
  gender = gender2;
}
//getters
int JuniorBowler::getAge() const
{
  return age;
}

bool JuniorBowler::getRails() const
{
  return rails;
}

char JuniorBowler::getGender() const
{
  return gender;
}

//***************************************************
// Name: print
// Purpose: Print bowlers on screen by calling Bowler's print function
// Incoming: N/A
// Outgoing: N/A
// Return: N/A
//***************************************************
void JuniorBowler::print() const
{
  cout << endl;
  Bowler::print();
  cout << "Age: " << getAge() <<
  " Rails: " << getRails()
  << " Gender: " << getGender() << endl;
}

