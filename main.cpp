#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "Sort.h"
using namespace std;

int main(void) {
  vector<int> A = {4, 2, 8, 1, 9, 6, 7, 3, 5};
  BubbleSort bub;
  vector<int> sortedList = bub.sort(A);
  for (int i = 0; i < A.size(); i++) {
    cout << sortedList[i] << " ";
  }
  cout << endl;



  QuickSort qs;
  std::vector<int> arr = {5, 3, 9, 1, 7, 2};
  std::vector<int> sortedArr = qs.sort(arr);
  for (int i = 0; i < sortedArr.size(); i++) {
    std::cout << sortedArr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}