#ifndef EXPRESSION_TREE_H_
#define EXPRESSION_TREE_H_

#include <string>
#include <iosfwd>
#include "Binary_Tree.h"

/** Class to model an expression using a binary tree */
class Expression_Tree {
 public:
  Expression_Tree() {}
  void read_expression_tree(std::istream&);
  int evaluate() const;
 private:
  int evaluate(const Binary_Tree<std::string>&) const;
  Binary_Tree<std::string> the_tree;
};

#endif
