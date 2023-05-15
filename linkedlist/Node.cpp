#include "Node.h"
using namespace std;
Node::Node(){}

Node::Node(int data, Node* link) {
  this->data = data;
  this->link = link;
}

Node::~Node(){}
