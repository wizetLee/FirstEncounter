#include <iostream>
#include <optional>
#include <sstream>
#include <cmath>
#include <hiredis/hiredis.h>

int aFc(int a, int b) {
  return a + b;
}

int main() {


  std::cout << "Hello, FirstEncounter" << std::endl;

  int a = 1;


  int (*addPtr)(int, int);
  // 两种都行
  addPtr = &aFc;
  addPtr = aFc;


  auto cc2 =  []() -> void {

  };

  std::string myString = "xx";
  std::string myString2 = std::string("xx");


  std::string beMove = std::string("准备被移动的字符串");
  std::string moved = std::move(beMove);
  std::cout << "??" << std::endl;
  std::cout << "beMove:" << beMove << std::endl;
  std::cout << "moved:"<< moved << std::endl;



  //FIXME: 读取系统文件的信息

  std::optional<std::string> c{"撒撒撒"};
  if (c.has_value()) {
    std::cout << "有数据" << std::endl;
  } else {
    std::cout << "没有数据" << std::endl;
  }

  {
    std::stringstream ss;
    ss.setf(std::ios_base::fixed);
    ss.precision(2);
  }

  //std::string_view
  std::string("df").size();
  auto size = std::pow(1, 2);
  auto pi = M_PI;

  return 0;
}
