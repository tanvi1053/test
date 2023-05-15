#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {
 private:
  bool shelper(std::vector<int>& numVec, int intToFind, int start, int end);

 public:
  bool search(std::vector<int> numVec, int intToFind);
};

#endif
