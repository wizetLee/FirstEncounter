//
// Created by wizet on 2023/9/29.
//

#ifndef FIRSTENCOUNTER_ANIMAL_ANIMAL_H_
#define FIRSTENCOUNTER_ANIMAL_ANIMAL_H_

#include <iostream>
#include <string>

namespace Zoo {

class Animal {

 public:
  // 类的构造函数，用于初始化对象的属性
  Animal(const std::string &name, int age) :  name_(name), age_(age) {
    auto length = std::strlen("C++");
    auto len = length + 1;
    nickName_ = new char [len];
    std::strcpy(nickName_, "C++");
    std::cout << "构造函数Animal" << std::endl;
  }
  // 默认构造函数
  Animal();
  // 析构函数
  virtual ~Animal();

  // 成员函数，用于获取和显示对象的属性
  void displayInfo();

  std::string dream;

  // cout << 处理
  friend std::ostream &operator<<(std::ostream &os, const Animal &animal) {
    os << "Name: " << animal.name_ << ", Age: " << animal.age_;
    return os;
  }

  // 虚函数
  virtual Animal &play();

  // 纯虚函数（派生类必须要实现
  virtual void eat() = 0;

 private:
  // 类的成员变量，用于存储对象的属性
  std::string name_;
  int age_;

  char * nickName_;
};

}// namespace Zoo

#endif//FIRSTENCOUNTER_ANIMAL_ANIMAL_H_
