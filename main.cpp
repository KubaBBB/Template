//main

#include<iostream>
#include"vector.h"
#include"toys.h"
#include"iterator.h"
#include"shops.h"
#include"company.h"
/*
~Vector();
	Vector(const Vector<T>& copy);
   Vector(int num=0);
	void push_back(const T& push);
	void insert(const T& ins , int pos);
	void pop();
	int getSize();
   int getSize2();
	void dPos(const int delPos);
	void resize();
	void clear();
	Vector<T> & operator =(const Vector<T> &);
	T &operator[](const int ) const;
	
	*/      //deklaracje funkcji dla vector.h


/*
    Iterator <T , Vector <T> > begin();                 d
    Iterator <T , Vector <T> > end() ;                  d
    Iterator():ptr(NULL),pos(0){}                       d
    Iterator(const Iterator <T,Al> &ite);               d
    Iterator(Al &it);
    Iterator &operator--();
    Iterator &operator++();                             d
    Iterator &operator++(int);                          d
    Iterator &operator+(int add);                       d
    Iterator &operator-(int add);
    T &operator*();                                     d
    Iterator &operator=(const Iterator <T,Al> &ite);    d
    bool operator==(const Iterator<T,Al> &ite);         d
    bool operator!=(const Iterator<T,Al> &ite);         d

*/      //deklaracje funkcji dla iterator.h

using namespace std;

