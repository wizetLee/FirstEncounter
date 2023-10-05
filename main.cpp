#include <iomanip>
#include <iostream>
#include <sstream>

#include "animal/Lion.h"
#include "animal/Tiger.h"
#include "mongoose.h"

void playInZoo();
void newTest();
void reference();

//FIXME: 迁移到date中
enum wz_time_fmt {
  /*"%Y-%m-%d"*/
  yyyy_mm_dd = 100,
  /*"%Y-%m-%d %H:%M:%S"*/
  yyyy_mm_dd_HH_MM_SS,

  /*"%Y年%m月%d日"*/
  yyyy_mm_dd_chinese,
  /*"%Y年%m月%d日 %H时%M分%S秒"*/
  yyyy_mm_dd_HH_MM_SS_chinese,
};
std::string getTS(wz_time_fmt wztf);


//template <typename T>
//class MyTemplateClass {
// public:
//  template <typename U>
//  void Print(U value) {
//    std::cout << value << std::endl;
//  }
//};

int main(int argc, char *argv[]) {

  {
//    MyTemplateClass<int> intObj;
//    intObj.Print("Hello, World!"); // 使用成员模板打印字符串
//    intObj.Print(123); // 使用成员模板打印字符串
  }

  // 计算参数的长度
  {
    int argc = 0;
    while (argv[argc] != nullptr) {
      ++argc;
    }
    std::cout << "argv的参数长度是：" << argc << std::endl;
  }
  // 参数检查
  {

    try {
      double c = std::stod("21312213127316731263716237613781213127316731263716237613782131221312731673126371623761378121312731673126371623761378213122131273167312637162376137812131273167312637162376137821312213127316731263716237613781213127316731263716237613782131221312731673126371623761378121312731673126371623761378213122131273167312637162376137812131273167312637162376137821312213127316731263716237613781213127316731263716237613782131221312731673126371623761378121312731673126371623761378213122131273167312637162376137812131273167312637162376137821312213127316731263716237613781213127316731263716237613782131221312731673126371623761378121312731673126371623761378213122131273167312637162376137812131273167312637162376137821312213127316731263716237613781213127316731263716237613782131221312731673126371623761378121312731673126371623761378213122131273167312637162376137812131273167312637162376137821312213127316731263716237613781213127316731263716237613782131221312731673126371623761378121312731673126371623761378213122131273167312637162376137812131273167312637162376137821312213127316731263716237613781213127316731263716237613782131221312731673126371623761378121312731673126371623761378213122131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137812131273167312637162376137817316731263716237613781213127316731263716237613781213127316731263716237613781213127316731263716237613781213127316731263716237613781213127316731263716237613781213127316731263716237613781213127316731263716237613781213127316731263716237613781213127316731263716237613781.1");
    } catch (const std::invalid_argument &e) {
      // 捕获 std::invalid_argument 异常
      std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range &e) {
      // 捕获 std::out_of_range 异常（如果超出了 double 的范围）
      std::cerr << "Out of range: " << e.what() << std::endl;
    }
  }

  // Zoo 动物园
  playInZoo();

  //  {// 迭代器长度获取
  //    std::vector<int> vec = {1, 2, 3, 4, 5};
  //    std::vector<int>::iterator it = vec.begin();// 获取指向第一个元素的迭代器
  //    std::vector<int>::iterator end = vec.end();
  //
  //    {// 迭代器长度计算
  //      {
  //        int argc = std::distance(end, it);
  //        std::cout << "agrc = " << argc << std::endl;// -5
  //      }
  //      {
  //        int argc = std::distance(it, end);
  //        std::cout << "agrc = " << argc << std::endl;// 5
  //      }
  //    }
  //
  //    std::vector<std::string> a_vector = {std::string("aaa"), std::string("cba"), std::string("abc")};
  //    a_vector.size();
  //  }

  {// 时间转换
    std::cout << getTS(wz_time_fmt::yyyy_mm_dd) << std::endl;
    std::cout << getTS(wz_time_fmt::yyyy_mm_dd_chinese) << std::endl;
    std::cout << getTS(wz_time_fmt::yyyy_mm_dd_HH_MM_SS) << std::endl;
    std::cout << getTS(wz_time_fmt::yyyy_mm_dd_HH_MM_SS_chinese) << std::endl;
  }

  {// 枚举相关
    wz_time_fmt fmt;
    fmt = wz_time_fmt::yyyy_mm_dd_HH_MM_SS;
    fmt = (enum wz_time_fmt) 2;// 枚举类型转换（强转
    switch (fmt) {
      case wz_time_fmt::yyyy_mm_dd:
        break;
      case wz_time_fmt::yyyy_mm_dd_chinese:
        break;
      case wz_time_fmt::yyyy_mm_dd_HH_MM_SS:
        break;
      case wz_time_fmt::yyyy_mm_dd_HH_MM_SS_chinese:
        break;
      default:
        std::cout << "没有索引成功" << std::endl;
    }
  }

  {
    newTest();
  }
  {
    reference();
  }

  return 0;
}

