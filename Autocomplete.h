#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <string>
#include <vector>

class Autocomplete {
 private:
  struct TrieNode {
    bool isEndOfWord;
    std::vector<TrieNode*> children;
    TrieNode() : isEndOfWord(false), children(26, nullptr) {}
  };
  TrieNode* root;

 public:
  Autocomplete();
  ~Autocomplete();
  void insert(std::string word);
  // add a word to the known words
  std::vector<std::string> getSuggestions(std::string partialWord);
  // return the known words that start with partialWord
  void helper(TrieNode* node, std::string prefix,
              std::vector<std::string>& suggestions);
  // helper to adhere to interface
};

#endif