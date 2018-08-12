#include "./mylib.h"

int main()
{
  long int seconds_since_epoch;
  struct tm current_time, *time_ptr;
  int hour, minute, second, day, month, year;

  seconds_since_epoch = time(0);  // pass time a null pointer as argument
  printf("time() - seconds since epoch: %ld\n", seconds_since_epoch);

  time_ptr = &current_time;  // set time_ptr to address of the current_time struct

  localtime_r(&seconds_since_epoch, time_ptr);

  // three different ways to access struct elements:
  hour = current_time.tm_hour;  // direct access
  minute = time_ptr->tm_min;  // access via pointer
  second = *((int *) time_ptr);

  printf("Current time is: %02d:%02d:%02d\n", hour, minute, second);

  return 0;
}
