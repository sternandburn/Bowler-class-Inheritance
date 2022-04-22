#ifndef BOWLER_H
#define BOWLER_H
//***************************************************
// Name: Noah Stern
// Purpose: Declare bowler class functions
// Date: 9/13/2020
// Class: CS355
//***************************************************
#include <iostream>
using namespace std;
class Bowler
{
private:
	string firstName, lastName;
	int game1, game2, game3;
public:
	Bowler();
	Bowler(string, string, int, int, int);
	string getFirstName() const;
	string getLastName() const;
	void setBowler(string, string, int, int, int);
	int getGm1() const;
	int getGm2() const;
	int getGm3() const;
	void print() const;
    int getTotal() const;
    double getAverage() const;
};
#endif
