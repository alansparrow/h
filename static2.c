#include <stdio.h>

void func() {
  int var = 5;
  static int static_var = 5;

  printf("\t[in func] var @ %p = %d\n", &var, var);
  printf("\t[in func] static_var @ %p = %d\n", &static_var, static_var);
  var++;
  static_var++;
}

int main() {
  static int static_var = 1337;

  for (int i = 0; i < 5; i++) {
    printf("[in main] static_var @ %p = %d\n", &static_var, static_var);
    func();
  }

  return 0;
}
