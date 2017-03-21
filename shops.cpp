//shops.cpp

#include"shops.h"
string Shop :: getCompanyName()
{
    return companyName;

}


string Shop :: getStreetName()
{
    return nameStreet;
}


int Shop :: getStreetNumber()
{
    return streetNumber;
}


void Shop :: addToy(string nameToy, double priceToy)
{
    toys.push_back(Toy(priceToy,nameToy));
}



void Shop :: deleteToy(string nametoy)
{
}


ostream & operator<<(ostream & out ,Shop& shop)
{
    string cn = shop.getCompanyName();
    string ns = shop.getStreetName();
    int sno = shop.getStreetNumber();
    out <<"Company name: " << cn <<" Street Name: " << ns <<" Street Number: "<< sno << endl;
cout << "Lista zabawek: "<<endl;
    for (int i = 0; i < shop.toys.getSize(); i++)
    {   out << i+1 << "   ";
        out << "Nazwa: " << shop.toys[i].getName() << " ";
        out << "Cena: " << shop.toys[i].getPrice() << endl;
    }

    return out;
}

istream & operator>>(istream & in , Shop& shop)
{
    double pricetemp;
    string nametemp;
    in >> nametemp >> pricetemp;
    shop.addToy(nametemp,pricetemp);
    return in;
}