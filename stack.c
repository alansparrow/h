#include <stdio.h>

void f0()
{
  printf("f0\n");
}

void f1()
{
  f0();
  printf("f1\n");
}

void f2()
{
  f1();
  printf("f2\n");
}

void f3()
{
  f2();
  printf("f3\n");
}

int main()
{
  int i = 100;
  i += 50;
  int j = 200;
  j -= i;
  f3();
  return 0;
}
