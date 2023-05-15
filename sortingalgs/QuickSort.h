#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>

#include "Sort.h"

class QuickSort : public Sort {
 private:
  std::vector<int> partition(std::vector<int> list);

 public:
  std::vector<int> sort(std::vector<int> list);
};

#endif
