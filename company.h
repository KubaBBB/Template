//company.h



#include"vector.h"
#include "iterator.h"
#include "shops.h"
#include <iostream>
#include <string>


using namespace std;

#ifndef Company_h
#define Company_h

class Company
{



public:
    string name;
    Vector <Shop> stores;
    Company(string namein ="brak") : name(namein) {}

    Company(string Nazwa, Vector <Shop> vec) : name(Nazwa) , stores(vec){}

    ~Company() {}

    void addStore(string names, string namec, int streetn);
    void addShop( Shop& newshop);

    int getLenght() {return stores.getSize();}
    string getCompanyName();
    int getCompanyNum();

    friend ostream &operator<<(ostream & os , Company &out );
   // friend istream &operator>>(istream & is , Company &in);





};

#endif

