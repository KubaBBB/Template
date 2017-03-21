#include <iostream>
#ifndef Vector_h
#define Vector_h
using namespace std;

template <typename T , typename Al>
class Iterator;


template <typename T>

class Vector
{
	int size;
	T *field;
	int len;


public:	
	friend class Iterator <T , Vector <T> >;	
	
	~Vector();
	Vector(const Vector<T>& copy);
   Vector(int);
   Vector();
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

	//swap, max_size dla int, show all
	Iterator <T , Vector <T> > begin();
//Klasa vector jest zaprzyjazniona z klasa Iterator
	Iterator <T , Vector <T> > end() ;	

};

					//DZIALA

template <typename T>
Vector<T> :: Vector(int size_s)
{
field = new T[size_s];
size = size_s; 
len = 0;
}


					//DZIALA			
				
template <typename T>
Vector<T> :: Vector()
{
field = new T[1];
size = 1;
len = 0;

}
					//DZIALA
					//destruktor - delete allocation checked
template <typename T>
Vector<T> :: ~Vector()
{
delete  [] field;
size = 0;
len=0;
}


					//DZIALA
					//konstruktor copiujacy
template <typename T>
Vector<T> :: Vector(const Vector<T> & copy)
{
len = copy.len;
size = copy.size;
field = new T[size];
for ( int i = 0 ; i < size ; i++)
	field[i] = copy.field[i];
}

					
					//DZIALA
					
					
template <typename T>
void Vector<T> :: resize()
{
	//cout<<"SIEMA!!!"<<endl;
//std::cin.clear();
size = size + 5;
	//cout<<"Zwiekszono size "<<endl;

//cout<<"stara tablica: "<<endl;
//for(int i = 0; i<len ; i++)
//	cout << field[i]<<" ";
	
T *temp = new T[size];
for(int i = 0 ; i < len ; i++)
    temp[i] = field[i];
//cout<<"nowa tablica: "<<endl;
//for(int i = 0; i<len ; i++)
//	cout << temp[i]<<" ";
delete []field;
field = new T[size];
for(int i = 0 ; i<len; i++)
	field[i] = temp[i];

//cout<<"przepisano z powrotem powiekszone field: "<<size<<" len: "<<len<<"tablica: "<<endl;
//for(int i = 0 ; i<len ; i++)
//	cout << field[i];
delete []temp;
}
	
							//DZIALA	
					
template <typename T>
void Vector<T> :: push_back(const T& push)
{
if(len+2 >= size)
	{
	//cout << "not enough space, i will allocate more"<<endl;
	
	resize();
	//cout<<"po resize: ";
	//for(int i = 0 ; i<len ; i++)
	//	cout << field[i] << " ";
	}
//cout<<"Wpisano " <<push << endl;
field[len] = push;
len++;
}

							//DZIALA
				
				
template <typename T>
void Vector<T> :: insert(const T & ins, int pos)
{
if(pos > len)
	{
	std :: cout <<"pos fail insert fun"<<endl;
	return;
	}
if( len == size)
	{
	std :: cout <<"insert fail"<<endl;
	resize();
	}
len++;
T *temp = new T[len];
int i;
for(i = 0 ; i < pos ; i++)
	temp[i] = field[i];
temp[pos] = ins;
for(i = 1+pos; i < len ; i++)
	{
	temp[i] = field[i-1];

	}
delete []field;
field = new T[len];
for( i = 0 ; i < len ; i++)
	field[i] = temp[i];
delete []temp;

}
						//DZIALA

template <typename T>
void Vector<T> :: dPos(const int delPos)
{
if( delPos  > len)
	{
	cout<<"error delete position"<<endl;
	return;
	}

T *temp = new T[len];
for( int i = 0 ; i < delPos ; i++ )
	temp[i] = field[i];
for(int i = delPos ; i < len ; i++)
	temp[i] = field[i+1];
len--;

delete []field;
field = new T[len];
for( int i = 0 ; i < len ; i++)
	field[i] = temp[i];

delete []temp;
return;
}


					//DZIALA				
				
template <typename T>
void Vector<T> :: pop()
{


T *temp = new T[len];
len--;
for(int i = 0 ; i<len ; i++)
	temp[i] = field[i];
	
delete []field;
field = new T[size];
for(int i = 0 ; i<len; i++)
	field[i] = temp[i];
delete []temp;
return;
}
				

				//DZIALA
				//LEN - zapelnione				
				
template <typename T>
int Vector<T> :: getSize()
{return len;}



				//DZIALA

template <typename T>
int Vector<T> :: getSize2()
{return size;}


				//DZIALA
				
template <typename T>
void Vector<T> :: clear()
{
	
delete [] field;
field = new T[size];
len = 0;


}


				//DZIALA
				//operator [], wyluskiwanie wartosci spod [pos]
template <typename T>
T& Vector<T> :: operator[](const int op) const
{
if(op > len)
	{
	std :: cout << "fail operator []"<<endl;
	return field[0];
	}
return field[op];
}
				
							//DZIALA
				
				
template <typename T>
Vector<T>& Vector<T> :: operator=(const Vector<T>& op)
{
//if( this == &op)
	//return *this;
size = op.size;
len = op.len;

delete[] field;
field = new T[size];

for (int i = 0; i < len; i++)
	field[i] = op.field[i];
return *this;

}


							//DZIALA

				//Itertor begin
template <typename T>
Iterator < T , Vector <T> > Vector<T> :: begin()
{
Iterator<T, Vector<T> > test(*this);
    return test;

}

							//DZIALA
template <typename T>
Iterator <T,Vector<T> > Vector<T> :: end()
{
Iterator<T, Vector<T> > test(*this);
test + len;
return test;
}



#endif

