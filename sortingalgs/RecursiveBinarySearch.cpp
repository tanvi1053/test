#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> numVec, int intToFind) {
  int start = 0;
  int end = numVec.size() - 1;
  return shelper(numVec, intToFind, start, end);
}

bool RecursiveBinarySearch::shelper(std::vector<int>& numVec, int intToFind, int start, int end) {
  if (start > end) {
    return false;
  }

  int mid = start + (end - start) / 2;

  if (numVec[mid] == intToFind) {
    return true;
  } else if (intToFind < numVec[mid]) {
    return shelper(numVec, intToFind, start, mid - 1);
  } else {
    return shelper(numVec, intToFind, mid + 1, end);
  }
}
