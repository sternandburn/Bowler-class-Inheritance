//***************************************************
// Name: Noah Stern
// Purpose: Driver function to demonstrate the bowler and junior bowler class
// Date: 9/15/2020
// Class: CS355
//***************************************************
#include "JuniorBowler.h"
#include "Bowler.h"
#include <iostream>
using namespace std;

int main()
{
  Bowler bowler;
  Bowler bowler2;
  Bowler bowler3;

  bowler.setBowler("Zach", "Lisko", 26, 73, 59);
  bowler2.setBowler("Jake", "Whitehead", 60, 75, 82);
  bowler3.setBowler("Dawson", "Cazola", 68, 42, 55);

  bowler.print();
  bowler2.print();
  bowler3.print();
  
  JuniorBowler jbowler, jbowler2, jbowler3;

  jbowler.setJuniorBowler("Noah", "Stern", 70, 60, 55, 22, true, 'M');
  jbowler2.setJuniorBowler("Mack", "McClusky", 35, 49, 39, 18, false, 'M');
  jbowler3.setJuniorBowler("Augustus", "Gloop", 67, 52, 49, 19, true, 'M');

  jbowler.print();
  jbowler2.print();
  jbowler3.print();
}

