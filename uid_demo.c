#include "./mylib.h"

int main()
{
  printf("real uid: \t\t%d\n", getuid());
  printf("effective uid: \t\t%d\n", geteuid());
  return 0;
}
