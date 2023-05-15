
#include "BigNumCalc.h"
#include "LinkedList.h"
#include "Node.h"

using namespace std;

BigNumCalc::BigNumCalc() {}

BigNumCalc::~BigNumCalc() {}

list<int> BigNumCalc::buildBigNum(string numString) {
  list<int> stringList;
  for (char c : numString) {
    stringList.push_back(c - '0');
  }
  return stringList;
}


list<int> BigNumCalc::add(list<int> num1, list<int> num2) {
  list<int> sumList;
  int carry = 0;
  list<int>::reverse_iterator n1it = num1.rbegin();
  list<int>::reverse_iterator n2it = num2.rbegin();
  while (n1it != num1.rend() || n2it != num2.rend() || carry != 0) {
    int digitSum = carry;
    if ((n1it != num1.rend()) && (n2it != num2.rend())) {
      digitSum = digitSum + *n1it + *n2it;
      n1it++;
      n2it++;
    }
    carry = digitSum / 10;
    digitSum = digitSum % 10;
    sumList.push_front(digitSum);
  }
  return sumList;
}



list<int> BigNumCalc::sub(list<int> num1, list<int> num2) {
  list<int> diffList;
  int borrow = 0;
  while (!num1.empty() || !num2.empty() || borrow < 0) {
    int digitDiff = borrow;

    digitDiff = digitDiff + num1.back();
    num1.pop_back();
    digitDiff = digitDiff - num2.back();
    num2.pop_back();

    if (digitDiff < 0) {
      digitDiff = digitDiff + 10;
      borrow = -1;
    } else {
      borrow = 0;
    }
    diffList.push_front(digitDiff);
  }

  while (diffList.size() > 1 && diffList.front() == 0) {
    diffList.pop_front();
  }
  return diffList;
}



list<int> BigNumCalc::mul(list<int> num1, list<int> num2) {
    list<int> result;
    int carry = 0;
    list<int>::reverse_iterator it = num1.rbegin();
    for (; it != num1.rend(); ++it) {
        int digit = num2.front();
        int product = ((*it) * digit) + carry;
        result.push_front(product % 10);
        carry = product / 10;
    }
    if (carry > 0) {
        result.push_front(carry);
    } 
    return result;
}
