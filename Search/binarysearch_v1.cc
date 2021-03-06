bool binary_search(std::vector<int> &sort_array,int target){
    int begin = 0;
    int end = sort_array.size() -1;
    while(begin <= end){
    int mid = (begin+end)/2;
    if(target == sort_array[mid])
        return mid;
    else if(target < sort_array[mid])
        end = mid - 1;
    else if(target > sort_array[mid])
        start = mid + 1;
    }
    return false;
}
