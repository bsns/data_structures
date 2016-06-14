#include<iostream>
using namespace std;
template <class T>
class seqstack{
public:
    seqstack(int maxsize);
    bool isEmpty();
    bool isFull();
    int gettop(T &x);
    bool push(T x);
    bool pop();
    void clear(){msize=-1;}
private:
    int valueMember;
    T *S;
    int msize;
};
template <class T>
seqstack<T>::seqstack(int maxsize){
    //msize--;
    valueMember=maxsize-1;
    S=new T[maxsize];
    //valueMember=0;
    msize=-1;
}
template <class T>
bool seqstack<T>::isEmpty(){
    return (msize==-1);
}
template <class T>
bool seqstack<T>::isFull(){
    //if(valueMember==msize)
    //{cout<<msize;   return 1;}
    //else
    //    return 0;
    return (valueMember==msize);
}
template <class T>
int seqstack<T>::gettop(T &x){
    if(isEmpty()) {cout<<"Empty 40 ";return 0;}
    else
    //cout<<S[valueMember]<<endl;
    x=S[msize];
    return 1;
}
template <class T>
bool seqstack<T>::push(T x){
    if(isFull()) {cout<<"Over Flow"; return 0;}
    else
    S[++valueMember]=x;
    return 1;
}
template <class T>
bool seqstack<T>::pop(){
    if(isEmpty()) {cout<<"Under 55 Flow";return 0;}
    else
    msize--;
    return 1;
}
/*int main()
{
    seqstack D(10);
    D.push(9);
    D.gettop();
    D.push(8);
    D.gettop();
    D.pop();
    D.gettop();
}
*/
