#include<iostream>
using namespace std;
#include<stddef.h>
template <class T>
class Lqueue{
private:
    int msize;
    Lqueue<T>* front;
    Lqueue<T>* rear;
public:
    Lqueue(int length){msize=length;}
    ~Lqueue() {clear();delete front;}
    void clear(){
        while(front->next!=NULL){
            rear=front;
            delete rear;
        }
        rear=front;
        front=0;
    }
    void enqueue(const T& x){
        rear->next=new Lqueue<T>(x,NULL);
        rear=rear->next;
        msize++;
    }
    T dequeue(){
    Assert(msize !=0, "Queue is Empty");
    T x=front->next->element;
    Lqueue<T>* temp=front->next;
    if(rear==temp)
        rear=front;
    delete temp;
    msize--;
    return x;
    }
    void outprint(){
      T x=front;
      while(x->element!=NULL)
      cout<<x->element;
      x=x-next;
    }
    const T& frontValue(){
      Assert(msize!=0,"Queue is empty");
      return front->next->element;
    }
};
