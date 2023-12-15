//
// Created by wizet on 2023/10/3.
//

#ifndef FIRSTENCOUNTER_STRING_ASTRING_H_
#define FIRSTENCOUNTER_STRING_ASTRING_H_

#include <iostream>
#include <string>
class aString {

  void temp() {
    // 练习

    { // 找字符串
      std::string text = "The quick brown fox";
      size_t found = text.find("quick"); // 查找子字符串
      if (found != std::string::npos) {
        std::cout << "子字符串找到了" << std::endl;
      }
    }

    { // 截取子字符串
      std::string text = "The quick brown fox";
      std::string subString = text.substr(4, 5);
    }

    { // 转换为字符串
      auto to_string_result = std::to_string(1.22); // 怎么转换精度哪？
    }

    { // 迭代访问字符串
      std::string text = "Hello";
      for (char c : text) {
        // 逐字符迭代访问字符串
      }
    }



  }
};

#endif//FIRSTENCOUNTER_STRING_ASTRING_H_