int main() {
/*
cout<<"pushing back "<<endl;
int leng, sizer;



Vector <int> testing2;
leng = testing2.getSize();
sizer = testing2.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;


cout<<"tu"<<endl;
testing2.push_back(1);
//cout<<"1 el: "<<testing2[0]<<endl;

cout<<"tu"<<endl;
testing2.push_back(2);
//cout<<"2 el: "<<testing2[1]<<endl;

cout<<"tu"<<endl;
testing2.push_back(3);cout<<"tu"<<endl;
testing2.push_back(4);cout<<"tu"<<endl;
testing2.push_back(5);cout<<"tu"<<endl;

cout<<"TUTAJ " <<endl;

testing2.push_back(6);cout<<"tu"<<endl;

cout << "Operator []" <<endl;

for(int i = 0 ; i<testing2.getSize() ; i++)
	cout<<testing2[i]<<endl;
	
leng = testing2.getSize();
sizer = testing2.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;




//cout<<siemass
Vector <int> cop(testing2);

leng = cop.getSize();
sizer = cop.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;

cout<<endl<<"Kons kopiujacy"<<endl;
for(int i=0 ; i<cop.getSize(); i++)
	cout<< cop[i]<<" ";

leng = cop.getSize();
sizer = cop.getSize2();



cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;
cop.insert(10,3);
cout<<endl<<"Kons kopiujacy"<<endl;
for(int i=0 ; i<cop.getSize(); i++)
	cout<< cop[i]<<" ";
leng = cop.getSize();
sizer = cop.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;
cop.pop(); cout<< "POP"<<endl;
for(int i=0 ; i<cop.getSize(); i++)
	cout<< cop[i]<<" ";
leng = cop.getSize();
sizer = cop.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;



cop.clear();
cout<<"pop clear" <<endl;
for(int i=0 ; i<cop.getSize(); i++)
	cout<< cop[i]<<" ";
leng = cop.getSize();
sizer = cop.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: t"<<leng<<endl;

cout<<"operator =  test"<<endl;

cop.operator=(testing2);

for(int i=0 ; i<cop.getSize(); i++)
	cout<< cop[i]<<" ";
leng = cop.getSize();
sizer = cop.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;

cop.dPos(3);
cout<<"D pos funkcja: "<<endl;
for(int i=0 ; i<cop.getSize(); i++)
	cout<< cop[i]<<" ";
leng = cop.getSize();
sizer = cop.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;



cout<<"Sprawdzenie na obiekcie typu Toy:"<<endl;
Toy mis(12.5,"Mis");
Vector <Toy> obiekt;
obiekt.push_back(mis);
cout<<"Mis push_back, teraz wypisze: "<<obiekt[0]<<endl;
//for(int i=0 ; i<obiekt.getSize(); i++)
	//cout<< obiekt[i]<<" ";

cout<<obiekt[0];
leng = obiekt.getSize();
sizer = obiekt.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;

Toy pluszak(4,"Pluszak");
Toy zyrafa(1,"Zyrafa");
obiekt.push_back(pluszak);
obiekt.push_back(mis);
cout<<"stworzono pluszak i zyrafa. "<<endl;
leng = obiekt.getSize();
sizer = obiekt.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;
for(int i=0 ; i<obiekt.getSize(); i++)
	cout<< obiekt[i]<<endl;
	
	
cout<<"**********************************"<<endl;
Vector <Toy> c(obiekt);




leng = c.getSize();
sizer = c.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;

cout<<endl<<"Kons kopiujacy"<<endl;
for(int i=0 ; i<c.getSize(); i++)
	cout<< c[i]<<" ";

leng = c.getSize();
sizer = c.getSize2();

Toy lew(2,"lew");

cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;
c.insert(lew,1);
cout<<endl<<"Po insercie"<<endl;
for(int i=0 ; i<c.getSize(); i++)
	cout<< c[i]<<" ";
leng = c.getSize();
sizer = c.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;
cout<<"POP"<<endl;

c.pop(); 

for(int i=0 ; i<c.getSize(); i++)
	cout<< c[i]<<" ";
leng = c.getSize();
sizer = c.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;



c.clear();
cout<<"clear" <<endl;
for(int i=0 ; i<c.getSize(); i++)
	cout<< c[i]<<" ";
leng = c.getSize();
sizer = c.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: t"<<leng<<endl;

cout<<"test operatora ="<<endl;

Vector <Toy> d;
d = c.operator=(obiekt);

for(int i=0 ; i<c.getSize(); i++)
	cout<<"indeks: "<<i<<" "<< c[i]<<" ";
leng = c.getSize();
sizer = c.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;
cout<<endl<<endl<<"To byl obiekt c, teraz wyswietli sie obiekt d:"<<endl;

for(int i=0 ; i<d.getSize(); i++)
	cout<< d[i]<<" ";
leng = d.getSize();
sizer = d.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;


cout<<"\n\n\nFunkcja Delete Position "<<endl<<endl<<endl;
c.dPos(4);

cout<<"D pos funkcja: "<<endl;
for(int i=0 ; i<c.getSize(); i++)
	cout<< c[i]<<" ";
leng = c.getSize();
sizer = c.getSize2();
cout<<"Wielkosc: "<<sizer <<" Dlugosc: "<<leng<<endl;

*/      //testy do vector.h
/*
    Vector <int> q(5);
    for( int i = 0 ; i <3 ; i++)
        q.push_back(i*i);
int i = 0;
Iterator <int , Vector<int > > it1;

    cout<<"Test begin, end, operatora iterator++"<<endl;
for( it1 = q.begin(); it1 != q.end() ; it1++ )
    {
        cout <<"Indeks: "<<i<<" Wartosc: "<< (*it1) << endl;
        i++;
    }

cout<< "Test operator iterator --"<<endl;
//TUTAJ BLEDY
    for( it = q.end(); it != q.begin() ; it-- )
    {
        cout <<"Indeks: "<<i<<" Wartosc: "<< (*it) << endl;
        i++;
    }


    Iterator <int , Vector<int> > it2,it3;

    Vector <int> w(3);
    for( int i = 0 ; i <3 ; i++)
        w.push_back(i*i+5);
    cout << "Test iterator operator +(int)"<<endl;
    for( int i = 0 ; i <3 ; i++)
        cout << "Indeks: " << i << " Wartosc: " << w[i]<<endl;
    it2 = w.begin();
  cout<<"Element[0]: " << *(it2 = w.begin()) << " Element dwa dalej: " << (*it2.operator+(2)) << endl;
    cout << "Element[2]" << *(it2 = w.end()+3) << " Element dwa wczesniej: " << *(it2.operator-(2)) << endl;                //do poprawienia

    it3 = w.begin();
    cout<<"test iterator operator =="<<endl;
    cout<<"it2 == it3 ? gdy it2 i it3 to w.begin()"<<endl;
if((*it2) == (*it3))
    cout << "sa takie same"<<endl;
    else
    cout<<"nie sa takie same"<<endl;


    cout<<"test iterator operator !="<<endl;
    cout<<"it2 != it3 ? gdy it2 i it3 to w.begin()"<<endl;
    if((*it2) != (*it3))
        cout << "nie sa takie same"<<endl;
    else
        cout<<"sa takie same"<<endl;

    cout<<endl<<endl<<"Test konstruktora kopiujacego: "<<endl;

    it2 = w.begin();
    Iterator <int , Vector<int> > it4(it2);
    cout<<"it2 = " << *(it2) << " it3 = " << *(it4) << endl;

    cout<<endl<<endl<<"operator przypisania = "<<endl;
    Iterator <int , Vector <int> > it5 = it4 ;
    cout << "Iterator it4: " << *(it4) << endl;
    cout << "Iterator it5: " << *(it5) << endl;
*/      //testy do iterator.h

    Toy t1(5, "mis");
    Toy t2(4, "lew");
    Shop s1("marczyn", "lego", 3);
    s1.addToy("lew", 12);
    s1.addToy("zyrafa", 10);
    cout << "zabawka pierwsza: " << t1 << endl;

    cout << "Sklep s1: " << s1 << endl;

    Vector<Toy> v4(5);
    v4.push_back(t1);

    Company com1;
    string n1;
    Vector<Shop> v1(2);
    //v1.push_back(s1);

    com1.name = "siema";
    com1.stores.push_back(s1);

    cout << "\n\n Wypisze teraz company com1: " << endl;
    cout << com1;

    cout << "\n\n\nTest calego Company" << endl << endl;


    Company com2("STAR WARS");
    Toy t3(5, "kaczka");
    s1.addToy("kaczka", 10);
    com2.stores.push_back(s1);

    cout << "Wypisz sklep STAR WARS:" << endl;
    cout << endl << com2 << endl << endl;


    cout << "Test iteratora: " << endl;
    v4.push_back(t2);
    v4.push_back(t3);
    Iterator<Toy, Vector<Toy> > iter1;
    int k = 1;
    for (iter1 = v4.begin(); iter1 != v4.end(); iter1++) {
        cout << "Zabawka nr: " << k << " " << *(iter1) << endl;
        k++;

    }


    return 1;
}
