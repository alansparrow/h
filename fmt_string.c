#include <stdio.h>

int main()
{
  int A = -73;

  printf("var A is at addr: %x\n", &A);
  printf("var A is at addr: %08x\n", &A);
  printf("var A is at addr: %010x\n", &A);
  printf("var A is at addr: %012x\n", &A);
  
  
  return 0;
}
