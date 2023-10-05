//
// Created by wizet on 2023/10/3.
//

#include "Stack.h"

template<class Type>
Stack<Type>::Stack() {
  top = 0;
}
template<class Type>
bool Stack<Type>::isEmpty() {
  return this->top == 0;
}
template<class Type>
bool Stack<Type>::isFull() {
  return this->top == 100;
}
template<class Type>
bool Stack<Type>::push(const Type &target) {
  return false;
}
template<class Type>
bool Stack<Type>::pop(Type &result) {
  return false;
}