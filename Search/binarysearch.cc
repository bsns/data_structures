#include<vector>
using namespace std;

bool binary_search(vector<int> &sort_array,int begin,int end, int target){
    if(begin >= end)
        return false;
    int  mid = begin + (end - begin)/2;
    if(sort_array[mid] == target)
        return mid;
    if(sort_array[mid] < target)
        return binary_search(sort_array, mid + 1,end, target);
    else //递归
        return binary_search(sort_array, begin, mid -1,target);
}
