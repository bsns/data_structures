#include<iostream>
using namespace std;
class node{
private:
    int elements;
    node *next;
public:
    friend class stack;
};
class stack{
public:
    stack(int x){msize=x;}
    //~stack();
    bool isEmpty();
    bool isFull();
    bool gettop();
    bool push(int x);
    bool pop();
    void outprinf();
private:
    int valuemember=0;
    node *first;
    int msize;
};
bool stack::isEmpty(){
    return valuemember==0;
}
bool stack::isFull(){
    return (valuemember==msize);
}
bool stack::push(int x){
    if(isFull()) {cout<<"OUT BOUND";return 0;}
    {node* newnode= new node;
    newnode->elements=x;
    newnode->next=first;
    first=newnode;
    valuemember++;
    return 1;}
}
bool stack::pop(){
    if(isEmpty()){cout<<"Under Flow";return 0;}
    node *p=first;
    first=first->next;
    delete p;
    //cout<<"pop sucessful"<<endl;
    valuemember--;
    return 1;
}
bool stack::gettop(int x){
    if(isEmpty()) {cout<<"Empty";return 0;}
    x=first->next;
    return 1;
}
void stack::outprinf(){
    if(isEmpty()) {cout<<"Under Flow";}
    node * printnode=first;
    for(int ii=0;ii<valuemember;ii++)
    {
        cout<<"num"<<ii<<"="<<(printnode->elements)<<endl;
        printnode=printnode->next;
    }
}
int main()
{
    stack E(10);
    E.push(11);cout<<"After insert 11"<<endl;
    E.outprinf();
    E.push(12);cout<<"After insert 12"<<endl;
    E.outprinf();
    E.pop(); cout<<"After pop"<<endl;
    E.outprinf();
}

