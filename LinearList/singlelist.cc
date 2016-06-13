#include<iostream>
using namespace std;
class node{
private:
int elements;
node *next;
public:
friend class singlelist;
};

class singlelist{
public:
     singlelist(){createlist();}
     //~singlelist(){};
    void createlist();
    bool find(int n,int x);
    int search(int x);
    bool append(int x);
    bool insert(int n,int x);
    bool resetvalue(int n,int x);
    bool dellist(int n);
    int getlength();
    void output();
    int length=0;
    private:
    node *head;
    node *first;
};
void singlelist::createlist(){
    first->elements=0;
    first->next=NULL;
}
bool singlelist::find(int n,int x){
    if(n<0||n>n-1)
    {cout<<"OUT BOUND ";return 0;}
    node *p=first;
    for(int ll=0;ll,n;ll++)
    {p=p->next;}return(p->elements=x);
}
int singlelist::search(int x){
    node *p=first;
    for(int mm=0;p->elements!=0;mm++){
    if (find(mm,x)) return mm;
    p=p->next;}
    }

bool singlelist::append(int x){
    node *newnode=new node;
    newnode->elements=x;
    newnode->next=NULL;
    node *p=first;
    if(length==0)
    {first->next=newnode;}
    else
    while(p->next!=NULL)        //until the end of the list
    {
    p=p->next;}
    p->next=newnode;            //add the new node ate the end
    length++;
}
int singlelist::getlength(){
    cout<<"length="<<length<<endl;
    return length;
}
bool singlelist::insert(int n,int x){
    if(n<0||n>length-1) {cout<<"OUT BOUND";return 0;}
    node *s=first;node *t=new node;
    t->elements=x;
    for(int nn=0;nn<n;nn++){
    s=s->next;
    }
    t->next=s->next;            //first link the node (after the posiotion where insert) with the new node
    s->next=t;                  //link the front node to the new node
    length++;
    return 1;
}
bool singlelist::resetvalue(int n,int x){
    if(n<0||n>length-1){cout<<"OUT BOUND";return 0;}
    node *p=first;
    for(int rr=0;rr<n;rr++)
    {p=p->next;}
    p=p->next;
    p->elements=x;
    return 1;
    }
bool singlelist::dellist(int n){
    if(n<0||n>length-1){cout<<"OUT  BOUND";return 0;}
    node *p=first;node *q=first;
    for(int pp=0;pp<n;pp++){
    if(n==0){first=first->next;}          //the first node without front node
    else{
    q=q->next;cout<<p->elements;
    p=q->next;}}
    q->next=p->next;
    delete p;
    length--;
    return 1;
}
void singlelist::output(){
    node *q=first;
    if(q==NULL){cout<<"Enpty";return;}
        do{
        cout<<q->elements;
        cout<<"->";
        q=q->next;
    }
    while(q->next!=NULL);
    cout<<q->elements<<"-->NULL"<<endl;
}
int main()
{
    cout<<"go";
    singlelist B;
    for(int ii=0;ii<10;ii++)
    {
        B.append(ii);
    }
        B.output();
        B.getlength();
    B.insert(3,7);
        B.output();
        B.getlength();
    B.dellist(5);
        B.output();
        B.getlength();
    B.resetvalue(3,17);
        B.output();
}
