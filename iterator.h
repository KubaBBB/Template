//iterator.h

#include<stdexcept>
#ifndef ITE
#define ITE

using namespace std;

template< typename T , typename Al>
class Iterator
{

private:
    Al *ptr;
    int pos;
public:

    Iterator():ptr(NULL),pos(0){}
    Iterator(const Iterator <T,Al> &ite);
    Iterator(Al &it);
    Iterator &operator--();
    Iterator &operator++();
    Iterator &operator++(int);
    Iterator &operator+(int add);
    Iterator &operator-(int add);
    T &operator*();
    Iterator &operator=(const Iterator <T,Al> &ite);

    bool operator==(const Iterator<T,Al> &ite);
    bool operator!=(const Iterator<T,Al> &ite);


};
//kostruktor kopiujacy
template<typename T, typename Al>
Iterator <T,Al> :: Iterator(const Iterator <T,Al> &ite)
{
    ptr = ite.ptr;
    pos = 0;
}

template<typename T, typename Al>
Iterator<T, Al>::Iterator(Al &it) : pos(0) {
    ptr = &it;
}


template<typename T, typename Al>		//DZIALA
T & Iterator<T,Al> :: operator*()
{
    return (*ptr)[pos];
}


//operator --
template<typename T, typename Al>
Iterator <T,Al>  &Iterator<T,Al> :: operator--()
{
    if(pos == 0)
    {
        cout<<"nie ma miejsca --"<<endl;
        return *this;
    }
    pos--;
    return *this;
}

//operator ++
template<typename T, typename Al>
Iterator <T,Al> &Iterator<T,Al> :: operator++()
{
    if( pos > (*ptr).size)
    {
        cout<<"nie ma miejsca ++"<<endl;
        return *this;
    }
    Iterator<T, Al> temp = *this;
    pos++;
    return temp;
}

template<typename T, typename Al>
Iterator <T,Al> &Iterator<T,Al> :: operator++(int)
{
    if( pos > (*ptr).size)
    {
        cout<<"nie ma miejsca ++"<<endl;
        return *this;
    }
    pos++;
    return *this;
}


template<typename T, typename Al>
Iterator<T,Al> & Iterator<T,Al> :: operator+(int add)
{
    if (pos >= (*ptr).size)
        return *this;
    pos += add;
    return *this;
}


template<typename T, typename Al>
Iterator<T,Al> & Iterator<T,Al> :: operator-(int add)
{
    if (pos - add > 0)
        return *this;
    pos -= add;
    return *this;
}

//operator przypisania

template<typename T, typename Al>
Iterator<T,Al> &Iterator<T,Al> :: operator=(const Iterator <T,Al> &ite)
{
    ptr = ite.ptr;
    pos = ite.pos;
    return *this;
}

//operatory != i ==
template<typename T, typename Al>
bool Iterator<T, Al> :: operator!=(const Iterator <T,Al> &ite)
{
    return (pos == ite.pos && ptr == ite.ptr) ? false : true;
}

template<typename T, typename Al>
bool Iterator<T, Al> :: operator==(const Iterator <T,Al> &ite)
{
    return (pos == ite.pos && ptr == ite.ptr) ? false : true;
}
//zrobione


#endif
