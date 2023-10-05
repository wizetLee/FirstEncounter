//
// Created by wizet on 2023/10/3.
//

#ifndef FIRSTENCOUNTER_STACK_STACK_H_
#define FIRSTENCOUNTER_STACK_STACK_H_

template<class Type>
class Stack {

 private:
  // 指定尺寸（需要一个动态尺寸的
  Type items[100];
  int top;

 public:
  Stack();
  bool isEmpty();
  bool isFull();
  bool push(const Type &a);
  bool pop(Type &a);
};

#endif//FIRSTENCOUNTER_STACK_STACK_H_
