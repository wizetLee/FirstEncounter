//
// Created by wizet on 2023/9/30.
//

#ifndef FIRSTENCOUNTER_DECIMAL_DECIMAL_H_
#define FIRSTENCOUNTER_DECIMAL_DECIMAL_H_

#include <iostream>
class Decimal {
 public:

  // 精度保留处理
  void tmp() {

    // 获取原状态
    auto orgFlags = std::cout.flags();
    std::streamsize orgPrec = std::cout.precision();

    //    // double 类型的最大精度
    //    auto c = std::numeric_limits<double>::max_digits10;

    double num = 3.14159265358979323846;

    // 设置输出精度为2位小数
    std::cout << "默认精度: " << num << std::endl;
    std::cout.precision(2);              // 仅保留精度
    std::cout.setf(std::ios_base::fixed);// 设置四舍五入
    std::cout << "精度为2位小数: " << num << std::endl;

    // 恢复默认精度
    std::cout.precision(std::numeric_limits<double>::max_digits10);

    std::cout << "默认精度: " << num << std::endl;

    // 恢复状态
    // restore original format;
    std::cout.setf(orgFlags);
    std::cout.precision(orgPrec);
  }
};

#endif//FIRSTENCOUNTER_DECIMAL_DECIMAL_H_
