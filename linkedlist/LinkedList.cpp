#include "LinkedList.h"

#include <bits/stdc++.h>

#include <iostream>
using namespace std;

LinkedList::LinkedList() { head = nullptr; }

LinkedList::LinkedList(int* array, int len) {
  head = nullptr;

  for (int i = 0; i < len; ++i) {
    insertPosition(i + 1, array[i]);
  }
}

LinkedList::~LinkedList() {
  while (head != nullptr) {
    if (head == nullptr) {
      return;
    }
    Node* temp = head;
    head = head->link;
    delete temp;
  }
}

void LinkedList::insertPosition(int pos, int newNum) {
  Node* newNode = new Node();
  newNode->data = newNum;
  newNode->link = NULL;

  if (head == nullptr || pos <= 1) {
    newNode->link = head;
    head = newNode;

  } else {
    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
      if (temp != NULL) {
        temp = temp->link;
      }
    }

    newNode->link = temp->link;
    temp->link = newNode;
  }
}

bool LinkedList::deletePosition(int pos) {
  int index = 1;
  Node* current = head;
  while ((index != pos - 1) && (current->link != nullptr)) {
    current = current->link;
    index++;
  }
  if (current->link == nullptr) {
    return false;
  }

  Node* temp = current->link;
  current->link = temp->link;
  delete temp;
  return true;
}

int LinkedList::get(int pos) {
  Node* current = head;
  int counter = 1;

  while ((counter < pos) && (current != nullptr)) {
    current = current->link;
    counter++;
  }
  if (current == nullptr || pos <= 0) {
    return numeric_limits<int>::max();
  }
  return current->data;
}

int LinkedList::search(int target) {
  Node* currentNode = head;
  int counter = 1;

  while (currentNode != nullptr) {
    if (currentNode->data == target) {
      return counter;
    } else if (currentNode->data != target) {
      currentNode = currentNode->link;
      counter++;
    }
  }
  // default return -1
  return -1;
}

void LinkedList::printList() {
  Node* currentNode = head;
  cout << "[";
  while (currentNode != nullptr) {
    cout << currentNode->data;
    currentNode = currentNode->link;
    if (currentNode != nullptr) {
      cout << " ";
    }
  }
  cout << "]";
  cout << endl;
}
