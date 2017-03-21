//toys.h
#include <string>
#include<iostream>

using namespace std;

#ifndef Toys_h
#define Toys_h

class Toy
{
	double price;
	string name;

	public:
	
	Toy(): price(0), name("brak"){}
	Toy(double pr , string na):price(pr), name(na){}
	string getName();
	
	double getPrice();



	Toy &operator=(const Toy& op);
	friend ostream& operator<<(ostream& out,const Toy&);
};

#endif
