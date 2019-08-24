///starts with two elements,compare them to find the greater one.if fr<be.swap
///  the whole progress from the fist to the end.every time position++;
#include<iostream>
using namespace std;
int bubble(int List[])
{

    int tempvalue=0;
    int length=sizeof(List);
    for(int ii=0;ii<=length-1;ii++)
    {
        for(int jj=0;jj<=length-1;jj++)
        {
            if(List[jj]>List[jj+1])
            {
                tempvalue=List[jj];
                List[jj]=List[jj+1];
                List[jj+1]=tempvalue;
            }
        }
    }
}

int main()
{
    int test_array[]={9,3,2,11,6,8,7,14};
    bubble(test_array);
    int array_length=sizeof(test_array)/sizeof(test_array[0]);
    for(int kk=0;kk<=array_length-1;kk++)
    {
        cout<<"arry_num"<<kk<<"="<<test_array[kk]<<endl;
    }
    return 0;
}
