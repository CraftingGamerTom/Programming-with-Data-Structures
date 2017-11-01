/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Single_Linked_List.h
 * Author: hloi
 *
 * Created on May 21, 2017, 6:28 PM
 */

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

/*<programming_project chapter="4" number="1">*/
#include <cstddef>
#include <stdexcept>
/** Class to implement a single linked list */
template <typename Item_Type>
class Single_Linked_List
{
 public:

  /** Construct an empty Single_Linked_List */
  Single_Linked_List() : head(NULL), tail(NULL), num_items(0) {}

  /** Insert an item at the front of the list
      @param item The item to be inserted
  */
  void push_front(const Item_Type& item);

  /** Insert an item at the end of the list
      @param item The item to be inserted
  */
  void push_back(const Item_Type& item);

  /** Remove the front item of the list */
  void pop_front();

  /** Remove the last item of the list */
  void pop_back();

  /** Return a reference to the front item of the list
      @return A reference to the fron item of the list
  */
  Item_Type& front();

  /** Return a const reference to the front item of the list
      @return A const reference to the front item of the list
  */
  const Item_Type& front() const;

  /** Return a reference to the back item of the list
      @return A reference to the back item of the list
  */
  Item_Type& back();

  /** Return a const reference to the back item of the list
      @return A const reference to the back item of the list
  */
  const Item_Type& back() const;

  /** Determine if the list is empty
      @return true if the list is empty
  */
  bool empty() const {return num_items == 0;}

  /** Return the number of items in the list
      @return The number of items in the list
  */
  size_t size() const {return num_items;}

  /** Insert item at position index (starting at 0).  Insert
      at the end of index is beyond the end of the list.
      @param index The poisition to insert the item
      @param item The item to be inserted
  */
  void insert(size_t index, const Item_Type& item);

  /** Return a reference to the item at position index
      @param index The index of the item
      @return A reference to the item at index
  */
  Item_Type& get(size_t index);

  /** Return a const reference to the item at position index
      @param index The index of the item
      @return A const reference to the item at index
  */
  const Item_Type& get(size_t index) const;


  /** Remove the item at position index.
      @return true if the removal is sucessful; false if index is
      beyond the end of the list
  */
  bool remove(size_t index);

  /** Return the position of the first occurence of item.
      @return The position of the first occurence of the item. Return
      the size of the list if it is not found
  */
  size_t find(const Item_Type& item);

 private:
  #include "Node.h"
  struct Node* head;
  struct Node* tail;
  size_t num_items;

};
/**
 * implement the functions that specified in this header file to the section
 * in below or put them in a separate file.  If you decide to put the code in
 * a separate file, don't use .cpp extension.
 */
#include "Single_Linked_List.cpp"

#endif /* SINGLE_LINKED_LIST_H */
