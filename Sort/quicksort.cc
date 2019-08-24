#include<iostream>
using namespace std;

void quicksort(int *nums,int l,int r)
{
    if(l>r)
        return;
    int i = l;
    int j =r;
    int m =(r-l)/2;
    if(nums[l]>nums[r])
        swap(nums[l],nums[r]);
    if(nums[m]>nums[r])
        swap(nums[m],nums[r]);
    if(nums[m]>nums[l])
        swap(nums[l],nums[m]);
    int key = nums[l];

    while(i<j)
    {
        while(i<j && nums[j]>key)
            j--;
        if(i<j)
            nums[i++]=nums[j];
        while(i<j && nums[i]<key)
            i++;
        if(i<j)
            nums[j--]=nums[i];
    }
    nums[i]=key;
    quicksort(nums,l,i-1);
    quicksort(nums,i+1,r);
}

int main()
{
    int test[]={4,6,3,8,3,7,9,1,0};
    int l = sizeof(test)/sizeof(test[0]);
    quicksort(test,0,l);
    for(int i=0;i<l;i++)
        cout<<test[i]<<"-";
}