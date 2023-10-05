//
// Created by wizet on 2023/9/29.
//

#ifndef FIRSTENCOUNTER_DATE_WZDATE_H_
#define FIRSTENCOUNTER_DATE_WZDATE_H_

#include <iostream>
class WZDate {

 public:
  // 时间展示
  static void count_down(long total_seconds);

  // 定义在类声明重的函数都自动成为内联函数 （也可以在.cpp定义的时候加上inline
  void displayInfo() {
    std::cout << "内联函数输出结果" << std::endl;
  }
};

#endif//FIRSTENCOUNTER_DATE_WZDATE_H_
