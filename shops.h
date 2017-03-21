//shops.h

#include "toys.h"
#include "vector.h"
#include <iostream>
#include <cstring>

using namespace std;
#ifndef SHOPSH
#define SHOPSH

class Shop
{
    Vector <Toy> toys;
    string nameStreet;
    int streetNumber;
    string companyName;


public:


    Shop(string name="brak", string company="brak",int num=0): nameStreet(name),
                                                               streetNumber(num)  , companyName(company)  {}
    ~Shop(){}

    string getCompanyName() ;
    string getStreetName() ;
    int getStreetNumber() ;
    void addToy(string nameToy, double priceToy);
    void deleteToy(string nametoy);

    friend ostream & operator<<(ostream & out ,Shop& shop);
    friend istream & operator>>(istream & in ,Shop& shop);


};

#endif