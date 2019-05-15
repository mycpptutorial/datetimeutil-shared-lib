#include "datetimeutil.h"
#include <iostream>
#include <ctime>
#include <time.h>

string time_to_string(tm* time, string pattern) {
  std::cout << "/* message */" << '\n';
  return "";
}

int main() {
  // current date/time based on current system
 time_t now = time(0);

 // convert now to string form
 char* dt = ctime(&now);

 cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
}
