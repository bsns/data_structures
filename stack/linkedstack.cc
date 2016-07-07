#include<stddef.h>
template <class T>
class linkedStack{
private:
  linkedStack<T>* top;
  int msize;
public:
  linkedStack(int size){top=NULL;msize=0;}
  ~linkedStack(){clear();}
  void clear(){
    while(top!=NULL){
      linkedStack<T>* temp=top;
      top=top->next;
      delete temp;
    }
    msize=0;
  }
  void push(T &x){
    top=new linkedStack<T>(x,top);
    msize++;
  }
  void pop(){
    Assert(top!=NULL,"Stack is empty");
    T x=top->elements;
    linkedStack<T>* ptemp=top->next;
    delete top;
    top=ptemp;
    msize--;
    return x;
  }
  const T& topValue(){
    Assert(top!=0,"Stack is empty");
    return top->elements;
  }
};
