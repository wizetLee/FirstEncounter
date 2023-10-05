//
// Created by wizet on 2023/10/3.
//

#ifndef FIRSTENCOUNTER_STACK_STACK2_H_
#define FIRSTENCOUNTER_STACK_STACK2_H_

template<class Type>
class Stack2 {

 private:
  int stackSize;
  Type *items;
  int top;

 public:
  Stack2(int size = 10);
  Stack2(Stack2 &st2);
  ~Stack2();
  Stack2 &operator=(const Stack2 &st);
};

#endif//FIRSTENCOUNTER_STACK_STACK2_H_
