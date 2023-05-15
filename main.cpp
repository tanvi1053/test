
// vector<int> split_to_ints(string input, string valid) {
//   size_t startPos = 0;
//   size_t endPos;
//   size_t subStringLength;
//   vector<int> result;
//   do {
//     endPos = input.find_first_not_of(valid, startPos);
//     // if not found in string...
//     if (endPos == string::npos) {
//       subStringLength = input.length();
//     }
//     // otherwise,
//     else {
//       subStringLength = endPos - startPos;
//     }
//     result.push_back(stoi(input.substr(startPos, subStringLength)));
//     startPos = input.find_first_of(valid, endPos);
//   } while (endPos != string::npos);
//   return result;
// }
// int main(void) {
//   // take-in inputs -- note this code assumes for a valid input format!
//   string user_input;
//   getline(cin, user_input);
//   // cut out the numbers from user_input & place into vector of ints
//   string numeric_characters = "-0123456789";
//   vector<int> numeric_inputs = split_to_ints(user_input, numeric_characters);
//   // copy all (but last 2) digits from vector into a c-array (to be passed
//   into
//   // LinkedList constructor)
//   int array_size = numeric_inputs.size() - 2;
//   int* input_array = new int[array_size];
//   for (unsigned int i = 0; i < (numeric_inputs.size() - 2); i++) {
//     input_array[i] = numeric_inputs[i];
//   }
//   // then, copy the last 2 digits from user_input (ie the parameters) into a
//   // parameter array int param_array[2] = {
//   numeric_inputs.at(numeric_inputs.size() - 2),
//       numeric_inputs.at(numeric_inputs.size() - 1)
// };
// // finally, copy the letter code into a new variable
// // string commandCode;
// for (unsigned int i = 0; i < user_input.length(); i++) {
//   if (isalpha(user_input[i])) {
//     commandCode.push_back(user_input[i]);
//   }
// }
// // create list based on input data & array size
// LinkedList submissionList(input_array, array_size);
// // run function on the list depending on letter code, using the parameters
// if (commandCode == "I") {
//   submissionList.insertPosition(param_array[0], param_array[1]);
// } else if (commandCode == "D") {
//   if (!submissionList.deletePosition(param_array[0])) {
//     cout << "ERROR ";
//   }
// } else if (commandCode == "S") {
//   int got = submissionList.search(param_array[0]);
//   if (got == -1) {
//     cout << "ERROR ";
//   } else {
//     std::cout << got << " ";
//   }
// } else if (commandCode == "G") {
//   int got = submissionList.get(param_array[0]);
//   if (got == numeric_limits<int>::max()) {
//     cout << "ERROR ";
//   } else {
//     std::cout << got << " ";
//   }
// } else {
//   cout << "invalid command" << endl;
//   return 0;
// }
// submissionList.printList();
// return 0;
// }

// int main() {
//   std::string numString1, numString2;
//   numString1 = "1234567890" ;
//   numString2 = "9876543210";
//   BigNumCalc calc;
//   auto num1 = calc.buildBigNum(numString1);
//   auto num2 = calc.buildBigNum(numString2);
//   auto sum = calc.add(num1, num2);
//   std::cout << "The sum is: ";
//   for (int digit : sum) {
//     std::cout << digit;
//   }
//   std::cout << std::endl;
//   return 0;
//}

// int main() {
//   BigNumCalc bnc;
//   std::list<int> num1 = bnc.buildBigNum("9876543210");
//   std::list<int> num2 = bnc.buildBigNum("1234567890");
//   std::list<int> result = bnc.sub(num1, num2);
//   cout << "Expected result: 8641975320\n";
//   cout << "Actual result: ";
//   for (int digit : result) {
//     cout << digit;
//   }
//   cout << endl;
//   return 0;
// }

// int main() {
//   int arr[] = {3, 4, 2, 1};
//   int len = sizeof(arr) / sizeof(arr[0]);

//   LinkedList myList(arr, len);

//   std::cout << "Before deletion: ";
//   myList.printList();

//   bool deleted = myList.deletePosition(5);

//   if (deleted) {
//     std::cout << "After deletion: ";
//     myList.printList();
//   } else {
//     std::cout << "Deletion failed!\n";
//   }

//   return 0;
// }


// int main() {
//   int arr[] = {45, 20, 2, 10};
//   LinkedList myList(arr, 4);

//   std::cout << "Initial list: ";
//   myList.printList();  // Expecting output: [45 20 2 10]

//   std::cout << "Getting element at position 1: ";
//   int result = myList.get(5);
//   std::cout << result << std::endl;  // Expecting output: 2

//   return 0;
// }


// int main() {
//   int arr[] = {1,2,3,4,5,6,7,8,9};
//   LinkedList myList(arr, 9);

//   int target = 7;
//   int index = myList.search(target);

//   std::cout << "Found " << target << " at index " << index << std::endl;

//   target = -32;
//   index = myList.search(target);

//   std::cout << "Found " << target << " at index " << index << std::endl;

//   return 0;
// }


// #include "Autocomplete.h"
// #include <iostream>

// int main() {
//     Autocomplete autocomplete;

//     // Insert some words into the autocomplete dictionary
//     autocomplete.insert("ant");
//     autocomplete.insert("ants");
//     autocomplete.insert("anti");
//     autocomplete.insert("align");

//     // Get suggestions for different partial words
//     std::vector<std::string> suggestions;

//     suggestions = autocomplete.getSuggestions("a");
//     std::cout << "Suggestions for 'a': ";
//     for (const auto& suggestion : suggestions) {
//         std::cout << suggestion << " ";
//     }
//     std::cout << std::endl;

//     suggestions = autocomplete.getSuggestions("an");
//     std::cout << "Suggestions for 'an': ";
//     for (const auto& suggestion : suggestions) {
//         std::cout << suggestion << " ";
//     }
//     std::cout << std::endl;

//     suggestions = autocomplete.getSuggestions("al");
//     std::cout << "Suggestions for 'al': ";
//     for (const auto& suggestion : suggestions) {
//         std::cout << suggestion << " ";
//     }
//     std::cout << std::endl;

//     suggestions = autocomplete.getSuggestions("ant");
//     std::cout << "Suggestions for 'ant': ";
//     for (const auto& suggestion : suggestions) {
//         std::cout << suggestion << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

#include <iostream>
#include "PrefixMatcher.h"

int main() {
  PrefixMatcher matcher;

  matcher.insert("110011011101", 1);
  matcher.insert("110011011", 2);
  matcher.insert("11001101", 3);

  std::string destinationAddress = "11001101110";
  int selectedRouter = matcher.selectRouter(destinationAddress);
  std::cout << "router: " << selectedRouter << std::endl;

  return 0;
}
