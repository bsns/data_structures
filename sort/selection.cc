#include<iostream>
using namespace std;
void selection(int Array[])
{
    int tempvalue;
    int length=sizeof(Array)-1;

    for(int ii=0;ii<=length;ii++)
    for(int jj=ii;jj<=length;jj++)
    if(Array[jj]<Array[ii])
    {
        tempvalue=Array[ii];
        Array[ii]=Array[jj];
        Array[jj]=tempvalue;
    }
}

int main()
{
    int A[]={49,37,68,72,13,45,03};
    selection(A);
    for(int kk=0;kk<=6;kk++)
    cout<<" num"<<kk<<"="<<A[kk]<<endl;
    return 0;
}
