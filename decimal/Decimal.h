//
// Created by wizet on 2023/9/30.
//

#ifndef FIRSTENCOUNTER_DECIMAL_DECIMAL_H_
#define FIRSTENCOUNTER_DECIMAL_DECIMAL_H_

#include <iomanip>
#include <iostream>
#include <sstream>
class Decimal {

 private:
  int c = 1;//默认初始化

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


  /// double保留指定位数的小数位
  std::string doubleToStringWithPrecision(double value, int precision) {

    //ss.precision(2);
    // 使用 std::setprecision 设置小数位数
    std::stringstream ss;
    ss << std::fixed << std::setprecision(precision) << value;


    // ss.setf(std::ios_base::fixed);  与 ss << std::fixed 是同一个意思，std::ios_base::fixed：表示浮点数以固定点表示法输出。
    // ss.precision(precision); 同样


    return ss.str();
  }
};

#endif//FIRSTENCOUNTER_DECIMAL_DECIMAL_H_
