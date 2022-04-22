//***************************************************
// Name: Noah Stern
// Purpose: JuniorBowler class declaration extends Bowler
// Date: 9/15/2020
// Class: CS355
//***************************************************
#ifndef JUNIORBOWLER_H
#define JUNIORBOWLER_H

#include <iostream>
#include "Bowler.h"
using namespace std;
class JuniorBowler : public Bowler
{
private:
	string firstName, lastName;
	int game1, game2, game3;
	int age;
	bool rails;
    char gender;
public:
	JuniorBowler();
	JuniorBowler(string, string, int, int, int, int, bool, char);
	void setJuniorBowler(string, string, int, int, int, int, bool, char);
	int getAge() const;
	bool getRails() const;
	char getGender() const;
	void print() const;
};

#endif

