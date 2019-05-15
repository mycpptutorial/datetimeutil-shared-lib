#include "datetimeutil.h"
#include <time.h>
#include <ctime>
#include <iostream>

char* time_to_string(tm* time, string pattern) {
  char* result = new char[20];
  strftime(result, 20, "%Y-%m-%d %H:%M:%S", time);
  return result;
}
