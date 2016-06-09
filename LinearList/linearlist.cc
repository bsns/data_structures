#include<iostream>
using namespace std;
template<typename T>
class seqlist{
private:
    int length;
    int maxlength;
    int *elements;
public:
    seqlist(int size);
    ~seqlist() {delete [] elements;}
    bool isEmpty();
    int getLength();
    int search(T x);
    int insert(int n,T x);
    void outprint();
    int delValue(int n);
};
template<typename T>
seqlist<T>::seqlist(int n){
    maxlength=n;
    elements=new T[maxlength];
    length=0;
}
template<typename T>
bool seqlist<T>::isEmpty(){
    return length=0;
}
template<typename T>
int seqlist<T>::insert(int n,T x){
    if(n<-1||length==maxlength){
    cout<<"out bound"<<n<<length-1<<endl;
    }
    else
    length++;
    for(int ii=length-1;ii>n;ii--)
    {elements[ii]=elements[ii-1];}
    elements[n]=x;

}
template<typename T>
int seqlist<T>::search(T x){
    for(int ll=0;ll<=length-1;ll++)
    if(elements[ll]==x)
    {cout<<"find at pos"<<ll<<endl; return ll;}
    return -1;
}
template<typename T>
int seqlist<T>::delValue(int n){
    if(n<0)
    {cout<<"input error";return false;}
    else
    for(int mm=n;mm<=length-1;mm++)
    {elements[mm]=elements[mm+1];}elements[length-1]=NULL;
    length--;
    }
template<typename T>
void seqlist<T>::outprint(){
    for(int kk=0;kk<=length-1;kk++)
    cout<<elements[kk];
    cout<<endl;
}

int main()
{
    seqlist<int> A(10);
    for(int jj=0;jj<=9;jj++)
    {A.insert(jj,jj);}
    A.outprint();
    A.search(3);
    A.delValue(4);
    A.outprint();
    A.insert(4,9);
    A.outprint();
}
