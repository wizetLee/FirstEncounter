//
// Created by wizet on 2023/10/3.
//

#include "Stack2.h"

template<class Type>
Stack2<Type>::Stack2(int size) {
  stackSize = size;
  this->items = new Type[stackSize];
  top = 0;
}

template<class Type>
Stack2<Type>::Stack2(Stack2 &st2) {
  top = st2.top;
  stackSize = st2.stackSize;
  delete [] this->items;
  this->items = new Type[stackSize];
}

template<class Type>
Stack2<Type>::~Stack2() {
  delete [] this->items;
}

template<class Type>
Stack2<Type> &Stack2<Type>::operator=(const Stack2<Type> &st) {
}