#include<iostream>
#include"stack.h"
#include<math.h>
using namespace std;
class calculate{
public:
    void run();
    void clear();
private:
    stack s;
    void pushOperand(double opera);
    bool getOperands(double x,double y);
    void DoOperator(char);
};
void calculate::pushOperand(double opera){
    s.push(opera);
}
bool calculate::getOperands(double op1,double op2){
    if(!s.gettop(op1)){
        cout<<"miss op"<<endl; return 0;
    }
    s.pop();
    if(!s.gettop(op2)){
        cout<<"miss op"<<endl; return 0;
    }
    s.pop();
    return 1;
}
void calculate::DoOperator(char op){
    bool result;
    double op1,op2;
    if(getOperands(op1,op2))
        switch(op)
        {
            case '+':s.push(op1+op2);break;
            case '-':s.push(op2-op1);break;
            case '*':s.push(op1*op2);break;
            case '/':if(fabs(op1)<1e-6){
                         cout<<"Divide by 0!"<<endl;
                         clear();}
                    else s.push(op2/op1);break;
            case '^':s.push(pow(op2,op1));break;
            }
            else clear();
}
void calculate::run(){
    char c;double newop;
    while(cin>>c,c!='#'){
    switch(c){
    case '+':
    case '-':
    case '*':
    case '/':
    case'^' :DoOperator(c);break;
    default:cin.putback(c);
    cin>>newop;
    pushOperand(newop);break;
}}
    if(s.gettop(newop)) cout<<newop<<endl;
    }
