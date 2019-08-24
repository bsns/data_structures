#include<iostream>
using namespace std;
class sequeue{
public:
    sequeue(int msize);
    bool isEmpty() {return (front==rear);}
    bool isFull() {return ((rear+1)%maxsize==front);}
    bool Front(int &x);
    bool enqueue(int x);
    bool dequeue();
    void outprint();
    void clear();
private:
    int front;
    int rear;
    int maxsize;
    int *q;
};
sequeue::sequeue(int msize){
    maxsize=msize;
    q=new int[maxsize];
    front=rear=0;
}
bool sequeue::Front(int &x){
    if(isEmpty()) {cout<<"empty";return 0;}
    x=q[(front+1)%maxsize];
    return 1;
}
bool sequeue::enqueue(int x){
    if(isFull()) {cout<<"FULL";return 0;}
    q[rear=(rear+1)%maxsize]=x;
    return 1;
}
bool sequeue::dequeue(){
    if(isEmpty()) {cout<<"Under Flow";return 0;}
    front=((front+1)%maxsize);
    return 1;
}
void sequeue::outprint(){
    if(isEmpty()) cout<<"Under Flow";
    for(int ii=front;ii<=rear;ii++)
    cout<<"queue"<<ii<<"="<<q[ii]<<endl;
    }

int main()
{
    sequeue F(10);
    F.enqueue(3);
    F.enqueue(5);
    F.outprint();
    F.dequeue();
    F.outprint();
    }
