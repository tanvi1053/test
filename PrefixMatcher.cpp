
#include "PrefixMatcher.h"
using namespace std;

PrefixMatcher::PrefixMatcher() { root = new TrieNode(); }

PrefixMatcher::~PrefixMatcher() {}

void PrefixMatcher::insert(string address, int routerNumber) {
  TrieNode* curr = root;

  for (size_t i = 0; i < address.length(); ++i) {
    char indivLetter = address[i];
    int index = indivLetter - '0';

    if (curr->children[index] == nullptr) {
      curr->children[index] = new TrieNode();
    }
    curr = curr->children[index];
  }
   curr->isEndOfWord = true;
   curr->routerNumber = routerNumber;

}



int PrefixMatcher::selectRouter(string networkAddress) {
  TrieNode* curr = root;
  int routerNumber = -1;

  for (size_t i = 0; i < networkAddress.length(); ++i) {
    char indivLetter = networkAddress[i];
    int index = indivLetter - '0';
    if (curr->children[index] == nullptr) {
      break;
    }
    curr = curr->children[index];
    if (curr->routerNumber != -1) {
      routerNumber = curr->routerNumber;
    }
  }

  return routerNumber;
}