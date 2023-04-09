#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>

#include "Sort.h"

class QuickSort : public Sort {
 public:
  QuickSort();

  std::vector<int> sort(std::vector<int> list);
  std::vector<int> partition(std::vector<int> list);

  ~QuickSort();
};

#endif
