//
// Created by wizet on 2023/9/25.
//

#ifndef FIRSTENCOUNTER__TIGER_H_
#define FIRSTENCOUNTER__TIGER_H_

#include "Animal.h"
namespace Zoo {

class Tiger : public Animal {
 public:
  Tiger(const std::string &name, int age) : Animal(name, age) {}
  virtual ~Tiger(){};
  // 虚函数
  virtual Tiger &play();
  virtual void eat();
};

}// namespace Zoo

#endif//FIRSTENCOUNTER__TIGER_H_
