#include<iostream>
#include<vector>
using namespace std;

void merge(int nums[],int start,int end,int mid)
{
  int i_start=start;
  int i_end=mid;
  int j_start=mid+1;
  int j_end=end;
  int length=0;
  vector<int> temp;
  while(i_start<=i_end && j_start<=j_end)
  {
    if(nums[i_start]<nums[j_start])
    {
      temp.push_back(nums[i_start]);
      i_start++;
      length++;
    }else{
      temp.push_back(nums[j_start]);
      j_start++;
      length++;
    }
  }
    while(i_start<=i_end)
    {
        temp.push_back(nums[i_start]);
        i_start++;
        length++;
    }
    while(j_start<=j_end)
    {
        temp.push_back(nums[j_start]);
        j_start++;
        length++;
    }
    for(int i=0;i<length;i++)
    {
        nums[start+i]=temp[i];
  }
}

void mergesort(int nums[],int start,int end)
{
    if(start == end)
        return;
    int mid;
    mid = (start + end)/2;
    mergesort(nums,start,mid);
    mergesort(nums,mid+1,end);
    merge(nums,start,end,mid);
}

int main()
{
    int test[] = {3,5,6,3,1,2,8,4,7};
    int len = (sizeof(test)/sizeof(test[0]));

    mergesort(test,0,len-1);
    for(int i=0;i<len;i++)
        cout<<test[i]<<"-";
}
