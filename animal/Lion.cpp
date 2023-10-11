//
// Created by wizet on 2023/9/25.
//

#include "Lion.h"

namespace Zoo {

Lion &Lion::play() {
  std::cout << "Lion& Lion::play()" << std::endl;
  return *this;
}

void Lion::eat() {
}

}// namespace Zoo