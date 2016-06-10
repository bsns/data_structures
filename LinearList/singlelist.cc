#include<iostream>
using namespace std;
//template <class T>
class node{
private:
int elements;
node *next;
public:
   // void setData(int data){elements=data;};
   //void setNext(int *getnext){next=next;};
    //int getData(){return elements;};
    //int* getadd(){return next;};
friend class singlelist;
};

class singlelist{
public:
     singlelist(){createlist();}
    //~singlelist();
    void createlist();
    bool find(int n,int x);
    int search(int x);
    bool append(int x);
    bool insert(int n,int x);
    bool dellist(int n,int x);
    void clear();
    int getlength();
    void output();
    int listLength=0;
    private:
    node *head;
    node *first;
};
//singlelist::~singlelist(){
//    while(first)
//    {delete first;
//    }
//}
void singlelist::createlist(){
    first->elements=0;
    first->next=NULL;
}
bool singlelist::append(int x){
    node *newnode=new node;
    newnode->elements=x;
    newnode->next=NULL;
    node *p=first;
    if(first->next==0)
    {first->next=newnode;}
    else
    while(p->next!=NULL)
    {
    p=p->next;}
    p->next=newnode;
}
bool singlelist::insert(int n,int x)
{
    listLength++;
    node *newnode=new node;
    node *p=first;
    cout<<"been here";
    for(int ii=0;ii<=listLength;ii++)
    {   p=p->next;
        newnode->next=p->next;
        p->next=newnode;
    }
    }
void singlelist::output(){
    node *q=first;
    if(q==NULL){cout<<"Enpty";return;}
    if(q->next==NULL){cout<<q->elements;cout<<"-->"<<"NULL"<<endl;}
    else{
    do{
        cout<<q->elements;
        cout<<"->";
        q=q->next;
    }
    while(q->next!=NULL);
    cout<<q->elements<<endl;
    }
}
int main()
{
    cout<<"go";
    singlelist B;
    B.append(7);
    B.output();
    B.append(9);
    B.output();
    B.append(10);
    B.output();
}
