//
// Created by wizet on 2023/10/1.
//

#ifndef FIRSTENCOUNTER_STOCK_STOCK_H_
#define FIRSTENCOUNTER_STOCK_STOCK_H_

#include <string>
class Stock {

 public:
  Stock();
  Stock(const std::string & co, long n = 0, double  pr = 0.0);
  ~Stock();
  void buy(long num, double price);
  void sell(long num, double price);
  void update(double price);
  void show();

 private:
  std::string company;
  long shares;
  double share_val;
  double total_val;
  void set_tot() {
    total_val = shares * share_val;
  }
};

#endif//FIRSTENCOUNTER_STOCK_STOCK_H_
