
#include "Autocomplete.h"
using namespace std;

Autocomplete::Autocomplete() { root = new TrieNode(); }

Autocomplete::~Autocomplete() {}

void Autocomplete::insert(string word) {
  TrieNode* curr = root;

  for (int i = 0; i < word.length(); ++i) {
    char indivLetter = word[i];
    int index = indivLetter - 'a';

    if (curr->children[index] == nullptr) {
      curr->children[index] = new TrieNode();
    }

    curr = curr->children[index];
  }

  curr->isEndOfWord = true;
}

vector<string> Autocomplete::getSuggestions(string partialWord) {
  vector<string> vectorOfSuggestions;
  TrieNode* curr = root;

  for (int i = 0; i < partialWord.length(); ++i) {
    char indivLetter = partialWord[i];
    int index = indivLetter - 'a';

    if (curr->children[index] == nullptr) {
      return vectorOfSuggestions;
    }

    curr = curr->children[index];
  }

  helper(curr, partialWord, vectorOfSuggestions);

  return vectorOfSuggestions;
}

void Autocomplete::helper(TrieNode* indivLetterNode, string partialWord, vector<string>& vectorOfSuggestions) {
  if (indivLetterNode->isEndOfWord == true) {
    vectorOfSuggestions.push_back(partialWord);
  }

  for (int i = 0; i < 26; i++) {
    if (indivLetterNode->children[i] != nullptr) {
      char newLetter = 'a' + i;
      helper(indivLetterNode->children[i], partialWord + newLetter, vectorOfSuggestions);
    }
  }
}
