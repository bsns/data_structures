#include<iostream>
using namespace std;
class seqstack{
public:
    seqstack(int msize);
    bool isEmpty();
    bool isFull();
    int gettop();
    bool push(int x);
    bool pop();
    void clear(){valueMember=0;}
private:
    int valueMember;
    int *T;
    int msize;
};
seqstack::seqstack(int msize){
    msize--;
    T=new int[msize];
    valueMember=0;
}
bool seqstack::isEmpty(){
    if(valueMember<0)
        return 1;
    else
        return 0;
}
bool seqstack::isFull(){
    if(valueMember==msize)
    {cout<<msize;   return 1;}
    else
        return 0;
}
int seqstack::gettop(){
    if(isEmpty()) {return 0;}
    else
    cout<<T[valueMember]<<endl;
    return T[valueMember];
}
bool seqstack::push(int x){
    if(isFull()) {return 0;}
    else
    T[++valueMember]=x;
    return 1;
}
bool seqstack::pop(){
    if(isEmpty()) {cout<<"Under Flow";return 0;}
    else
    valueMember--;
}
int main()
{
    seqstack D(10);
    D.push(9);
    D.gettop();
    D.push(8);
    D.gettop();
    D.pop();
    D.gettop();
}
