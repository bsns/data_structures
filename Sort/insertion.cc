#include<iostream>
using namespace std;
void insertion(int array[]){
    int arrlength=sizeof(array);array--;
    int temp=0;
    for(int ii=1;ii<arrlength;ii++){
        int jj=ii;temp=array[ii];cout<<temp<<endl;
    while(jj>0 && temp<array[jj-1])
    {   array[jj]=array[jj-1];jj--;}
        array[jj]=temp;
    }
}

int main()
{
    int C[]={47,39,65,24,18,3,57};
    insertion(C);
    for(int kk=0;kk<7;kk++)
    cout<<"num"<<kk<<"="<<C[kk]<<endl;
}
