//
// Created by wizet on 2023/9/29.
//

#include "WZDate.h"

// 静态函数
 void WZDate::count_down(long total_seconds) {
  int days = total_seconds / 86400;
  int hours = (total_seconds % 86400) / 3600;
  int minutes = ((total_seconds % 86400) % 3600) / 60;
  int seconds = ((total_seconds % 86400) % 3600) % 60;
  // 输出为时分秒
};