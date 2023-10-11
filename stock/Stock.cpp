//
// Created by wizet on 2023/10/1.
//

#include "Stock.h"
#include <iostream>

void Stock::show() {

  // 获取原状态
  auto orgFlags = std::cout.flags();
  std::streamsize orgPrec = std::cout.precision();

  std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
  std::cout << "Company: " << company << " Shares: " << shares << "\n"
            << "SharePrice: $" << share_val;
  std::cout.precision(2);

  // 恢复状态
  // restore original format;
  std::cout.setf(orgFlags);
  std::cout.precision(orgPrec);
}