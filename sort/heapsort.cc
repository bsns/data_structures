#include<iostream>
#include<vector>
using namespace std;

void myswap(int nums[],int a,int b)
{
    int temp=nums[a];
    nums[a]=nums[b];
    nums[b]=temp;
}

void heapadjust(int nums[],int index,int len)
{
    int max = index;
    int lchild = index*2+1;
    int rchild = index*2 +2;
    if(lchild<len && nums[lchild]>nums[max])
    {
        max =lchild;
    }
        if(rchild<len && nums[rchild]>nums[max])
    {
        max =rchild;
    }
    if(max != index)
    {
        myswap(nums,max,index);
        heapadjust(nums,max,len);
    }
}

void heapsort(int nums[],int len)
{
    for(int i=(len/2-1);i>=0;i--)
    {
        heapadjust(nums,i,len);
    }
        for(int i=len;i>=0;i--)
    {
        myswap(nums,0,i);
        heapadjust(nums,0,i);

    }
}

int main()
{
    int test[] = {3,5,6,3,1,2,8,4,7};
    int len = (sizeof(test)/sizeof(test[0]));
    
    heapsort(test,len-1);
    for(int i=0;i<len;i++)
        cout<<test[i]<<"-";
}