//
// Created by wizet on 2023/9/29.
//

#include "Animal.h"

namespace Zoo {

void Animal::displayInfo() {
  std::cout << "Name: " << name_ << std::endl;
  std::cout << "Age: " << age_ << std::endl;
}

// 默认构造函数
Animal::Animal() {
  auto length = std::strlen("C++");
  auto len = length + 1;
  nickName_ = new char[len];
  std::strcpy(nickName_, "C++");
  std::cout << "构造函数Animal" << std::endl;
}
// 析构函数
Animal::~Animal() {
  std::cout << "析构函数调用了~Animal" << std::endl;
  delete[] nickName_;
}

Zoo::Animal &Animal::play() {
  std::cout << "Zoo::Animal & Animal::play()" << std::endl;
  return *this;
}

}// namespace Zoo