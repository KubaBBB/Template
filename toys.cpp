//toys.cpp
#include "toys.h"


string Toy :: getName()
{
return name;

}

double Toy :: getPrice()
{
return price;
}


Toy & Toy :: operator=(const Toy& op)
{
price = op.price;
name = op.name;
return *this;
}



ostream& operator<<(ostream& out,const Toy& a)
{

out << "Nazwa Zabawki: "<<a.name <<" "<< "Cena Zabawki: " <<a.price<<endl;

return out;

}
