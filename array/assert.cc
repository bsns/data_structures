#include<iostream>
using namespace std;
#include<assert.h>
template <class T>
class Array1D
{
public:
  Array1D(int size=0);    //set default size
  ~Array1D() {delete [] elements;}
  T &operator[] (int i) const;
  Array1D<T>&operator=(const Array1D<T> &r);
  friend istream& operator>> (istream &in,Array1D<T> &r);
  friend ostream& operator<< (ostream &out,const Array1D<T> &r);
private:
  int size;
  T *elements;
};

template <class T>
Array1D<T>::Array1D(int sz)
{
  assert(sz>=0);
  size=sz;
  elements=new T[sz];
}
template <class T>
T& Array1D<T>::operator [](int i) const
{
  assert(i>=0&&i<size);
  return elements[i];
}
template <class T>
Array1D<T>& Array1D<T>::operator=(const Array1D<T> &r)
{
  if(this!=&r){
    size=r.size;
    delete[] elements;
    elements=new T[size];
    for(int ii=0;ii<size;ii++)
      elements[ii]=r.elements[ii];
  }
  return *this;
}
template<class T>
istream &operator>>(istream &in,Array1D<T> &r)
{
  cout<<"Input Array"<<endl;
  for(int jj=0;jj<r.size;jj++)
  in>>r.elements[jj];
  return in;
}
template <class T>
ostream &operator>>(ostream &out,const Array1D<T> &r)
{
  cout<<"Array=";
  for(int kk=0;kk<r.size;kk++)
  out<<r.elements[kk]<<' ';
  cout<<endl;
  return out;
}