std::string getTS(wz_time_fmt wztf) {
//  // 使用 std::chrono::system_clock::now() 获取高精度时间 (允许您进行微秒和纳秒级别的计时，更适合需要高精度时间信息的应用，例如性能测量、计时器等。
//  std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
//  std::chrono::milliseconds ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
//  // std::cout << "High Precision Time (milliseconds since epoch): " << ms.count() << std::endl;


  // 使用 std::time(nullptr) 获取当前时间的秒数
  std::time_t t = std::time(nullptr);
  struct tm *tm = std::localtime(&t);
  auto fmt = "";
  switch (wztf) {
    case wz_time_fmt::yyyy_mm_dd:
      fmt = "%Y-%m-%d";
      break;
    case wz_time_fmt::yyyy_mm_dd_chinese:
      fmt = "%Y年%m月%d日";
      break;
    case wz_time_fmt::yyyy_mm_dd_HH_MM_SS:
      fmt = "%Y-%m-%d %H:%M:%S";
      break;
    case wz_time_fmt::yyyy_mm_dd_HH_MM_SS_chinese:
      fmt = "%Y年%m月%d日 %H时%M分%S秒";
      break;
  }
  auto pt = std::put_time(tm, fmt);
  std::stringstream ss;
  ss << pt;
  std::string dateStr = ss.str();
  return dateStr;
}

void reference() {
  //
  int rats = 10;
  int &rodents = rats;
  std::cout << &rodents << std::endl;
  std::cout << &rats << std::endl;

  int &&s = std::sqrt(36);//  并不能使用 int &s
}

void newTest() {

  int *pi = new int(6);
  double *pd = new double(99.99);
  struct where {
    double x;
    double y;
    double z;
  };
  where *one = new where{1, 2, 3};
  int *ar = new int[4]{1, 2, 3, 4};
  int *pin = new int{};
  int *pin2 = new int();
  //std::cout << *pin2 << std::endl;

  delete pi;
  delete pd;
  delete one;
  delete[] ar;
  delete pin;
  delete pin2;

  int count = 100;
  int *count_new = new int[count];
  for (int i = 0; i < count; i++) {
    count_new[i] = i + 10000;
    std::cout << "count_new[" << i << "] = " << count_new[i] << std::endl;
  }
  delete[] count_new;
}

void playInZoo() {

//  Zoo::Lion *lion = new Zoo::Lion(std::string("zhuzhu"), 1);
//  delete lion;

  //Zoo::Animal tiger 这样定义为什么会调用两次析构函数
  Zoo::Tiger tiger = Zoo::Tiger(std::string("miaomiao"), 2);


  /// 空白演示
//  Zoo::Lion *emptyDisplay = nullptr;
//  if (emptyDisplay != nullptr) {
//    emptyDisplay->displayInfo();
//  }



  // 判断一个类的类型
//  Animal* animal = new Dog();
//  if (typeid(*animal) == typeid(Dog)) {
//    std::cout << "animal is of type Dog." << std::endl;
//  } else {
//    std::cout << "animal is not of type Dog." << std::endl;
//  }
//  delete animal;
}
