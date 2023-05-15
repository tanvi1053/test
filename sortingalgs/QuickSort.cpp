#include <algorithm>
#include "QuickSort.h"

using namespace std;

vector<int> QuickSort::partition(vector<int> list) {
    if (list.size() <= 1) {
        return list;
    }
    int pivotIndex = list.size() / 3;
    int pivotValue = list[pivotIndex];
    list.erase(list.begin() + pivotIndex);

    std::vector<int> less, greater;
    for (vector<int>::size_type i = 0; i < list.size(); i++) {
        if (list[i] <= pivotValue) {
            less.push_back(list[i]);
        } else {
            greater.push_back(list[i]);
        }
    }

    std::vector<int> sorted;
    if (!less.empty()) {
        std::vector<int> lessSorted = partition(less);
        sorted.insert(sorted.end(), lessSorted.begin(), lessSorted.end());
    }
    sorted.push_back(pivotValue);
    if (!greater.empty()) {
        std::vector<int> greaterSorted = partition(greater);
        sorted.insert(sorted.end(), greaterSorted.begin(), greaterSorted.end());
    }
    return sorted;
}



vector<int> QuickSort::sort(vector<int> list) {
    return partition(list);
}
