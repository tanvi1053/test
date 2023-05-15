// #include <iostream>
// #include <vector>

// #include "BubbleSort.h"
// #include "QuickSort.h"
// #include "RecursiveBinarySearch.h"
// #include "Sort.h"
// using namespace std;

// int main(void) {
//   vector<int> arr;

//   int input;
//   while (true) {
//     if (cin.peek() == '\n') {
//       cin.ignore();
//       break;
//     }
//     cin >> input;
//     arr.push_back(input);
//   }

//   QuickSort qs;
//   RecursiveBinarySearch rbs;

//   vector<int> sortedArr = qs.sort(arr);

//   bool found = rbs.search(sortedArr, 1);
//   if (found == true) {
//     cout << "true ";
//   } else {
//     cout << "false ";
//   }

//   for (vector<int>::size_type i = 0; i < sortedArr.size(); i++) {
//     cout << sortedArr[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }