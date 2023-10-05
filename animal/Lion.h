//
// Created by wizet on 2023/9/25.
//

#ifndef FIRSTENCOUNTER__LION_H_
#define FIRSTENCOUNTER__LION_H_

#include "Animal.h"
namespace Zoo {

class Lion : public Animal {

 public:
  Lion(const std::string &name, int age) : Animal(name, age) {}
  virtual ~Lion() {};
  // 虚函数
  virtual Lion& play();
  virtual void eat();
};

}// namespace Zoo

#endif//FIRSTENCOUNTER__LION_H_
