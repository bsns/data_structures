#include<iostream>
using namespace std;
template <class T>
class seqstack{
public:
    seqstack(int maxsize);
    ~seqstack(){delete []S;}
    bool isEmpty();
    bool isFull();
    bool gettop(T &x);
    bool push(T x);
    bool pop();
    void clear(){top=-1;}
private:
    int valueMember;
    T *S;
    int top;
};
template <class T>
seqstack<T>::seqstack(int maxsize){
    valueMember=maxsize-1;
    S=new T[maxsize];
    top=-1;
}
template <class T>
bool seqstack<T>::isEmpty(){
    return (top==-1);
}
template <class T>
bool seqstack<T>::isFull(){
    return (valueMember==top);
}
template <class T>
bool seqstack<T>::gettop(T &x){
    if(isEmpty()) {cout<<"Empty 40 ";return 0;}
    else
    x=S[top];
    return 1;
}
template <class T>
bool seqstack<T>::push(T x){
    if(isFull()) {cout<<"Over Flow"; return 0;}
    else
    S[++top]=x;
    return 1;
}
template <class T>
bool seqstack<T>::pop(){
    if(isEmpty()) {cout<<"Under Flow";return 0;}
    else
    return S[top--];
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
