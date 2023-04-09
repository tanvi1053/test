#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  size_t start = 0;
  size_t found;
  for (size_t i = 1; i <= s2.size(); i++) {
    found = s1.find(s2.substr(0, i), start);

    if (found != string::npos) {
      result.push_back(found);
      start = found;

    } else {
      result.push_back(found);
      break;
    }
  }
  if (found != string::npos) {
    while (found != string::npos) {
      found = s1.find(s2, start + 1);
      if (found != string::npos) {
        result.push_back(found);
        start = found;
      }
    }
  }
  return result;
}