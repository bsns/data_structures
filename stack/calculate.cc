#include<iostream>
#include"stack_order.h"
#include<math.h>
using namespace std;
class calculate{
public:
    calculate(int maxsize):s(maxsize){};
    void run();
    void clear(){s.clear();}
private:
    seqstack<double> s;
    void pushOperand(double opera);
    bool getOperands(double &op1,double &op2);
    void DoOperator(char);
};
void calculate::pushOperand(double opera){
    s.push(opera);
}
bool calculate::getOperands(double &op1,double &op2){
    if(!s.gettop(op1)){
        cout<<"miss op1"<<&op1<<endl; return 0;
    }
    s.pop();
    if(!s.gettop(op2)){
        cout<<"miss op2"<<endl; return 0;
    }
    s.pop();
    return 1;
}
void calculate::DoOperator(char op){
    double op1,op2;
    if(getOperands(op1,op2))
        switch(op)
        {
            case '+':s.push(op2+op1);break;
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

int main()
{
    calculate cal(20);
    cal.run();
    return 0;
}
