//company.cpp

#include"company.h"



ostream& operator<<(ostream &os, Company &out) {
    os << "Nazwa Firmy: " << out.name << " \nLista sklepow: \n\n"<<endl;
    for( int i = 0 ; i < out.getCompanyNum() ; i++)
        os << i+1 << "   " << out.stores[i]<<endl;
    os<<"Tyle!"<<endl<<endl;

    return os;
}


void Company ::addStore(string names, string namec, int streetn) {
Shop a(names , namec , streetn);
  stores.push_back(a);
return;


}



void Company::addShop( Shop& newshop) {

    stores.push_back(newshop);
    return;
}


string Company ::getCompanyName(){
    return name;
}


int Company::getCompanyNum() {

    return stores.getSize();

}

