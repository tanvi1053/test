
#include "RecursiveBinarySearch.h"

#include <vector>

RBS::RBS() {}

bool RBS::search(std::vector<int>, int){



}
#include <vector>

    bool search(std::vector<int>& arr, int x) {
        return search_helper(arr, x, 0, arr.size()-1);
    }
    bool search_helper(std::vector<int>& arr, int x, int start, int end) {
        if (start > end) {
            return false;
        }
        int mid = (start + end) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            return search_helper(arr, x, mid+1, end);
        } else {
            return search_helper(arr, x, start, mid-1);
        }
    }



RBS::~RBS() {}

